
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

#include <mtk_spm.h>
#include <mtk_sleep.h>
#include <mtk_cpuidle.h>
#include <mtk_spm_resource_req_internal.h>

int __attribute__ ((weak)) mtk_cpuidle_init(void) { return -EOPNOTSUPP; }

static int __init mt_spm_init(void)
{
#if !defined(CONFIG_FPGA_EARLY_PORTING)
	mtk_cpuidle_init();

	spm_module_init();
	slp_module_init();
#endif

	spm_resource_req_init();

	return 0;
}

late_initcall(mt_spm_init);
