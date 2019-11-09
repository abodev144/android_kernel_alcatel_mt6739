
#ifndef __MTK_STATIC_POWER_MTK6775_H__
#define __MTK_STATIC_POWER_MTK6775_H__

/* #define SPOWER_NOT_READY 1 */

/* #define WITHOUT_LKG_EFUSE */

/* mv */
#define V_OF_FUSE_CPU   900
#define V_OF_FUSE_GPU   800
#define V_OF_FUSE_VCORE 800
#define V_OF_FUSE_MODEM 900
#define V_OF_FUSE_VPU   800
#define T_OF_FUSE        30

/* devinfo index for each bank */
#define DEVINFO_IDX_L     135 /* 07B4 */
#define DEVINFO_IDX_B     135 /* 07B4 */
#define DEVINFO_IDX_CCI   135 /* 07B4 */
#define DEVINFO_IDX_GPU   135 /* 07B4 */
#define DEVINFO_IDX_VCORE 136 /* 07B8 */
#define DEVINFO_IDX_MODEM 136 /* 07B8 */
#define DEVINFO_IDX_VPU   136 /* 07B8 */

/* devinfo offset for each bank */
#define DEVINFO_OFF_L     24
#define DEVINFO_OFF_B     16
#define DEVINFO_OFF_CCI    8
#define DEVINFO_OFF_GPU    0
#define DEVINFO_OFF_VCORE 24
#define DEVINFO_OFF_MODEM 16
#define DEVINFO_OFF_VPU    8

/* todo: fake efuse */
/* default leakage value for each bank */
#define DEF_CPUL_LEAKAGE    40
#define DEF_CPUB_LEAKAGE    93
#define DEF_CCI_LEAKAGE      2
#define DEF_GPU_LEAKAGE     13
#define DEF_VCORE_LEAKAGE   25
#define DEF_MODEM_LEAKAGE   18
#define DEF_VPU_LEAKAGE      5

enum {
	MTK_SPOWER_CPUL,
	MTK_SPOWER_CPUL_CLUSTER,
	MTK_SPOWER_CPUB,
	MTK_SPOWER_CPUB_CLUSTER,
	MTK_SPOWER_CCI,
	MTK_SPOWER_GPU,
	MTK_SPOWER_VCORE,
	MTK_SPOWER_MODEM,
	MTK_SPOWER_VPU,

	MTK_SPOWER_MAX
};

enum {
	MTK_L_LEAKAGE,
	MTK_B_LEAKAGE,
	MTK_CCI_LEAKAGE,
	MTK_GPU_LEAKAGE,
	MTK_VCORE_LEAKAGE,
	MTK_MODEM_LEAKAGE,
	MTK_VPU_LEAKAGE,

	MTK_LEAKAGE_MAX
};

/* record leakage information that read from efuse */
struct spower_leakage_info {
	const char *name;
	unsigned int devinfo_idx;
	unsigned int devinfo_offset;
	unsigned int value;
	unsigned int v_of_fuse;
	int t_of_fuse;
};

extern struct spower_leakage_info spower_lkg_info[MTK_SPOWER_MAX];

/* efuse mapping */
#define L_DEVINFO_DOMAIN (BIT(MTK_SPOWER_CPUL) | BIT(MTK_SPOWER_CPUL_CLUSTER))
#define B_DEVINFO_DOMAIN (BIT(MTK_SPOWER_CPUB) | BIT(MTK_SPOWER_CPUB_CLUSTER))
#define CCI_DEVINFO_DOMAIN (BIT(MTK_SPOWER_CCI))
#define GPU_DEVINFO_DOMAIN (BIT(MTK_SPOWER_GPU))
#define VCORE_DEVINFO_DOMAIN (BIT(MTK_SPOWER_VCORE))
#define MODEM_DEVINFO_DOMAIN (BIT(MTK_SPOWER_MODEM))
#define VPU_DEVINFO_DOMAIN (BIT(MTK_SPOWER_VPU))

/* used to calculate total leakage that search from raw table */
#define BIG_CORE_INSTANCE 4
#define DEFAULT_CORE_INSTANCE 4
#define DEFAULT_INSTANCE 1

extern char *spower_name[];
extern char *leakage_name[];
extern int default_leakage[];
extern int devinfo_idx[];
extern int devinfo_offset[];
extern int devinfo_table[];

#endif
