
#ifndef __MTK_MCDI_MBOX_COMMON_H__
#define __MTK_MCDI_MBOX_COMMON_H__

#if defined(CONFIG_MACH_MT6763) || defined(CONFIG_MACH_MT6758) \
	|| defined(CONFIG_MACH_MT6771) || defined(CONFIG_MACH_MT6775)

#include "mcdi_v1/mtk_mcdi_mbox.h"

#elif defined(CONFIG_MACH_MT6739)

#include "mcdi_v2/mtk_mcdi_reg_mt6739.h"

#endif

#endif /* __MTK_MCDI_MBOX_COMMON_H__ */
