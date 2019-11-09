

#ifndef __MTK_SPM_PMIC_WRAP_H__
#define __MTK_SPM_PMIC_WRAP_H__

enum pmic_wrap_phase_id {
	PMIC_WRAP_PHASE_ALLINONE,
	NR_PMIC_WRAP_PHASE,
};

/* IDX mapping */
enum {
	CMD_0,        /* 0 *//* PMIC_WRAP_PHASE_ALLINONE */
	CMD_1,        /* 1 */
	CMD_2,        /* 2 */
	CMD_3,        /* 3 */
	CMD_4,        /* 4 */
	CMD_5,        /* 5 */
	CMD_6,        /* 6 */
	CMD_7,        /* 7 */
	CMD_8,        /* 8 */
	CMD_9,        /* 9 */
	CMD_10,       /* A */
	CMD_11,       /* B */
	CMD_12,       /* C */
	CMD_13,       /* D */
	CMD_14,       /* E */
	CMD_15,       /* F */
	NR_IDX_ALL,
};

/* APIs */
extern void mt_spm_pmic_wrap_set_phase(enum pmic_wrap_phase_id phase);
extern void mt_spm_pmic_wrap_set_cmd(enum pmic_wrap_phase_id phase, int idx,
				     unsigned int cmd_wdata);

#endif /* __MTK_SPM_PMIC_WRAP_H__ */
