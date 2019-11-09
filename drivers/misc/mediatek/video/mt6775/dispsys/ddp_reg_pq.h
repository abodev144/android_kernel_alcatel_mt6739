
#ifndef _DDP_REG_PQ_H_
#define _DDP_REG_PQ_H_

/*******************************/
/* field definition */
/* ------------------------------------------------------------- */
/* AAL */
#define DISP_AAL_EN                             (DISPSYS_AAL0_BASE + 0x000)
#define DISP_AAL_RESET                          (DISPSYS_AAL0_BASE + 0x004)
#define DISP_AAL_INTEN                          (DISPSYS_AAL0_BASE + 0x008)
#define DISP_AAL_INTSTA                         (DISPSYS_AAL0_BASE + 0x00c)
#define DISP_AAL_STATUS                         (DISPSYS_AAL0_BASE + 0x010)
#define DISP_AAL_CFG                            (DISPSYS_AAL0_BASE + 0x020)
#define DISP_AAL_IN_CNT                         (DISPSYS_AAL0_BASE + 0x024)
#define DISP_AAL_OUT_CNT                        (DISPSYS_AAL0_BASE + 0x028)
#define DISP_AAL_CHKSUM                         (DISPSYS_AAL0_BASE + 0x02c)
#define DISP_AAL_SIZE                           (DISPSYS_AAL0_BASE + 0x030)
#define DISP_AAL_SHADOW_CTL                     (DISPSYS_AAL0_BASE + 0x0B0)
#define DISP_AAL_DUMMY_REG                      (DISPSYS_AAL0_BASE + 0x0c0)
#define DISP_AAL_MAX_HIST_CONFIG_00             (DISPSYS_AAL0_BASE + 0x204)
#define DISP_AAL_CABC_00                        (DISPSYS_AAL0_BASE + 0x20c)
#define DISP_AAL_CABC_02                        (DISPSYS_AAL0_BASE + 0x214)
#define DISP_AAL_CABC_04                        (DISPSYS_AAL0_BASE + 0x21c)
#define DISP_AAL_STATUS_00                      (DISPSYS_AAL0_BASE + 0x224)
/* 00 ~ 32: max histogram */
#define DISP_AAL_STATUS_32                      (DISPSYS_AAL0_BASE + 0x2a4)
/* bit 8: dre_gain_force_en */
#define DISP_AAL_DRE_GAIN_FILTER_00             (DISPSYS_AAL0_BASE + 0x354)
#define DISP_AAL_DRE_FLT_FORCE(idx)             (DISPSYS_AAL0_BASE + 0x358 + (idx) * 4)
#define DISP_AAL_DRE_CRV_CAL_00                 (DISPSYS_AAL0_BASE + 0x344)
#define DISP_AAL_DRE_MAPPING_00                 (DISPSYS_AAL0_BASE + 0x3b0)
#define DISP_AAL_CABC_GAINLMT_TBL(idx)          (DISPSYS_AAL0_BASE + 0x40c + (idx) * 4)

#define DISP_AAL_DRE_FLT_FORCE_11               (DISPSYS_AAL0_BASE + 0x44C)
#define DISP_AAL_DRE_FLT_FORCE_12               (DISPSYS_AAL0_BASE + 0x450)

#define DISP_PWM_EN_OFF                         (0x00)
#define DISP_PWM_RST_RX                         (0x04)
#define DISP_PWM_COMMIT_OFF                     (0x0C)
#define DISP_PWM_CON_0_OFF                      (0x18)
#define DISP_PWM_CON_1_OFF                      (0x1C)
#define DISP_PWM_DEBUG                          (0x80)


/* field definition */
/* ------------------------------------------------------------- */
/* COLOR */
#define CFG_MAIN_FLD_M_REG_RESET                 REG_FLD(1, 31)
#define CFG_MAIN_FLD_M_DISP_RESET                REG_FLD(1, 30)
#define CFG_MAIN_FLD_COLOR_DBUF_EN               REG_FLD(1, 29)
#define CFG_MAIN_FLD_C_PP_CM_DBG_SEL             REG_FLD(4, 16)
#define CFG_MAIN_FLD_SEQ_SEL                     REG_FLD(1, 13)
#define CFG_MAIN_FLD_ALLBP                       REG_FLD(1, 7)
#define CFG_MAIN_FLD_HEBP                        REG_FLD(1, 4)
#define CFG_MAIN_FLD_SEBP                        REG_FLD(1, 3)
#define CFG_MAIN_FLD_YEBP                        REG_FLD(1, 2)
#define CFG_MAIN_FLD_P2CBP                       REG_FLD(1, 1)
#define CFG_MAIN_FLD_C2PBP                       REG_FLD(1, 0)
#define START_FLD_DISP_COLOR_START               REG_FLD(1, 0)

#define DISP_COLOR_CFG_MAIN             (DISPSYS_COLOR0_BASE+0x400)
#define DISP_COLOR_PXL_CNT_MAIN         (DISPSYS_COLOR0_BASE+0x404)
#define DISP_COLOR_LINE_CNT_MAIN        (DISPSYS_COLOR0_BASE+0x408)
#define DISP_COLOR_WIN_X_MAIN           (DISPSYS_COLOR0_BASE+0x40C)
#define DISP_COLOR_WIN_Y_MAIN           (DISPSYS_COLOR0_BASE+0x410)
#define DISP_COLOR_TIMING_DETECTION_0   (DISPSYS_COLOR0_BASE+0x418)
#define DISP_COLOR_TIMING_DETECTION_1   (DISPSYS_COLOR0_BASE+0x41c)
#define DISP_COLOR_DBG_CFG_MAIN         (DISPSYS_COLOR0_BASE+0x420)
#define DISP_COLOR_C_BOOST_MAIN         (DISPSYS_COLOR0_BASE+0x428)
#define DISP_COLOR_C_BOOST_MAIN_2       (DISPSYS_COLOR0_BASE+0x42C)
#define DISP_COLOR_LUMA_ADJ             (DISPSYS_COLOR0_BASE+0x430)
#define DISP_COLOR_G_PIC_ADJ_MAIN_1     (DISPSYS_COLOR0_BASE+0x434)
#define DISP_COLOR_G_PIC_ADJ_MAIN_2     (DISPSYS_COLOR0_BASE+0x438)
#define DISP_COLOR_POS_MAIN             (DISPSYS_COLOR0_BASE+0x484)
#define DISP_COLOR_INK_DATA_MAIN        (DISPSYS_COLOR0_BASE+0x488)
#define DISP_COLOR_INK_DATA_MAIN_CR     (DISPSYS_COLOR0_BASE+0x48c)
#define DISP_COLOR_CAP_IN_DATA_MAIN     (DISPSYS_COLOR0_BASE+0x490)
#define DISP_COLOR_CAP_IN_DATA_MAIN_CR  (DISPSYS_COLOR0_BASE+0x494)
#define DISP_COLOR_CAP_OUT_DATA_MAIN    (DISPSYS_COLOR0_BASE+0x498)
#define DISP_COLOR_CAP_OUT_DATA_MAIN_CR (DISPSYS_COLOR0_BASE+0x49c)
#define DISP_COLOR_Y_SLOPE_1_0_MAIN     (DISPSYS_COLOR0_BASE+0x4A0)
#define DISP_COLOR_LOCAL_HUE_CD_0       (DISPSYS_COLOR0_BASE+0x620)
#define DISP_COLOR_TWO_D_WINDOW_1       (DISPSYS_COLOR0_BASE+0x740)
#define DISP_COLOR_TWO_D_W1_RESULT      (DISPSYS_COLOR0_BASE+0x74C)
#define DISP_COLOR_SAT_HIST_X_CFG_MAIN  (DISPSYS_COLOR0_BASE+0x768)
#define DISP_COLOR_SAT_HIST_Y_CFG_MAIN  (DISPSYS_COLOR0_BASE+0x76c)
#define DISP_COLOR_BWS_2                (DISPSYS_COLOR0_BASE+0x79c)
#define DISP_COLOR_CRC_0                (DISPSYS_COLOR0_BASE+0x7e0)
#define DISP_COLOR_PART_SAT_GAIN1_0     (DISPSYS_COLOR0_BASE+0x7FC)
#define DISP_COLOR_PART_SAT_GAIN1_1     (DISPSYS_COLOR0_BASE+0x800)
#define DISP_COLOR_PART_SAT_GAIN1_2     (DISPSYS_COLOR0_BASE+0x804)
#define DISP_COLOR_PART_SAT_GAIN1_3     (DISPSYS_COLOR0_BASE+0x808)
#define DISP_COLOR_PART_SAT_GAIN1_4     (DISPSYS_COLOR0_BASE+0x80C)
#define DISP_COLOR_PART_SAT_GAIN2_0     (DISPSYS_COLOR0_BASE+0x810)
#define DISP_COLOR_PART_SAT_GAIN2_1     (DISPSYS_COLOR0_BASE+0x814)
#define DISP_COLOR_PART_SAT_GAIN2_2     (DISPSYS_COLOR0_BASE+0x818)
#define DISP_COLOR_PART_SAT_GAIN2_3	    (DISPSYS_COLOR0_BASE+0x81C)
#define DISP_COLOR_PART_SAT_GAIN2_4     (DISPSYS_COLOR0_BASE+0x820)
#define DISP_COLOR_PART_SAT_GAIN3_0     (DISPSYS_COLOR0_BASE+0x824)
#define DISP_COLOR_PART_SAT_GAIN3_1     (DISPSYS_COLOR0_BASE+0x828)
#define DISP_COLOR_PART_SAT_GAIN3_2     (DISPSYS_COLOR0_BASE+0x82C)
#define DISP_COLOR_PART_SAT_GAIN3_3     (DISPSYS_COLOR0_BASE+0x830)
#define DISP_COLOR_PART_SAT_GAIN3_4     (DISPSYS_COLOR0_BASE+0x834)
#define DISP_COLOR_PART_SAT_POINT1_0    (DISPSYS_COLOR0_BASE+0x838)
#define DISP_COLOR_PART_SAT_POINT1_1    (DISPSYS_COLOR0_BASE+0x83C)
#define DISP_COLOR_PART_SAT_POINT1_2    (DISPSYS_COLOR0_BASE+0x840)
#define DISP_COLOR_PART_SAT_POINT1_3    (DISPSYS_COLOR0_BASE+0x844)
#define DISP_COLOR_PART_SAT_POINT1_4    (DISPSYS_COLOR0_BASE+0x848)
#define DISP_COLOR_PART_SAT_POINT2_0    (DISPSYS_COLOR0_BASE+0x84C)
#define DISP_COLOR_PART_SAT_POINT2_1    (DISPSYS_COLOR0_BASE+0x850)
#define DISP_COLOR_PART_SAT_POINT2_2    (DISPSYS_COLOR0_BASE+0x854)
#define DISP_COLOR_PART_SAT_POINT2_3    (DISPSYS_COLOR0_BASE+0x858)
#define DISP_COLOR_PART_SAT_POINT2_4    (DISPSYS_COLOR0_BASE+0x85C)

#define DISP_COLOR_CM_CONTROL           (DISPSYS_COLOR0_BASE+0x860)
#define DISP_COLOR_CM_W1_HUE_0          (DISPSYS_COLOR0_BASE+0x864)
#define DISP_COLOR_CM_W1_HUE_1          (DISPSYS_COLOR0_BASE+0x868)
#define DISP_COLOR_CM_W1_HUE_2          (DISPSYS_COLOR0_BASE+0x86C)
#define DISP_COLOR_CM_W1_HUE_3          (DISPSYS_COLOR0_BASE+0x870)
#define DISP_COLOR_CM_W1_HUE_4          (DISPSYS_COLOR0_BASE+0x874)
#define DISP_COLOR_CM_W1_LUMA_0         (DISPSYS_COLOR0_BASE+0x878)
#define DISP_COLOR_CM_W1_LUMA_1         (DISPSYS_COLOR0_BASE+0x87C)
#define DISP_COLOR_CM_W1_LUMA_2         (DISPSYS_COLOR0_BASE+0x880)
#define DISP_COLOR_CM_W1_LUMA_3         (DISPSYS_COLOR0_BASE+0x884)
#define DISP_COLOR_CM_W1_LUMA_4         (DISPSYS_COLOR0_BASE+0x888)
#define DISP_COLOR_CM_W1_SAT_0          (DISPSYS_COLOR0_BASE+0x88C)
#define DISP_COLOR_CM_W1_SAT_1          (DISPSYS_COLOR0_BASE+0x890)
#define DISP_COLOR_CM_W1_SAT_2          (DISPSYS_COLOR0_BASE+0x894)
#define DISP_COLOR_CM_W1_SAT_3          (DISPSYS_COLOR0_BASE+0x898)
#define DISP_COLOR_CM_W1_SAT_4          (DISPSYS_COLOR0_BASE+0x89C)
#define DISP_COLOR_CM_W2_HUE_0          (DISPSYS_COLOR0_BASE+0x8A0)
#define DISP_COLOR_CM_W2_HUE_1          (DISPSYS_COLOR0_BASE+0x8A4)
#define DISP_COLOR_CM_W2_HUE_2          (DISPSYS_COLOR0_BASE+0x8A8)
#define DISP_COLOR_CM_W2_HUE_3          (DISPSYS_COLOR0_BASE+0x8AC)
#define DISP_COLOR_CM_W2_HUE_4          (DISPSYS_COLOR0_BASE+0x8B0)
#define DISP_COLOR_CM_W2_LUMA_0         (DISPSYS_COLOR0_BASE+0x8B4)
#define DISP_COLOR_CM_W2_LUMA_1         (DISPSYS_COLOR0_BASE+0x8B8)
#define DISP_COLOR_CM_W2_LUMA_2         (DISPSYS_COLOR0_BASE+0x8BC)
#define DISP_COLOR_CM_W2_LUMA_3         (DISPSYS_COLOR0_BASE+0x8C0)
#define DISP_COLOR_CM_W2_LUMA_4         (DISPSYS_COLOR0_BASE+0x8C4)
#define DISP_COLOR_CM_W2_SAT_0          (DISPSYS_COLOR0_BASE+0x8C8)
#define DISP_COLOR_CM_W2_SAT_1          (DISPSYS_COLOR0_BASE+0x8CC)
#define DISP_COLOR_CM_W2_SAT_2          (DISPSYS_COLOR0_BASE+0x8D0)
#define DISP_COLOR_CM_W2_SAT_3          (DISPSYS_COLOR0_BASE+0x8D4)
#define DISP_COLOR_CM_W2_SAT_4          (DISPSYS_COLOR0_BASE+0x8D8)
#define DISP_COLOR_CM_W3_HUE_0          (DISPSYS_COLOR0_BASE+0x8DC)
#define DISP_COLOR_CM_W3_HUE_1          (DISPSYS_COLOR0_BASE+0x8E0)
#define DISP_COLOR_CM_W3_HUE_2          (DISPSYS_COLOR0_BASE+0x8E4)
#define DISP_COLOR_CM_W3_HUE_3          (DISPSYS_COLOR0_BASE+0x8E8)
#define DISP_COLOR_CM_W3_HUE_4          (DISPSYS_COLOR0_BASE+0x8EC)
#define DISP_COLOR_CM_W3_LUMA_0         (DISPSYS_COLOR0_BASE+0x8F0)
#define DISP_COLOR_CM_W3_LUMA_1         (DISPSYS_COLOR0_BASE+0x8F4)
#define DISP_COLOR_CM_W3_LUMA_2         (DISPSYS_COLOR0_BASE+0x8F8)
#define DISP_COLOR_CM_W3_LUMA_3         (DISPSYS_COLOR0_BASE+0x8FC)
#define DISP_COLOR_CM_W3_LUMA_4         (DISPSYS_COLOR0_BASE+0x900)
#define DISP_COLOR_CM_W3_SAT_0          (DISPSYS_COLOR0_BASE+0x904)
#define DISP_COLOR_CM_W3_SAT_1          (DISPSYS_COLOR0_BASE+0x908)
#define DISP_COLOR_CM_W3_SAT_2          (DISPSYS_COLOR0_BASE+0x90C)
#define DISP_COLOR_CM_W3_SAT_3          (DISPSYS_COLOR0_BASE+0x910)
#define DISP_COLOR_CM_W3_SAT_4          (DISPSYS_COLOR0_BASE+0x914)

#define DISP_COLOR_START                (DISPSYS_COLOR0_BASE+0xC00)
#define DISP_COLOR_INTEN                (DISPSYS_COLOR0_BASE+0xC04)
#define DISP_COLOR_INTSTA               (DISPSYS_COLOR0_BASE+0xC08)
#define DISP_COLOR_OUT_SEL              (DISPSYS_COLOR0_BASE+0xC0C)
#define DISP_COLOR_FRAME_DONE_DEL       (DISPSYS_COLOR0_BASE+0xC10)
#define DISP_COLOR_CRC                  (DISPSYS_COLOR0_BASE+0xC14)
#define DISP_COLOR_SW_SCRATCH           (DISPSYS_COLOR0_BASE+0xC18)
#define DISP_COLOR_CK_ON                (DISPSYS_COLOR0_BASE+0xC28)
#define DISP_COLOR_INTERNAL_IP_WIDTH    (DISPSYS_COLOR0_BASE+0xC50)
#define DISP_COLOR_INTERNAL_IP_HEIGHT   (DISPSYS_COLOR0_BASE+0xC54)
#define DISP_COLOR_CM1_EN               (DISPSYS_COLOR0_BASE+0xC60)
#define DISP_COLOR_CM2_EN               (DISPSYS_COLOR0_BASE+0xCA0)
#define DISP_COLOR_SHADOW_CTRL          (DISPSYS_COLOR0_BASE+0xCB0)
#define DISP_COLOR_R0_CRC               (DISPSYS_COLOR0_BASE+0xCF0)
#define DISP_COLOR_S_GAIN_BY_Y0_0       (DISPSYS_COLOR0_BASE+0xCF4)
#define DISP_COLOR_S_GAIN_BY_Y0_1       (DISPSYS_COLOR0_BASE+0xCF8)
#define DISP_COLOR_S_GAIN_BY_Y0_2       (DISPSYS_COLOR0_BASE+0xCFC)
#define DISP_COLOR_S_GAIN_BY_Y0_3       (DISPSYS_COLOR0_BASE+0xD00)
#define DISP_COLOR_S_GAIN_BY_Y0_4       (DISPSYS_COLOR0_BASE+0xD04)
#define DISP_COLOR_S_GAIN_BY_Y64_0      (DISPSYS_COLOR0_BASE+0xD08)
#define DISP_COLOR_S_GAIN_BY_Y64_1      (DISPSYS_COLOR0_BASE+0xD0C)
#define DISP_COLOR_S_GAIN_BY_Y64_2      (DISPSYS_COLOR0_BASE+0xD10)
#define DISP_COLOR_S_GAIN_BY_Y64_3      (DISPSYS_COLOR0_BASE+0xD14)
#define DISP_COLOR_S_GAIN_BY_Y64_4      (DISPSYS_COLOR0_BASE+0xD18)
#define DISP_COLOR_S_GAIN_BY_Y128_0     (DISPSYS_COLOR0_BASE+0xD1C)
#define DISP_COLOR_S_GAIN_BY_Y128_1     (DISPSYS_COLOR0_BASE+0xD20)
#define DISP_COLOR_S_GAIN_BY_Y128_2     (DISPSYS_COLOR0_BASE+0xD24)
#define DISP_COLOR_S_GAIN_BY_Y128_3     (DISPSYS_COLOR0_BASE+0xD28)
#define DISP_COLOR_S_GAIN_BY_Y128_4     (DISPSYS_COLOR0_BASE+0xD2C)
#define DISP_COLOR_S_GAIN_BY_Y192_0     (DISPSYS_COLOR0_BASE+0xD30)
#define DISP_COLOR_S_GAIN_BY_Y192_1     (DISPSYS_COLOR0_BASE+0xD34)
#define DISP_COLOR_S_GAIN_BY_Y192_2     (DISPSYS_COLOR0_BASE+0xD38)
#define DISP_COLOR_S_GAIN_BY_Y192_3     (DISPSYS_COLOR0_BASE+0xD3C)
#define DISP_COLOR_S_GAIN_BY_Y192_4     (DISPSYS_COLOR0_BASE+0xD40)
#define DISP_COLOR_S_GAIN_BY_Y256_0     (DISPSYS_COLOR0_BASE+0xD44)
#define DISP_COLOR_S_GAIN_BY_Y256_1     (DISPSYS_COLOR0_BASE+0xD48)
#define DISP_COLOR_S_GAIN_BY_Y256_2     (DISPSYS_COLOR0_BASE+0xD4C)
#define DISP_COLOR_S_GAIN_BY_Y256_3     (DISPSYS_COLOR0_BASE+0xD50)
#define DISP_COLOR_S_GAIN_BY_Y256_4     (DISPSYS_COLOR0_BASE+0xD54)
#define DISP_COLOR_LSP_1                (DISPSYS_COLOR0_BASE+0xD58)
#define DISP_COLOR_LSP_2                (DISPSYS_COLOR0_BASE+0xD5C)



/* SMI_LARB0 */
#define DISP_REG_SMI_LARB0_NON_SEC_CON (DISPSYS_SMI_LARB0_BASE+0x380)
#define DISP_REG_SMI_LARB0_SEC_CON (DISPSYS_SMI_LARB0_BASE+0xf80)
/* SMI_LARB1 */
#define DISP_REG_SMI_LARB1_NON_SEC_CON (DISPSYS_SMI_LARB1_BASE+0x380)
#define DISP_REG_SMI_LARB1_SEC_CON (DISPSYS_SMI_LARB1_BASE+0xf80)
#define REG_FLD_MMU_EN										   REG_FLD(1, 0)


/* field definition */
/* ------------------------------------------------------------- */
/* CCORR */
#define DISP_REG_CCORR_EN                                    (DISPSYS_CCORR0_BASE + 0x000)
#define DISP_REG_CCORR_RESET                                 (DISPSYS_CCORR0_BASE + 0x004)
#define DISP_REG_CCORR_INTEN                                 (DISPSYS_CCORR0_BASE + 0x008)
#define DISP_REG_CCORR_INTSTA                                (DISPSYS_CCORR0_BASE + 0x00c)
#define DISP_REG_CCORR_STATUS                                (DISPSYS_CCORR0_BASE + 0x010)
#define DISP_REG_CCORR_CFG                                   (DISPSYS_CCORR0_BASE + 0x020)
#define DISP_REG_CCORR_IN_CNT                                (DISPSYS_CCORR0_BASE + 0x024)
#define DISP_REG_CCORR_OUT_CNT                               (DISPSYS_CCORR0_BASE + 0x028)
#define DISP_REG_CCORR_CHKSUM                                (DISPSYS_CCORR0_BASE + 0x02c)
#define DISP_REG_CCORR_SIZE                                  (DISPSYS_CCORR0_BASE + 0x030)
#define DISP_REG_CCORR_COEF_0                                (DISPSYS_CCORR0_BASE + 0x080)
#define DISP_REG_CCORR_SHADOW                                (DISPSYS_CCORR0_BASE + 0x0a0)
#define DISP_REG_CCORR_DUMMY_REG                             (DISPSYS_CCORR0_BASE + 0x0c0)

#define CCORR_SIZE_FLD_HSIZE                                  REG_FLD(13, 16)
#define CCORR_SIZE_FLD_VSIZE                                  REG_FLD(13, 0)
#define CCORR_CFG_FLD_CHKSUM_SEL                              REG_FLD(3, 29)
#define CCORR_CFG_FLD_CHKSUM_EN                               REG_FLD(1, 28)
#define CCORR_CFG_FLD_CCORR_GAMMA_OFF                         REG_FLD(1, 2)
#define CCORR_CFG_FLD_CCORR_ENGINE_EN                         REG_FLD(1, 1)
/* field definition */
/* ------------------------------------------------------------- */
/* GAMMA */
#define DISP_REG_GAMMA_EN								(DISPSYS_GAMMA0_BASE + 0x000)
#define DISP_REG_GAMMA_RESET							(DISPSYS_GAMMA0_BASE + 0x004)
#define DISP_REG_GAMMA_INTEN							(DISPSYS_GAMMA0_BASE + 0x008)
#define DISP_REG_GAMMA_INTSTA							(DISPSYS_GAMMA0_BASE + 0x00c)
#define DISP_REG_GAMMA_STATUS						    (DISPSYS_GAMMA0_BASE + 0x010)
#define DISP_REG_GAMMA_CFG							    (DISPSYS_GAMMA0_BASE + 0x020)
#define DISP_REG_GAMMA_INPUT_COUNT					    (DISPSYS_GAMMA0_BASE + 0x024)
#define DISP_REG_GAMMA_OUTPUT_COUNT					    (DISPSYS_GAMMA0_BASE + 0x028)
#define DISP_REG_GAMMA_CHKSUM						    (DISPSYS_GAMMA0_BASE + 0x02c)
#define DISP_REG_GAMMA_SIZE							    (DISPSYS_GAMMA0_BASE + 0x030)
#define DISP_REG_GAMMA_DEBUG						    (DISPSYS_GAMMA0_BASE + 0x034)
#define DISP_REG_GAMMA_DUMMY_REG					    (DISPSYS_GAMMA0_BASE + 0x0c0)
#define DISP_REG_GAMMA_LUT							    (DISPSYS_GAMMA0_BASE + 0x700)

#define EN_FLD_GAMMA_EN                         REG_FLD(1, 0)
#define RESET_FLD_GAMMA_RESET                   REG_FLD(1, 0)
#define INTEN_FLD_OF_END_INT_EN                 REG_FLD(1, 1)
#define INTEN_FLD_IF_END_INT_EN                 REG_FLD(1, 0)
#define INTSTA_FLD_OF_END_INT                   REG_FLD(1, 1)
#define INTSTA_FLD_IF_END_INT                   REG_FLD(1, 0)
#define STATUS_FLD_IN_VALID				REG_FLD(1, 7)
#define STATUS_FLD_IN_READY				REG_FLD(1, 6)
#define STATUS_FLD_OUT_VALID	                REG_FLD(1, 5)
#define STATUS_FLD_OUT_READY	                REG_FLD(1, 4)
#define STATUS_FLD_OF_UNFINISH	                REG_FLD(1, 1)
#define STATUS_FLD_IF_UNFINISH	                REG_FLD(1, 0)
#define CFG_FLD_CHKSUM_SEL				REG_FLD(2, 29)
#define CFG_FLD_CHKSUM_EN				REG_FLD(1, 28)
#define CFG_FLD_CCORR_GAMMA_OFF                 REG_FLD(1, 5)
#define CFG_FLD_CCORR_EN			            REG_FLD(1, 4)
#define CFG_FLD_DITHER_EN			            REG_FLD(1, 2)
#define CFG_FLD_GAMMA_LUT_EN			REG_FLD(1, 1)
#define CFG_FLD_RELAY_MODE				REG_FLD(1, 0)
#define INPUT_COUNT_FLD_INP_LINE_CNT			REG_FLD(13, 16)
#define INPUT_COUNT_FLD_INP_PIX_CNT			REG_FLD(13, 0)
#define OUTPUT_COUNT_FLD_OUTP_LINE_CNT			REG_FLD(13, 16)
#define OUTPUT_COUNT_FLD_OUTP_PIX_CNT			REG_FLD(13, 0)
#define CHKSUM_FLD_CHKSUM						REG_FLD(30, 0)
#define SIZE_FLD_HSIZE							REG_FLD(13, 16)
#define SIZE_FLD_VSIZE							REG_FLD(13, 0)
#define CCORR_0_FLD_CCORR_C00					REG_FLD(12, 16)
#define CCORR_0_FLD_CCORR_C01					REG_FLD(12, 0)
#define CCORR_1_FLD_CCORR_C02					REG_FLD(12, 16)
#define CCORR_1_FLD_CCORR_C10					REG_FLD(12, 0)
#define CCORR_2_FLD_CCORR_C11					REG_FLD(12, 16)
#define CCORR_2_FLD_CCORR_C12					REG_FLD(12, 0)
#define CCORR_3_FLD_CCORR_C20					REG_FLD(12, 16)
#define CCORR_3_FLD_CCORR_C21					REG_FLD(12, 0)
#define CCORR_4_FLD_CCORR_C22					REG_FLD(12, 16)
#define DUMMY_REG_FLD_DUMMY_REG					REG_FLD(32, 0)
#define DITHER_0_FLD_CRC_CLR					REG_FLD(1, 24)
#define DITHER_0_FLD_CRC_START					REG_FLD(1, 20)
#define DITHER_0_FLD_CRC_CEN					REG_FLD(1, 16)
#define DITHER_0_FLD_FRAME_DONE_DEL				REG_FLD(8, 8)
#define DITHER_0_FLD_OUT_SEL					REG_FLD(1, 4)
#define DITHER_5_FLD_W_DEMO						REG_FLD(16, 0)
#define DITHER_6_FLD_WRAP_MODE					REG_FLD(1, 16)
#define DITHER_6_FLD_LEFT_EN					REG_FLD(2, 14)
#define DITHER_6_FLD_FPHASE_R					REG_FLD(1, 13)
#define DITHER_6_FLD_FPHASE_EN					REG_FLD(1, 12)
#define DITHER_6_FLD_FPHASE						REG_FLD(6, 4)
#define DITHER_6_FLD_ROUND_EN					REG_FLD(1, 3)
#define DITHER_6_FLD_RDITHER_EN					REG_FLD(1, 2)
#define DITHER_6_FLD_LFSR_EN					REG_FLD(1, 1)
#define DITHER_6_FLD_EDITHER_EN					REG_FLD(1, 0)
#define DITHER_7_FLD_DRMOD_B					REG_FLD(2, 8)
#define DITHER_7_FLD_DRMOD_G					REG_FLD(2, 4)
#define DITHER_7_FLD_DRMOD_R					REG_FLD(2, 0)
#define GAMMA_DITHER_8_FLD_INK_DATA_R			REG_FLD(12, 16)
#define DITHER_8_FLD_INK						REG_FLD(1, 0)
#define GAMMA_DITHER_9_FLD_INK_DATA_B			REG_FLD(12, 16)
#define GAMMA_DITHER_9_FLD_INK_DATA_G			REG_FLD(12, 0)
#define DITHER_10_FLD_FPHASE_BIT				REG_FLD(3, 8)
#define DITHER_10_FLD_FPHASE_SEL				REG_FLD(2, 4)
#define DITHER_10_FLD_FPHASE_CTRL				REG_FLD(2, 0)
#define DITHER_11_FLD_SUB_B						REG_FLD(2, 12)
#define DITHER_11_FLD_SUB_G						REG_FLD(2, 8)
#define DITHER_11_FLD_SUB_R						REG_FLD(2, 4)
#define DITHER_11_FLD_SUBPIX_EN					REG_FLD(1, 0)
#define DITHER_12_FLD_H_ACTIVE					REG_FLD(16, 16)
#define DITHER_12_FLD_TABLE_EN					REG_FLD(2, 4)
#define DITHER_12_FLD_LSB_OFF					REG_FLD(1, 0)
#define DITHER_13_FLD_RSHIFT_B					REG_FLD(3, 8)
#define DITHER_13_FLD_RSHIFT_G					REG_FLD(3, 4)
#define DITHER_13_FLD_RSHIFT_R					REG_FLD(3, 0)
#define DITHER_14_FLD_DEBUG_MODE				REG_FLD(2, 8)
#define DITHER_14_FLD_DIFF_SHIFT				REG_FLD(3, 4)
#define DITHER_14_FLD_TESTPIN_EN				REG_FLD(1, 0)
#define DITHER_15_FLD_LSB_ERR_SHIFT_R			REG_FLD(3, 28)
#define DITHER_15_FLD_LSB_OVFLW_BIT_R			REG_FLD(3, 24)
#define DITHER_15_FLD_LSB_ADD_LSHIFT_R			REG_FLD(3, 20)
#define DITHER_15_FLD_LSB_INPUT_RSHIFT_R		REG_FLD(3, 16)
#define DITHER_15_FLD_LSB_NEW_BIT_MODE			REG_FLD(1, 0)
#define DITHER_16_FLD_LSB_ERR_SHIFT_B			REG_FLD(3, 28)
#define DITHER_16_FLD_OVFLW_BIT_B				REG_FLD(3, 24)
#define DITHER_16_FLD_ADD_LSHIFT_B				REG_FLD(3, 20)
#define DITHER_16_FLD_INPUT_RSHIFT_B			REG_FLD(3, 16)
#define DITHER_16_FLD_LSB_ERR_SHIFT_G			REG_FLD(3, 12)
#define DITHER_16_FLD_OVFLW_BIT_G				REG_FLD(3, 8)
#define DITHER_16_FLD_ADD_LSHIFT_G				REG_FLD(3, 4)
#define DITHER_16_FLD_INPUT_RSHIFT_G				REG_FLD(3, 0)
#define DITHER_17_FLD_CRC_RDY					REG_FLD(1, 16)
#define DITHER_17_FLD_CRC_OUT					REG_FLD(16, 0)
#define LUT_FLD_GAMMA_LUT_R					REG_FLD(10, 20)
#define LUT_FLD_GAMMA_LUT_G					REG_FLD(10, 10)
#define LUT_FLD_GAMMA_LUT_B					REG_FLD(10, 0)

/* ------------------------------------------------------------- */
/* Dither */
#define DISP_REG_DITHER_EN                                        (DISPSYS_DITHER0_BASE + 0x000)
#define DISP_REG_DITHER_RESET                                     (DISPSYS_DITHER0_BASE + 0x004)
#define DISP_REG_DITHER_INTEN                                     (DISPSYS_DITHER0_BASE + 0x008)
#define DISP_REG_DITHER_INTSTA                                    (DISPSYS_DITHER0_BASE + 0x00c)
#define DISP_REG_DITHER_STATUS                                    (DISPSYS_DITHER0_BASE + 0x010)
#define DISP_REG_DITHER_CFG                                       (DISPSYS_DITHER0_BASE + 0x020)
#define DISP_REG_DITHER_IN_CNT                                    (DISPSYS_DITHER0_BASE + 0x024)
#define DISP_REG_DITHER_OUT_CNT                                   (DISPSYS_DITHER0_BASE + 0x028)
#define DISP_REG_DITHER_CHKSUM                                    (DISPSYS_DITHER0_BASE + 0x02c)
#define DISP_REG_DITHER_SIZE                                      (DISPSYS_DITHER0_BASE + 0x030)
#define DISP_REG_DITHER_DUMMY_REG                                 (DISPSYS_DITHER0_BASE + 0x0c0)
#define DISP_REG_DITHER_0                                         (DISPSYS_DITHER0_BASE + 0x100)
#define DISP_REG_DITHER_5                                         (DISPSYS_DITHER0_BASE + 0x114)
#define DISP_REG_DITHER_6                                         (DISPSYS_DITHER0_BASE + 0x118)
#define DISP_REG_DITHER_7                                         (DISPSYS_DITHER0_BASE + 0x11c)
#define DISP_REG_DITHER_8                                         (DISPSYS_DITHER0_BASE + 0x120)
#define DISP_REG_DITHER_9                                         (DISPSYS_DITHER0_BASE + 0x124)
#define DISP_REG_DITHER_10                                        (DISPSYS_DITHER0_BASE + 0x128)
#define DISP_REG_DITHER_11                                        (DISPSYS_DITHER0_BASE + 0x12c)
#define DISP_REG_DITHER_12                                        (DISPSYS_DITHER0_BASE + 0x130)
#define DISP_REG_DITHER_13                                        (DISPSYS_DITHER0_BASE + 0x134)
#define DISP_REG_DITHER_14                                        (DISPSYS_DITHER0_BASE + 0x138)
#define DISP_REG_DITHER_15                                        (DISPSYS_DITHER0_BASE + 0x13c)
#define DISP_REG_DITHER_16                                        (DISPSYS_DITHER0_BASE + 0x140)
#define DISP_REG_DITHER_17                                        (DISPSYS_DITHER0_BASE + 0x144)

#define DITHER_CFG_FLD_NEW_RND_MODE				REG_FLD(1, 31)
#define DITHER_CFG_FLD_CHKSUM_SEL				REG_FLD(2, 29)
#define DITHER_CFG_FLD_CHKSUM_EN				REG_FLD(1, 28)
#define DITHER_CFG_FLD_MODULE_STALL_CG_ON	REG_FLD(1, 9)
#define DITHER_CFG_FLD_SUB_MODULE_STALL_CG_ON	REG_FLD(1, 8)


#define DITHER_CFG_FLD_DITHER_ENGINE_EN				REG_FLD(1, 1)
#define DITHER_CFG_FLD_RELAY_MODE				REG_FLD(1, 0)
#define DITHER_SIZE_FLD_HSIZE					REG_FLD(13, 16)
#define DITHER_SIZE_FLD_VSIZE					REG_FLD(13, 0)

#endif /* _DDP_REG_PQ_H_ */
