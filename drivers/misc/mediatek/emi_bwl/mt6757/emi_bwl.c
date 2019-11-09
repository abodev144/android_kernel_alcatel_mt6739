
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/interrupt.h>
#include <linux/semaphore.h>
#include <linux/device.h>
#include <linux/platform_device.h>
#include <linux/of.h>
#include <linux/of_address.h>
#include <linux/of_irq.h>
#include <linux/printk.h>

#define MET_USER_EVENT_SUPPORT
/* #include <linux/met_drv.h> */

#include <mt-plat/mtk_io.h>
#include <mt-plat/sync_write.h>

#include "mach/emi_bwl.h"
#include "mtk_dramc.h"

DEFINE_SEMAPHORE(emi_bwl_sem);
void __iomem *EMI_BASE_ADDR;

static struct platform_driver mem_bw_ctrl = {
	.driver     = {
		.name = "mem_bw_ctrl",
		.owner = THIS_MODULE,
	},
};

static struct platform_driver ddr_type = {
	.driver     = {
		.name = "ddr_type",
		.owner = THIS_MODULE,
	},
};

/* define EMI bandwiwth limiter control table */
static struct emi_bwl_ctrl ctrl_tbl[NR_CON_SCE];

/* current concurrency scenario */
static int cur_con_sce = 0x0FFFFFFF;


/* define concurrency scenario strings */
static const char * const con_sce_str[] = {
#define X_CON_SCE(con_sce, arba, arbb, arbc, \
arbd, arbe, arbf, arbg, arbh, conm) (#con_sce),
#include "mach/con_sce_lpddr3_1866.h"
#undef X_CON_SCE
};

/****************** For LPDDR3-1866******************/

static const unsigned int emi_arba_lpddr3_1866_val[] = {
#define X_CON_SCE(con_sce, arba, arbb, arbc, arbd, arbe, arbf, arbg, arbh, conm) arba,
#include "mach/con_sce_lpddr3_1866.h"
#undef X_CON_SCE
};
static const unsigned int emi_arbb_lpddr3_1866_val[] = {
#define X_CON_SCE(con_sce, arba, arbb, arbc, arbd, arbe, arbf, arbg, arbh, conm) arbb,
#include "mach/con_sce_lpddr3_1866.h"
#undef X_CON_SCE
};
static const unsigned int emi_arbc_lpddr3_1866_val[] = {
#define X_CON_SCE(con_sce, arba, arbb, arbc, arbd, arbe, arbf, arbg, arbh, conm) arbc,
#include "mach/con_sce_lpddr3_1866.h"
#undef X_CON_SCE
};
static const unsigned int emi_arbd_lpddr3_1866_val[] = {
#define X_CON_SCE(con_sce, arba, arbb, arbc, arbd, arbe, arbf, arbg, arbh, conm) arbd,
#include "mach/con_sce_lpddr3_1866.h"
#undef X_CON_SCE
};
static const unsigned int emi_arbe_lpddr3_1866_val[] = {
#define X_CON_SCE(con_sce, arba, arbb, arbc, arbd, arbe, arbf, arbg, arbh, conm) arbe,
#include "mach/con_sce_lpddr3_1866.h"
#undef X_CON_SCE
};
static const unsigned int emi_arbf_lpddr3_1866_val[] = {
#define X_CON_SCE(con_sce, arba, arbb, arbc, arbd, arbe, arbf, arbg, arbh, conm) arbf,
#include "mach/con_sce_lpddr3_1866.h"
#undef X_CON_SCE
};
static const unsigned int emi_arbg_lpddr3_1866_val[] = {
#define X_CON_SCE(con_sce, arba, arbb, arbc, arbd, arbe, arbf, arbg, arbh, conm) arbg,
#include "mach/con_sce_lpddr3_1866.h"
#undef X_CON_SCE
};
static const unsigned int emi_arbh_lpddr3_1866_val[] = {
#define X_CON_SCE(con_sce, arba, arbb, arbc, arbd, arbe, arbf, arbg, arbh, conm) arbh,
#include "mach/con_sce_lpddr3_1866.h"
#undef X_CON_SCE
};
static const unsigned int emi_conm_lpddr3_1866_val[] = {
#define X_CON_SCE(con_sce, arba, arbb, arbc, arbd, arbe, arbf, arbg, arbh, conm) conm,
#include "mach/con_sce_lpddr3_1866.h"
#undef X_CON_SCE
};

/****************** For LPDDR4-2667******************/

static const unsigned int emi_arba_lpddr4_2667_val[] = {
#define X_CON_SCE(con_sce, arba, arbb, arbc, arbd, arbe, arbf, arbg, arbh, conm) arba,
#include "mach/con_sce_lpddr4_2667.h"
#undef X_CON_SCE
};
static const unsigned int emi_arbb_lpddr4_2667_val[] = {
#define X_CON_SCE(con_sce, arba, arbb, arbc, arbd, arbe, arbf, arbg, arbh, conm) arbb,
#include "mach/con_sce_lpddr4_2667.h"
#undef X_CON_SCE
};
static const unsigned int emi_arbc_lpddr4_2667_val[] = {
#define X_CON_SCE(con_sce, arba, arbb, arbc, arbd, arbe, arbf, arbg, arbh, conm) arbc,
#include "mach/con_sce_lpddr4_2667.h"
#undef X_CON_SCE
};
static const unsigned int emi_arbd_lpddr4_2667_val[] = {
#define X_CON_SCE(con_sce, arba, arbb, arbc, arbd, arbe, arbf, arbg, arbh, conm) arbd,
#include "mach/con_sce_lpddr4_2667.h"
#undef X_CON_SCE
};
static const unsigned int emi_arbe_lpddr4_2667_val[] = {
#define X_CON_SCE(con_sce, arba, arbb, arbc, arbd, arbe, arbf, arbg, arbh, conm) arbe,
#include "mach/con_sce_lpddr4_2667.h"
#undef X_CON_SCE
};
static const unsigned int emi_arbf_lpddr4_2667_val[] = {
#define X_CON_SCE(con_sce, arba, arbb, arbc, arbd, arbe, arbf, arbg, arbh, conm) arbf,
#include "mach/con_sce_lpddr4_2667.h"
#undef X_CON_SCE
};
static const unsigned int emi_arbg_lpddr4_2667_val[] = {
#define X_CON_SCE(con_sce, arba, arbb, arbc, arbd, arbe, arbf, arbg, arbh, conm) arbg,
#include "mach/con_sce_lpddr4_2667.h"
#undef X_CON_SCE
};
static const unsigned int emi_arbh_lpddr4_2667_val[] = {
#define X_CON_SCE(con_sce, arba, arbb, arbc, arbd, arbe, arbf, arbg, arbh, conm) arbh,
#include "mach/con_sce_lpddr4_2667.h"
#undef X_CON_SCE
};
static const unsigned int emi_conm_lpddr4_2667_val[] = {
#define X_CON_SCE(con_sce, arba, arbb, arbc, arbd, arbe, arbf, arbg, arbh, conm) conm,
#include "mach/con_sce_lpddr4_2667.h"
#undef X_CON_SCE
};

int mtk_mem_bw_ctrl(int sce, int op)
{
	int i, highest, dram_type;

	if (sce >= NR_CON_SCE)
		return -1;

	if (op != ENABLE_CON_SCE && op != DISABLE_CON_SCE)
		return -1;
	if (in_interrupt())
		return -1;

	down(&emi_bwl_sem);

	if (op == ENABLE_CON_SCE)
		ctrl_tbl[sce].ref_cnt++;
	else if (op == DISABLE_CON_SCE) {
		if (ctrl_tbl[sce].ref_cnt != 0)
			ctrl_tbl[sce].ref_cnt--;
	}

	/* find the scenario with the highest priority */
	highest = -1;
	for (i = 0; i < NR_CON_SCE; i++) {
		if (ctrl_tbl[i].ref_cnt != 0) {
			highest = i;
			break;
		}
	}
	if (highest == -1)
		highest = CON_SCE_NORMAL;

	/* set new EMI bandwidth limiter value */
	dram_type = get_ddr_type();
	if (highest != cur_con_sce) {
		if (dram_type == TYPE_LPDDR3) {
			writel(emi_arba_lpddr3_1866_val[highest], EMI_ARBA);
			writel(emi_arbb_lpddr3_1866_val[highest], EMI_ARBB);
			writel(emi_arbc_lpddr3_1866_val[highest], EMI_ARBC);
			writel(emi_arbd_lpddr3_1866_val[highest], EMI_ARBD);
			writel(emi_arbe_lpddr3_1866_val[highest], EMI_ARBE);
			writel(emi_arbf_lpddr3_1866_val[highest], EMI_ARBF);
			writel(emi_arbg_lpddr3_1866_val[highest], EMI_ARBG);
			writel(emi_arbh_lpddr3_1866_val[highest], EMI_ARBH);
			mt_reg_sync_writel(emi_conm_lpddr3_1866_val[highest], EMI_CONM);
		} else if ((dram_type == TYPE_LPDDR4) || (dram_type == TYPE_LPDDR4X)) {
			writel(emi_arba_lpddr4_2667_val[highest], EMI_ARBA);
			writel(emi_arbb_lpddr4_2667_val[highest], EMI_ARBB);
			writel(emi_arbc_lpddr4_2667_val[highest], EMI_ARBC);
			writel(emi_arbd_lpddr4_2667_val[highest], EMI_ARBD);
			writel(emi_arbe_lpddr4_2667_val[highest], EMI_ARBE);
			writel(emi_arbf_lpddr4_2667_val[highest], EMI_ARBF);
			writel(emi_arbg_lpddr4_2667_val[highest], EMI_ARBG);
			writel(emi_arbh_lpddr4_2667_val[highest], EMI_ARBH);
			mt_reg_sync_writel(emi_conm_lpddr4_2667_val[highest], EMI_CONM);
		}

		cur_con_sce = highest;
	}
	up(&emi_bwl_sem);
	return 0;
}

static ssize_t ddr_type_show(struct device_driver *driver, char *buf)
{
	int dram_type;

	dram_type = get_ddr_type();

	if (dram_type == TYPE_LPDDR3)
		sprintf(buf, "LPDDR3_1866\n");
	else if ((dram_type == TYPE_LPDDR4) || (dram_type == TYPE_LPDDR4X))
		sprintf(buf, "LPDDR4_2667\n");

	return strlen(buf);
}

static ssize_t ddr_type_store(struct device_driver *driver,
const char *buf, size_t count)
{
    /*do nothing*/
		return count;
}

DRIVER_ATTR(ddr_type, 0644, ddr_type_show, ddr_type_store);

static ssize_t con_sce_show(struct device_driver *driver, char *buf)
{
	char *ptr = buf;
	int i = 0, dram_type;

	if (cur_con_sce >= NR_CON_SCE) {
		ptr += sprintf(ptr, "none\n");
		return strlen(buf);
	}
	else
		ptr += sprintf(ptr, "current scenario: %s\n",
		con_sce_str[cur_con_sce]);

#if 1
	ptr += sprintf(ptr, "%s\n", con_sce_str[cur_con_sce]);
	ptr += sprintf(ptr, "EMI_ARBA = 0x%x\n",  readl(IOMEM(EMI_ARBA)));
	ptr += sprintf(ptr, "EMI_ARBB = 0x%x\n",  readl(IOMEM(EMI_ARBB)));
	ptr += sprintf(ptr, "EMI_ARBC = 0x%x\n",  readl(IOMEM(EMI_ARBC)));
	ptr += sprintf(ptr, "EMI_ARBD = 0x%x\n",  readl(IOMEM(EMI_ARBD)));
	ptr += sprintf(ptr, "EMI_ARBE = 0x%x\n",  readl(IOMEM(EMI_ARBE)));
	ptr += sprintf(ptr, "EMI_ARBF = 0x%x\n",  readl(IOMEM(EMI_ARBF)));
	ptr += sprintf(ptr, "EMI_ARBG = 0x%x\n",  readl(IOMEM(EMI_ARBG)));
	ptr += sprintf(ptr, "EMI_ARBH = 0x%x\n",  readl(IOMEM(EMI_ARBH)));
	ptr += sprintf(ptr, "EMI_CONM = 0x%x\n",  readl(IOMEM(EMI_CONM)));
	for (i = 0; i < NR_CON_SCE; i++)
		ptr += sprintf(ptr, "%s = 0x%x\n", con_sce_str[i],
		ctrl_tbl[i].ref_cnt);

	dram_type = get_ddr_type();
	if (dram_type == TYPE_LPDDR3)
		ptr += sprintf(ptr, "LPDDR3\n");
	else if ((dram_type == TYPE_LPDDR4) || (dram_type == TYPE_LPDDR4X))
		ptr += sprintf(ptr, "LPDDR4\n");

	pr_debug("[EMI BWL] EMI_ARBA = 0x%x\n", readl(IOMEM(EMI_ARBA)));
	pr_debug("[EMI BWL] EMI_ARBB = 0x%x\n", readl(IOMEM(EMI_ARBB)));
	pr_debug("[EMI BWL] EMI_ARBC = 0x%x\n", readl(IOMEM(EMI_ARBC)));
	pr_debug("[EMI BWL] EMI_ARBD = 0x%x\n", readl(IOMEM(EMI_ARBD)));
	pr_debug("[EMI BWL] EMI_ARBE = 0x%x\n", readl(IOMEM(EMI_ARBE)));
	pr_debug("[EMI BWL] EMI_ARBF = 0x%x\n", readl(IOMEM(EMI_ARBF)));
	pr_debug("[EMI BWL] EMI_ARBG = 0x%x\n", readl(IOMEM(EMI_ARBG)));
	pr_debug("[EMI BWL] EMI_ARBH = 0x%x\n", readl(IOMEM(EMI_ARBH)));
	pr_debug("[EMI BWL] EMI_CONM = 0x%x\n", readl(IOMEM(EMI_CONM)));
#endif

		return strlen(buf);

}

static ssize_t con_sce_store(struct device_driver *driver,
const char *buf, size_t count)
{
	int i;

		for (i = 0; i < NR_CON_SCE; i++) {
			if (!strncmp(buf, con_sce_str[i],
				strlen(con_sce_str[i]))) {
				if (!strncmp(buf + strlen(con_sce_str[i]) + 1,
					EN_CON_SCE_STR,
					strlen(EN_CON_SCE_STR))) {
					mtk_mem_bw_ctrl(i, ENABLE_CON_SCE);
					pr_debug("concurrency scenario %s ON\n",
					con_sce_str[i]);
					break;
				} else if (!strncmp
					(buf + strlen(con_sce_str[i]) + 1,
					DIS_CON_SCE_STR,
					strlen(DIS_CON_SCE_STR))) {
					mtk_mem_bw_ctrl(i, DISABLE_CON_SCE);
					pr_debug("concurrency scenario %s OFF\n",
					con_sce_str[i]);
					break;
				}
			}
		}
		return count;
}

DRIVER_ATTR(concurrency_scenario, 0644, con_sce_show, con_sce_store);

static int __init emi_bwl_mod_init(void)
{
	int ret;
	struct device_node *node;

	/* DTS version */
	if (EMI_BASE_ADDR == NULL) {
		node = of_find_compatible_node(NULL, NULL, "mediatek,EMI");
		if (node) {
			EMI_BASE_ADDR = of_iomap(node, 0);
			pr_err("get EMI_BASE_ADDR @ %p\n", EMI_BASE_ADDR);
		} else {
			pr_err("can't find compatible node\n");
			return -1;
		}
	}

	ret = mtk_mem_bw_ctrl(CON_SCE_NORMAL, ENABLE_CON_SCE);
	if (ret)
		pr_err("[EMI/BWL] fail to set EMI bandwidth limiter\n");

	/* Register BW ctrl interface */
	ret = platform_driver_register(&mem_bw_ctrl);
	if (ret)
		pr_err("[EMI/BWL] fail to register EMI_BW_LIMITER driver\n");

	ret = driver_create_file(&mem_bw_ctrl.driver,
	&driver_attr_concurrency_scenario);
	if (ret)
		pr_err("[EMI/BWL] fail to create EMI_BW_LIMITER sysfs file\n");


	/* Register DRAM type information interface */
	ret = platform_driver_register(&ddr_type);
	if (ret)
		pr_err("[EMI/BWL] fail to register DRAM_TYPE driver\n");

	ret = driver_create_file(&ddr_type.driver, &driver_attr_ddr_type);
	if (ret)
		pr_err("[EMI/BWL] fail to create DRAM_TYPE sysfs file\n");

		return 0;
}

static void __exit emi_bwl_mod_exit(void)
{
}

late_initcall(emi_bwl_mod_init);
module_exit(emi_bwl_mod_exit);

