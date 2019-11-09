
#include <linux/kernel.h>
#include <linux/clk.h>
#include <linux/delay.h>
#include <linux/sched.h>
#include "ddp_clkmgr.h"
#include "ddp_pwm_mux.h"
#include <linux/of.h>
#include <linux/of_address.h>
#include "ddp_reg.h"

#define PWM_MSG(fmt, arg...) pr_debug("[PWM] " fmt "\n", ##arg)
#define PWM_ERR(fmt, arg...) pr_info("[PWM] " fmt "\n", ##arg)

/* #define BYPASS_CLK_SELECT */

#ifdef BYPASS_CLK_SELECT
int disp_pwm_set_pwmmux(unsigned int clk_req)
{
	return 0;
}

int disp_pwm_clksource_enable(int clk_req)
{
	return 0;
}

int disp_pwm_clksource_disable(int clk_req)
{
	return 0;
}

bool disp_pwm_mux_is_osc(void)
{
	return false;
}
#else
static void __iomem *disp_pmw_mux_base;

#ifndef MUX_DISPPWM_ADDR /* disp pwm source clock select register address */
#define MUX_DISPPWM_ADDR (disp_pmw_mux_base + 0x110)
#endif
#ifdef HARD_CODE_CONFIG
#ifndef MUX_UPDATE_ADDR /* disp pwm source clock update register address */
#define MUX_UPDATE_ADDR (disp_pmw_mux_base + 0x4)
#endif
#endif
#ifndef OSC_ULPOSC_ADDR /* ULPOSC control register address */
#define OSC_ULPOSC_ADDR (disp_pmw_osc_base + 0x458)
#endif

/* clock hard code access API */
#define DRV_Reg32(addr) INREG32(addr)
#define clk_readl(addr) DRV_Reg32(addr)
#define clk_writel(addr, val) mt_reg_sync_writel(val, addr)

static int g_pwm_mux_clock_source = -1;

enum DDP_CLK_ID disp_pwm_get_clkid(unsigned int clk_req)
{
	enum DDP_CLK_ID clkid = -1;

	switch (clk_req) {
	case 0:
		clkid = ULPOSC_D16;
		break;
	case 1:
		clkid = ULPOSC_D2;
		break;
	case 2:
		clkid = UNIVPLL1_D8;
		break;
	case 3:
		clkid = CLK26M; /* Bypass config:default 26M */
		break;
	default:
		clkid = -1;
		break;
	}

	return clkid;
}

#define DTSI_TOPCKGEN "mediatek,topckgen"
static int disp_pwm_get_muxbase(void)
{
	int ret = 0;
	struct device_node *node;

	if (disp_pmw_mux_base != NULL) {
		PWM_MSG("TOPCKGEN node exist");
		return 0;
	}

	node = of_find_compatible_node(NULL, NULL, DTSI_TOPCKGEN);
	if (!node) {
		PWM_ERR("DISP find TOPCKGEN node failed\n");
		return -1;
	}
	disp_pmw_mux_base = of_iomap(node, 0);
	if (!disp_pmw_mux_base) {
		PWM_ERR("DISP TOPCKGEN base failed\n");
		return -1;
	}
	PWM_MSG("find TOPCKGEN node");
	return ret;
}

static unsigned int disp_pwm_get_pwmmux(void)
{
	unsigned int regsrc = 0;

	if (MUX_DISPPWM_ADDR != NULL)
		regsrc = clk_readl(MUX_DISPPWM_ADDR);
	else
		PWM_ERR("mux addr illegal");

	return regsrc;
}

int disp_pwm_set_pwmmux(unsigned int clk_req)
{
	unsigned int reg_before, reg_after;
	int ret = 0;
	enum DDP_CLK_ID clkid = -1;

	clkid = disp_pwm_get_clkid(clk_req);

	ret = disp_pwm_get_muxbase();
	reg_before = disp_pwm_get_pwmmux();

	PWM_MSG("clk_req=%d clkid=%d", clk_req, clkid);

	if (clkid != -1) {
		ddp_clk_prepare_enable(MUX_PWM);
		ddp_clk_set_parent(MUX_PWM, clkid);
		ddp_clk_disable_unprepare(MUX_PWM);
	}

	reg_after = disp_pwm_get_pwmmux();
	g_pwm_mux_clock_source = (reg_after>>16) & 0x3;
	PWM_MSG("PWM_MUX %x->%x", reg_before, reg_after);

	return 0;
}

static void __iomem *disp_pmw_osc_base;

static int get_ulposc_base(void)
{
	int ret = 0;
	struct device_node *node;

	if (disp_pmw_osc_base != NULL) {
		PWM_MSG("SLEEP node exist");
		return 0;
	}

	node = of_find_compatible_node(NULL, NULL, "mediatek,sleep");
	if (!node) {
		PWM_ERR("DISP find SLEEP node failed\n");
		return -1;
	}
	disp_pmw_osc_base = of_iomap(node, 0);
	if (!disp_pmw_osc_base) {
		PWM_ERR("DISP find SLEEP base failed\n");
		return -1;
	}

	return ret;
}

static int get_ulposc_status(void)
{
	unsigned int regosc;
	int ret = -1;

	if (get_ulposc_base() == -1) {
		PWM_ERR("get ULPOSC status fail");
		return ret;
	}

	regosc = clk_readl(OSC_ULPOSC_ADDR);
	if ((regosc & 0x5) != 0x5) {
		PWM_MSG("ULPOSC is off (%x)", regosc);
		ret = 0;
	} else {
		PWM_MSG("ULPOSC is on (%x)", regosc);
		ret = 1;
	}

	return ret;
}

static int ulposc_on(void)
{
	unsigned int regosc;

	if (get_ulposc_base() == -1)
		return -1;

	regosc = clk_readl(OSC_ULPOSC_ADDR);
	/* PWM_MSG("ULPOSC config : 0x%08x", regosc); */

	/* OSC EN = 1 */
	regosc = regosc | 0x1;
	clk_writel(OSC_ULPOSC_ADDR, regosc);
	regosc = clk_readl(OSC_ULPOSC_ADDR);
	/* PWM_MSG("ULPOSC config : 0x%08x after en", regosc); */
	udelay(11);

	/* OSC RST	*/
	regosc = regosc | 0x2;
	clk_writel(OSC_ULPOSC_ADDR, regosc);
	regosc = clk_readl(OSC_ULPOSC_ADDR);
	/* PWM_MSG("ULPOSC config : 0x%08x after rst 1", regosc); */
	udelay(40);
	regosc = regosc & 0xfffffffd;
	clk_writel(OSC_ULPOSC_ADDR, regosc);
	regosc = clk_readl(OSC_ULPOSC_ADDR);
	/* PWM_MSG("ULPOSC config : 0x%08x after rst 0", regosc); */
	udelay(130);

	/* OSC CG_EN = 1 */
	regosc = regosc | 0x4;
	clk_writel(OSC_ULPOSC_ADDR, regosc);
	regosc = clk_readl(OSC_ULPOSC_ADDR);
	/* PWM_MSG("ULPOSC config : 0x%08x after cg_en", regosc); */

	return 0;

}

static int ulposc_off(void)
{
	unsigned int regosc;

	if (get_ulposc_base() == -1)
		return -1;

	regosc = clk_readl(OSC_ULPOSC_ADDR);

	/* OSC CG_EN = 0 */
	regosc = regosc & (~0x4);
	clk_writel(OSC_ULPOSC_ADDR, regosc);
	regosc = clk_readl(OSC_ULPOSC_ADDR);
	/* PWM_MSG("ULPOSC config : 0x%08x after cg_en", regosc); */

	udelay(40);

	/* OSC EN = 0 */
	regosc = regosc & (~0x1);
	clk_writel(OSC_ULPOSC_ADDR, regosc);
	regosc = clk_readl(OSC_ULPOSC_ADDR);
	/* PWM_MSG("ULPOSC config : 0x%08x after en", regosc); */

	return 0;
}

static int ulposc_enable(enum DDP_CLK_ID clkid)
{
	ulposc_on();
	get_ulposc_status();

	return 0;
}

static int ulposc_disable(enum DDP_CLK_ID clkid)
{
	ulposc_off();
	get_ulposc_status();

	return 0;
}

int disp_pwm_clksource_enable(int clk_req)
{
	int ret = 0;
	enum DDP_CLK_ID clkid = -1;

	clkid = disp_pwm_get_clkid(clk_req);

	switch (clkid) {
	case ULPOSC_D2:
	case ULPOSC_D16:
		ulposc_enable(clkid);
		break;
	default:
		break;
	}

	return ret;
}

int disp_pwm_clksource_disable(int clk_req)
{
	int ret = 0;
	enum DDP_CLK_ID clkid = -1;

	clkid = disp_pwm_get_clkid(clk_req);

	switch (clkid) {
	case ULPOSC_D2:
	case ULPOSC_D16:
		ulposc_disable(clkid);
		break;
	default:
		break;
	}

	return ret;
}


bool disp_pwm_mux_is_osc(void)
{
	bool is_osc = false;

	if (g_pwm_mux_clock_source == 1 || g_pwm_mux_clock_source == 2)
		is_osc = true;

	return is_osc;
}
#endif		/* BYPASS_CLK_SELECT */
