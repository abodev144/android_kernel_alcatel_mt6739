

#ifndef _MTK_EEM_INTERNAL_H_
#define _MTK_EEM_INTERNAL_H_

#undef  BIT
#define BIT(bit)	(1U << (bit))

#define MSB(range)	(1 ? range)
#define LSB(range)	(0 ? range)
#define BITMASK(r)	\
	(((unsigned) -1 >> (31 - MSB(r))) & ~((1U << LSB(r)) - 1))

/* BITS(MSB:LSB, value) => Set value at MSB:LSB  */
#define BITS(r, val)	((val << LSB(r)) & BITMASK(r))

#define GET_BITS_VAL(_bits_, _val_)   (((_val_) & (BITMASK(_bits_))) >> ((0) ? _bits_))

#ifdef __KERNEL__
#define EEM_TAG	 "[xxxxEEM] "
#ifdef USING_XLOG
	#include <linux/xlog.h>
	#define eem_error(fmt, args...)	 pr_debug(ANDROID_LOG_ERROR, EEM_TAG, fmt, ##args)
	#define eem_warning(fmt, args...)   pr_debug(ANDROID_LOG_WARN, EEM_TAG, fmt, ##args)
	#define eem_notice(fmt, args...)	pr_debug(ANDROID_LOG_INFO, EEM_TAG, fmt, ##args)
	#define eem_info(fmt, args...)	  pr_debug(ANDROID_LOG_INFO, EEM_TAG, fmt, ##args)
	#define eem_debug(fmt, args...)	 pr_debug(ANDROID_LOG_DEBUG, EEM_TAG, fmt, ##args)
#else
	#define eem_error(fmt, args...)	 pr_debug(EEM_TAG fmt, ##args)
	#define eem_warning(fmt, args...)   pr_debug(EEM_TAG fmt, ##args)
	#define eem_notice(fmt, args...)	pr_debug(EEM_TAG fmt, ##args)
	#define eem_info(fmt, args...)	  pr_debug(EEM_TAG fmt, ##args)
	#define eem_debug(fmt, args...)	 pr_debug(EEM_TAG"(%d)" fmt, __LINE__, ##args)
									/* pr_debug(EEM_TAG fmt, ##args) */
#endif

	#if EN_ISR_LOG /* For Interrupt use */
		#define eem_isr_info(fmt, args...)  eem_debug(fmt, ##args)
	#else
		#define eem_isr_info(fmt, args...)
	#endif
#endif /* #ifdef __KERNEL__ */

#define FUNC_LV_MODULE		  BIT(0)  /* module, platform driver interface */
#define FUNC_LV_CPUFREQ		 BIT(1)  /* cpufreq driver interface		  */
#define FUNC_LV_API			 BIT(2)  /* mt_cpufreq driver global function */
#define FUNC_LV_LOCAL		   BIT(3)  /* mt_cpufreq driver lcaol function  */
#define FUNC_LV_HELP			BIT(4)  /* mt_cpufreq driver help function   */


#if CONFIG_EEM_SHOWLOG
	static unsigned int func_lv_mask = (
		FUNC_LV_MODULE |
		FUNC_LV_CPUFREQ |
		FUNC_LV_API |
		FUNC_LV_LOCAL |
		FUNC_LV_HELP
		);
	#define FUNC_ENTER(lv)	\
		do { if ((lv) & func_lv_mask) eem_debug(">> %s()\n", __func__); } while (0)
	#define FUNC_EXIT(lv)	\
		do { if ((lv) & func_lv_mask) eem_debug("<< %s():%d\n", __func__, __LINE__); } while (0)
#else
	#define FUNC_ENTER(lv)
	#define FUNC_EXIT(lv)
#endif /* CONFIG_CPU_DVFS_SHOWLOG */

#define TIME_TH_US 3000
#define EEM_IS_TOO_LONG()   \
	do {	\
		eem_diff_us = eem_cTime_us - eem_pTime_us;	\
		if (eem_diff_us > TIME_TH_US) {				\
			pr_warn(EEM_TAG "caller_addr %p: %llu us\n", __builtin_return_address(0), eem_diff_us); \
		} else if (eem_diff_us < 0) {	\
			pr_warn(EEM_TAG "E: misuse caller_addr %p\n", __builtin_return_address(0)); \
		}	\
	} while (0)

#ifdef __KERNEL__
	#define eem_read(addr)	__raw_readl((void __iomem *)(addr))/*DRV_Reg32(addr)*/
	#define eem_read_field(addr, range)	\
		((eem_read(addr) & BITMASK(range)) >> LSB(range))
	#define eem_write(addr, val)	mt_reg_sync_writel(val, addr)
#endif
#define eem_write_field(addr, range, val)	\
	eem_write(addr, (eem_read(addr) & ~BITMASK(range)) | BITS(range, val))

#define for_each_det(det) for (det = eem_detectors; det < (eem_detectors + ARRAY_SIZE(eem_detectors)); det++)

#define for_each_det_ctrl(det, ctrl)				\
	for (det = eem_detectors,				\
		 ctrl = id_to_eem_ctrl(det->ctrl_id);		\
		 det < (eem_detectors + ARRAY_SIZE(eem_detectors)); \
		 det++,						\
		 ctrl = id_to_eem_ctrl(det->ctrl_id))

#define for_each_ctrl(ctrl) for (ctrl = eem_ctrls; ctrl < (eem_ctrls + ARRAY_SIZE(eem_ctrls)); ctrl++)

#define det_to_id(det)	((det) - &eem_detectors[0])

#define ctrl_to_id(ctrl)	((ctrl) - &eem_ctrls[0])

#define HAS_FEATURE(det, feature)	((det)->features & feature)

#define PERCENT(numerator, denominator)	\
	(unsigned char)(((numerator) * 100 + (denominator) - 1) / (denominator))


struct eem_ctrl {
	const char *name;
	enum eem_det_id det_id;
	/* struct completion init_done; */
	/* atomic_t in_init; */
	#ifdef __KERNEL__
	/* for voltage setting thread */
	wait_queue_head_t wq;
	#endif
	int volt_update;
	struct task_struct *thread;
};

/* define main structurs in mtk_eem_internal.c */
extern struct eem_ctrl eem_ctrls[NR_EEM_CTRL];
extern struct eem_det eem_detectors[NR_EEM_DET];
extern struct eem_det_ops eem_det_base_ops;

#if !(EEM_ENABLE_TINYSYS_SSPM)
#if 0
extern void base_ops_enable(struct eem_det *det, int reason);
extern void base_ops_disable(struct eem_det *det, int reason);
extern void base_ops_disable_locked(struct eem_det *det, int reason);
extern void base_ops_switch_bank(struct eem_det *det, enum eem_phase phase);

extern int base_ops_init01(struct eem_det *det);
extern int base_ops_init02(struct eem_det *det);
extern int base_ops_mon_mode(struct eem_det *det);

extern int base_ops_get_status(struct eem_det *det);
extern void base_ops_dump_status(struct eem_det *det);

extern void base_ops_set_phase(struct eem_det *det, enum eem_phase phase);
extern int base_ops_get_temp(struct eem_det *det);
extern int base_ops_get_volt(struct eem_det *det);
extern int base_ops_set_volt(struct eem_det *det);
extern void base_ops_restore_default_volt(struct eem_det *det);
extern void base_ops_get_freq_table(struct eem_det *det);
extern void base_ops_get_orig_volt_table(struct eem_det *det);
#endif
#endif

/* define common operations in mtk_eem_internal.c */
extern int base_ops_volt_2_pmic(struct eem_det *det, int volt); /* PMIC interface */
extern int base_ops_volt_2_eem(struct eem_det *det, int volt);
extern int base_ops_pmic_2_volt(struct eem_det *det, int pmic_val);
extern int base_ops_eem_2_pmic(struct eem_det *det, int eev_val);
#endif
