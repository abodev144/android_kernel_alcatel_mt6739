
#ifndef __sleep_2nd_def_h__
#define __sleep_2nd_def_h__


/* --- SPM Flag Define --- */
#define SPM_FLAG_DIS_RG_VA09_ON_ISO           (1U << 0)
#define SPM_FLAG_DIS_DVFS_EVENT               (1U << 1)
#define SPM_FLAG_DIS_SYSRAM_SLEEP             (1U << 2)
#define SPM_FLAG_SPM_CONTROL_AXI_DCM          (1U << 3)
#define SPM_FLAG_DIS_SCP_VREQ_MUX_CON         (1U << 4)
#define SPM_FLAG_DIS_DVFS_TO_FLOOR            (1U << 5)
#define SPM_FLAG_MSB_FOR_DUMMY_READ_ADDR      (1U << 6)
#define SPM_FLAG_RESERVED_BIT7                (1U << 7)
#define SPM_FLAG_CH0_IS_ON_BEFORE_LP          (1U << 8)
#define SPM_FLAG_CH1_IS_ON_BEFORE_LP          (1U << 9)
#define SPM_FLAG_CH2_IS_ON_BEFORE_LP          (1U << 10)
#define SPM_FLAG_CH3_IS_ON_BEFORE_LP          (1U << 11)
#define SPM_FLAG_PHY_CH0_IS_LOG_CH2_CH3       (1U << 12)
#define SPM_FLAG_PHY_CH1_IS_LOG_CH2_CH3       (1U << 13)
#define SPM_FLAG_PHY_CH2_IS_LOG_CH2_CH3       (1U << 14)
#define SPM_FLAG_PHY_CH3_IS_LOG_CH2_CH3       (1U << 15)


#endif /* __sleep_2nd_def_h__ */
