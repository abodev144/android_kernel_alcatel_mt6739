
#ifndef _REG_ACCDET_H_
#define _REG_ACCDET_H_

#define ACCDET_BASE		0x00000000/* Register Address Define */

/*------------Register_TOP_REG---------------------------------*/
/* sleep mode just use for DVT */
#define TOP_CON			((unsigned int)(ACCDET_BASE + 0x001E))

/* 32k clock  bit15 */
#define TOP_CKPDN_CON0		((unsigned int)(ACCDET_BASE + 0x010C))
#define TOP_CKPDN_CON0_SET	((unsigned int)(ACCDET_BASE + 0x010E))
#define TOP_CKPDN_CON0_CLR	((unsigned int)(ACCDET_BASE + 0x0110))

/*--------------Register_AUD_REG-------------------------------*/
/* clock TOP_CKPDN*/
#define AUD_TOP_CKPDN_CON0	((unsigned int)(ACCDET_BASE + 0x220C))

/* reset TOP_RST_ACCDET */
#define AUD_TOP_RST_CON0	((unsigned int)(ACCDET_BASE + 0x2220))

/* top eint/int en INT_CON_ACCDET */
#define AUD_TOP_INT_CON0	((unsigned int)(ACCDET_BASE + 0x2228))
#define AUD_TOP_INT_CON0_SET	((unsigned int)(ACCDET_BASE + 0x222A))
#define AUD_TOP_INT_CON0_CLR	((unsigned int)(ACCDET_BASE + 0x222C))

/* top eint/int mask en, needn't set INT_CON_ACCDET_MASK */
#define AUD_TOP_INT_MASK_CON0		((unsigned int)(ACCDET_BASE + 0x222E))
#define AUD_TOP_INT_MASK_CON0_SET	((unsigned int)(ACCDET_BASE + 0x2230))
#define AUD_TOP_INT_MASK_CON0_CLR	((unsigned int)(ACCDET_BASE + 0x2232))

/* int eint/int status issue INT_STATUS_ACCDET */
#define AUD_TOP_INT_STATUS0		((unsigned int)(ACCDET_BASE + 0x2234))

/* analog RG */
#define AUDENC_ANA_CON6		((unsigned int)(ACCDET_BASE + 0x2394))	/* ACCDET_FAST_DISCHARGE_REG */
#define AUDENC_ANA_CON7		((unsigned int)(ACCDET_BASE + 0x2396))
#define AUDENC_ANA_CON9		((unsigned int)(ACCDET_BASE + 0x239A))	/* ACCDET_MOISTURE_REG */
#define AUDENC_ANA_CON10	((unsigned int)(ACCDET_BASE + 0x239C))	/* ACCDET_MICBIAS_REG */
#define AUDENC_ANA_CON11	((unsigned int)(ACCDET_BASE + 0x239E))	/* ACCDET_ADC_REG */

/*--------------ACCDET_REG-------------------------------*/
/* digital RG */
#define ACCDET_CON00		((unsigned int)(ACCDET_BASE + 0x2508))	/* ACCDET_RSV */
#define ACCDET_CON01		((unsigned int)(ACCDET_BASE + 0x250A))	/* ACCDET_CTRL */
#define ACCDET_CON02		((unsigned int)(ACCDET_BASE + 0x250C))	/* ACCDET_STATE_SWCTRL */
#define ACCDET_CON03		((unsigned int)(ACCDET_BASE + 0x250E))	/* ACCDET_PWM_WIDTH */
#define ACCDET_CON04		((unsigned int)(ACCDET_BASE + 0x2510))	/* ACCDET_PWM_THRESH */
#define ACCDET_CON05		((unsigned int)(ACCDET_BASE + 0x2512))	/* ACCDET_EN_DELAY_NUM */
#define ACCDET_CON06		((unsigned int)(ACCDET_BASE + 0x2514))	/* ACCDET_DEBOUNCE0 */
#define ACCDET_CON07		((unsigned int)(ACCDET_BASE + 0x2516))	/* ACCDET_DEBOUNCE1 */
#define ACCDET_CON08		((unsigned int)(ACCDET_BASE + 0x2518))	/* ACCDET_DEBOUNCE2 */
#define ACCDET_CON09		((unsigned int)(ACCDET_BASE + 0x251A))	/* ACCDET_DEBOUNCE3 */
#define ACCDET_CON10		((unsigned int)(ACCDET_BASE + 0x251C))	/* ACCDET_DEBOUNCE4 */
#define ACCDET_CON11		((unsigned int)(ACCDET_BASE + 0x251E))	/* ACCDET_DEFAULT_STATUS */
#define ACCDET_CON12		((unsigned int)(ACCDET_BASE + 0x2520))	/* ACCDET_IRQ_STATUS */
#define ACCDET_CON13		((unsigned int)(ACCDET_BASE + 0x2522))	/* ACCDET_SW_CONTROL */
#define ACCDET_CON14		((unsigned int)(ACCDET_BASE + 0x2524))	/* ACCDET_STATE_RG */
#define ACCDET_CON15		((unsigned int)(ACCDET_BASE + 0x2526))	/* ACCDET_EINT0_CONTROL */
#define ACCDET_CON16		((unsigned int)(ACCDET_BASE + 0x2528))	/* ACCDET_EINT0_PWM_DELAY */
#define ACCDET_CON17		((unsigned int)(ACCDET_BASE + 0x252A))	/* ACCDET_TEST_DEBUG */
#define ACCDET_CON18		((unsigned int)(ACCDET_BASE + 0x252C))	/* ACCDET_EINT0_FSM_STATE */
#define ACCDET_CON19		((unsigned int)(ACCDET_BASE + 0x252E))	/* ACCDET_CUR_DEB */
#define ACCDET_CON20		((unsigned int)(ACCDET_BASE + 0x2530))	/* ACCDET_EINT0_CUR_DEB */
#define ACCDET_CON21		((unsigned int)(ACCDET_BASE + 0x2532))	/* ACCDET_MONITOR_FLAG */
#define ACCDET_CON22		((unsigned int)(ACCDET_BASE + 0x2534))	/* ACCDET_RSV_CON1 */
#define ACCDET_CON23		((unsigned int)(ACCDET_BASE + 0x2536))	/* ACCDET_AUXADC_CONNECT_TIME */
#define ACCDET_CON24		((unsigned int)(ACCDET_BASE + 0x2538))	/* ACCDET_HW_SET */
#define ACCDET_CON25		((unsigned int)(ACCDET_BASE + 0x253A))	/* ACCDET_EINT1_CONTROL */
#define ACCDET_CON26		((unsigned int)(ACCDET_BASE + 0x253C))	/* ACCDET_EINT1_PWM_DELAY */
#define ACCDET_CON27		((unsigned int)(ACCDET_BASE + 0x253E))	/* ACCDET_EINT1_FSM_STATE */
#define ACCDET_CON28		((unsigned int)(ACCDET_BASE + 0x2540))	/* ACCDET_EINT1_CUR_DEB */
#if 0
#define REG_ACCDET_AD_CALI_0	((unsigned int)(ACCDET_BASE + 0x1702))
#define REG_ACCDET_AD_CALI_1	((unsigned int)(ACCDET_BASE + 0x1704))
#define REG_ACCDET_AD_CALI_2	((unsigned int)(ACCDET_BASE + 0x1706))
#endif

/*--------------AUXADC_REG-------------------------------*/
/* efuse RG */
#define AUXADC_RQST0		((unsigned int)(ACCDET_BASE + 0x1108))	/* AUXADC_CHN_RQST0 */
#define AUXADC_RQST0_SET	((unsigned int)(ACCDET_BASE + 0x1108))	/* AUXADC_RQST0_CH_SET */
#define AUXADC_RQST0_CLR	((unsigned int)(ACCDET_BASE + 0x1108))	/* AUXADC_RQST0_CH_CLR */
#define AUXADC_ACCDET		((unsigned int)(ACCDET_BASE + 0x11B8))	/* ACCDET_AUXADC_AUTO_SPL */
#define AUXADC_ADC5		((unsigned int)(ACCDET_BASE + 0x1092))	/* ACCDET_AUXADC_REG CH5 */
#define AUXADC_CON2		((unsigned int)(ACCDET_BASE + 0x1190))	/* AUXADC_AVG_NUM_SEL */

#define PMIC_REG_BASE_START	((unsigned int)(0x0000))
#define PMIC_REG_BASE_END	((unsigned int)(ACCDET_BASE+0x2340))


/*--------------------------Register_AUD_REG  Bit Define--------------------------------*/
/* AUD_TOP_CKPDN_CON0: 0x220C: bit0, 1,power-on;0,power-off  */
#define RG_ACCDET_CK_PDN_B0		(0x01<<0)

/* AUD_TOP_RST_CON0: 0x2220: bit1, 1,reset;0,normal */
#define RG_ACCDET_RST_B1		(0x01<<1)

/* AUD_TOP_INT_CON0:0x2228: accdet_int issue: bit5,int;bit6,eint0;bit7,eint1 */
#define RG_INT_EN_ACCDET_B5		(0x01<<5)
#define RG_INT_EN_ACCDET_EINT0_B6	(0x01<<6)
#define RG_INT_EN_ACCDET_EINT1_B7	(0x01<<7)
#define RG_INT_EN_ACCDET_EINT_B6_7	(0x03<<6)

/* AUD_TOP_INT_MASK_CON0:0x222E: accdet_int issue: bit5,int;bit6,eint0;bit7,eint1 */
#define RG_INT_MASK_ACCDET_B5		(0x01<<5)
#define RG_INT_MASK_ACCDET_EINT0_B6	(0x01<<6)
#define RG_INT_MASK_ACCDET_EINT1_B7	(0x01<<7)
#define RG_INT_EMASK_ACCDET_EINT_B6_7	(0x03<<6)

/* AUD_TOP_INT_STATUS0: 0x2234: accdet_int issue: bit5,int;bit6,eint0;bit7,eint1 */
#define RG_INT_STATUS_ACCDET_B5		(0x01<<5)
#define RG_INT_STATUS_ACCDET_EINT0_B6	(0x01<<6)
#define RG_INT_STATUS_ACCDET_EINT1_B7	(0x01<<7)
#define RG_INT_STATUS_ACCDET_EINT_B6_7	(0x03<<6)

/* AUDENC_ANA_CON6:0x2394:  analog fast discharge*/
#define RG_AUDSPARE				(0x00A0)
#define RG_AUDSPARE_FSTDSCHRG_ANALOG_DIR_EN	(1<<5)
#define RG_AUDSPARE_FSTDSCHRG_IMPR_EN		(1<<6)

/* AUDENC_ANA_CON9:0x239A: Mic-bias1 pull low enable/disable */
#define RG_AUD_ACCDET_MBIAS0_EN			(1<<0)
#define RG_AUD_ACCDET_MBIAS0_DISABLE		(0<<0)

/* AUDENC_ANA_CON10:0x239C: Mic-bias1 output voltage & lowpower Enable */
#define RG_AUD_MBIAS1_PWR			(0x01<<0)/* 1,power-on;0,power-off */
#define RG_AUD_PW_MBIAS1			(1<<0)/* power on */
#define RG_AUD_ACCDET_MBIAS1_EN			(1<<0)
#define RG_AUD_ACCDET_MBIAS1_DISABLE		(0<<0)
#define RG_AUD_MICBIAS1_BYPASS_EN		(1<<1)/* 2.8v bypass */
#define RG_AUD_MICBIAS1_LOWP_EN			(1<<2)
#define RG_MBIAS_OUTPUT_1V9			(0x02<<4)/* 1.9V */
#define RG_MBIAS_OUTPUT_2V5			(0x05<<4)/* 2.5V */
#define RG_MBIAS_OUTPUT_2V6			(0x06<<4)/* 2.6V */
#define RG_MBIAS_OUTPUT_2V7			(0x07<<4)/* 2.7V */
#define RG_AUD_MBIAS1_DC_SW_1P			(0x01<<8)/* MIC bias 1 DC couple switch 1P */
#define RG_AUD_MBIAS1_DC_SW_1N			(0x01<<9)/* MIC bias 1 DC couple switch 1N */
#define RG_MICBIAS1_LOWPEN_OUTVOL		(RG_MBIAS_LOWPOWER_EN | RG_MBIAS_OUTPUT_2V7)/* add */

/* AUDENC_ANA_CON11:0x239E:  */
#define RG_ACCDET_ACC_DCC_MODE			(0X07<<0)   /* ACC mode & DCC mode Both need */
#define RG_ACCDET_SEL_MICP			(1<<7)	/* DCC mode select MICP as CMP input*/
#define RG_ACCDET_SEL_ACCDET			(0<<7)	/* ACC mode  select pad_accdet as CMP  input*/
#define RG_EINT_CONFIG_ACCDET			(1<<11)

#define RG_ACCDET_MODE_ANA10			(0x0887)
#define RG_ACCDET_MODE_ANA10_MODE1		(0x0807) /*20170905, ACC also need bit11=1 to use eint0 */
/* #define RG_ACCDET_MODE_ANA10_MODE1		(0x07) */  /* 20170828 Dodo,ACC,no need set bit11:RG_EINTCONFIGACCDET*/
#define RG_ACCDET_MODE_ANA10_MODE2		(0x0887)
#define RG_ACCDET_MODE_ANA10_MODE6		(0x0887)

/*--------------------------Register_AUXADC_REG  Bit Define--------------------------------*/
/* AUXADC_ADC5: 0x1092:  Auxadc CH5 read data */
#define AUXADC_DATA_RDY_CH5			(1<<15)
#define AUXADC_DATA_PROCEED_CH5			(0<<15)
#define AUXADC_DATA_MASK			(0x0FFF)

/* AUXADC_RQST0_SET: 0x1108:  Auxadc CH5 request, relevant 0x07EC */
#define AUXADC_RQST_CH5_SET			(1<<5)
/* AUXADC_RQST0_CLR: 0x1108:  Auxadc CH5 request, relevant 0x07EC */
#define AUXADC_RQST_CH5_CLR			(1<<5)

/* AUXADC_ACCDET: 0x11B8:ACCDET auto request enable/disable*/
#define AUXADC_ACCDET_AUTO_SPL_EN		(0x01<<0)/* ACCDET auto request enable */
#define AUXADC_ACCDET_AUTO_SPL_DISEN		(0x00<<0)/* ACCDET auto request disable */
#define AUXADC_ACCDET_AUTO_RQST_CLR		(0x01<<1)/* ACCDET auto request clear */
#define AUXADC_ACCDET_AUTO_RQST_NONE		(0x00<<1)/* ACCDET auto request none */

/*--------------------------Register_AUXADC_REG  Bit Define--------------------------------*/
/* efuse */
#define ACCDET_CALI_MASK0			(0xFF)/* offset mask */
#define ACCDET_CALI_MASK1			(0xFF<<8)/* reserve */
#define ACCDET_CALI_MASK2			(0xFF)/* AD efuse mask */
#define ACCDET_CALI_MASK3			(0xFF<<8)/* DB efuse mask */
#define ACCDET_CALI_MASK4			(0xFF)/* BC efuse mask */

/*--------------------------Register_ACCDET_REG  Bit Define--------------------------------*/
#define AUD_ACCDET_AUXADC_SW_B10		(0x01<<10)
#define AUD_ACCDET_AUXADC_SW_SEL_B11		(0x01<<11)
#define RG_AUD_ACCDET_RSV_B13_14		(0x03<<13)

#define ACCDET_ENABLE_B0			(0x01<<0)
#define ACCDET_SEQ_INIT_EN_B1			(0x01<<1)
#define ACCDET_EINT0_EN_B2			(0x01<<2)
#define ACCDET_EINT0_SEQ_INIT_EN_B3		(0x01<<3)
#define ACCDET_EINT1_EN_B4			(0x01<<4)
#define ACCDET_EINT1_SEQ_INIT_EN_B5		(0x01<<5)
#define ACCDET_ANASWCTRL_SEL_B6			(0x01<<6)
#define ACCDET_EINT_EN_B2_4			(0x05<<2)/* eint0 & eint1 */
#define ACCDET_EINT_SEQ_INIT_EN_B3_5		(0x05<<3)/* eint0 & eint1 */

#define ACCDET_EINT1_PWM_IDLE_B12		(0x1<<12)
#define ACCDET_EINT0_PWM_IDLE_B11		(0x1<<11)
#define ACCDET_EINT_PWM_IDLE_B11_12		(0x3<<11)
#define ACCDET_MBIAS_PWM_IDLE_B10		(0x01<<10)
#define ACCDET_VTH_PWM_IDLE_B9			(0x01<<9)
#define ACCDET_CMP_PWM_IDLE_B8			(0x01<<8)
#define ACCDET_PWM_IDLE_B8_9_10			(0x07<<8)
#define ACCDET_EINT1_PWM_EN_B4			(0x01<<4)
#define ACCDET_EINT0_PWM_EN_B3			(0x01<<3)
#define ACCDET_MICBIAS_PWM_EN_B2		(0x01<<2)
#define ACCDET_VTH_PWM_EN_B1			(0x01<<1)
#define ACCDET_CMP_PWM_EN_B0			(0x01<<0)
#define ACCDET_SWCTRL_ACCDET_EN			(0x07)
#define ACCDET_EINT_PWM_EN_B3_4			(0x03<<3)

/* ACCDET_CON3-CON5,0x250E ~ 0x2512 set ACCDET PWM width, thresh, rise/falling */
/* ACCDET_CON6-CON10,0x2514 ~ 0x251C  set debounce[0-4].  deb/freq=(deb/32768) s */

#define ACCDET_IVAL_B0_1_4_5_8_9		(0x0333)
#define ACCDET_EINT0_IVAL_B2_6_10		(0x0444)
#define ACCDET_EINT1_IVAL_B3_7_11		(0x0888)
#define ACCDET_EINT1_IVAL_SEL_B13		(0x2000)
#define ACCDET_EINT0_IVAL_SEL_B14		(0x4000)
#define ACCDET_EINT1_IVAL_SEL_B15		(0x8000)
#define ACCDET_EINT_IVAL		(ACCDET_EINT0_IVAL_B2_6_10|ACCDET_EINT1_IVAL_B3_7_11)
#define ACCDET_EINT_IVAL_SEL	(ACCDET_EINT0_IVAL_SEL_B14|ACCDET_EINT1_IVAL_SEL_B15)

#define ACCDET_EINT1_IRQ_POL_B15		(0x01<<15)
#define ACCDET_EINT0_IRQ_POL_B14		(0x01<<14)
#define ACCDET_EINT_IRQ_POL_B14_15		(0x03<<14)

#define ACCDET_EINT1_IRQ_CLR_B11		(0x01<<11)
#define ACCDET_EINT0_IRQ_CLR_B10		(0x01<<10)
#define ACCDET_EINT_IRQ_CLR_B10_11		(0x03<<10)
#define ACCDET_IRQ_CLR_B8			(0x01<<8)

#define ACCDET_EINT1_IRQ_B3			(0x01<<3)
#define ACCDET_EINT0_IRQ_B2			(0x01<<2)
#define ACCDET_EINT_IRQ_B2_B3			(0x03<<2)/* RO */
#define ACCDET_IRQ_B0				(0x01<<0)/* RO */
#define ACCDET_IRQ_STS_BIT_ALL			(0x0D)/* RO */


/* ACCDET_CON13,0x2522:  accdet pwm,cmp,mbias,SW selection, etc. */
#define ACCDET_CMP0_SWSEL			(1<<1)
#define ACCDET_VTH_SWSEL			(1<<2)
#define ACCDET_MBIAS_SWSEL			(1<<3)
#define ACCDET_CMP0_EN_SW			(1<<12)
#define ACCDET_VTH_EN_SW			(1<<13)
#define ACCDET_MBIAS_EN_SW			(1<<14)
#define ACCDET_PWM_EN_SW			(1<<15)
/* ACCDET_CON14,0x2524: RO, accdet, mbias,cmp, accdet FSM state,etc.  clk */
#define ACCDET_STATE_MEM_BIT_OFFSET		6
#define ACCDET_STATE_ABC_MASK			0x03
#define ACCDET_STATE_AB_VALUE			(0x03)
#define ACCDET_STATE_ABC_00			(0x00)/* debounce0 */
#define ACCDET_STATE_ABC_01			(0x01)/* debounce1 */
#define ACCDET_STATE_ABC_10			(0x02)/* debounce2 */
#define ACCDET_STATE_ABC_11			(0x03)/* debounce3 */

#define ACCDET_EINT0_DEB_SEL			(0x01<<0)/* debounce_multi_sync_path */
#define ACCDET_EINT0_DEB_BYPASS			(0x00<<3)/* 0ms */
#define ACCDET_EINT0_DEB_IN_256			(0x0E<<3)/* 256ms */
#define ACCDET_EINT0_DEB_IN_64			(0x0C<<3)/* 64ms */
#define ACCDET_EINT0_DEB_IN_32			(0x0A<<3)/* 32ms */
#define ACCDET_EINT0_DEB_OUT_012		(0x01<<3)/* 0.12ms */
#define ACCDET_EINT0_DEB_512			(0x0F<<3)/* 512ms */
#define ACCDET_EINT0_DEB_CLR			(0x0F<<3)
#define ACCDET_EINT0_PWM_THRSH			(0x06<<8)/* 16ms */
#define ACCDET_EINT0_PWM_WIDTH			(0x02<<12)/* 16ms */

/* ACCDET_CON16,0x2528: accdet eint0 PWM rise/falling set */

#define ACCDET_EINT0_CMPOUR_SW_B7		(0x01<<7)
#define ACCDET_EINT1_CMPOUT_SW_B8		(0x01<<8)
#define ACCDET_AUXADC_CTRL_SW_B11		(0x01<<11)
#define ACCDET_EINT0_CMP_EN_SW_B14		(0x01<<14)
#define ACCDET_EINT1_CMP_EN_SW_B15		(0x01<<15)

/* ACCDET_CON18,0x252C: RO. accdet_eint0 FSM state, etc. */
/* ACCDET_CON19,0x252E: RO. accdet current used debounce time */
/* ACCDET_CON20,0x2530: RO. accdet_eint0 current used debounce time */

/* ACCDET_CON21,0x2532: accdet monitor flag select */
#define ACCDET_MON_FLAG_SEL_B4_B11		(0xFF<<4)
#define ACCDET_MON_FLAG_EN_B0			(0x01<<0)

/* ACCDET_CON22,0x2534: reserve */
/* ACCDET_CON23,0x2536: auxadc to accdet connect time (time/32K) */

#define ACCDET_HWEN_SEL_0			(0x00) /* bit[0:1] */
#define ACCDET_HWEN_SEL_1			(0x01) /* bit[0:1] */
#define ACCDET_HWEN_SEL_0_OR_1			(0x02) /* bit[0:1] */
#define ACCDET_HWEN_SEL_0_AND_1			(0x03) /* bit[0:1] */

#define ACCDET_HWMODE_SEL			(0x01<<2)
#define ACCDET_EINT0_DEB_OUT_DFF		(0x01<<3)
#define ACCDET_FAST_DISCAHRGE			(0x01<<4)
#define ACCDET_EINIT0_REVERSE			(0x01<<14)
#define ACCDET_EINIT1_REVERSE			(0x01<<15)
#define ACCDET_EINIT_REVERSE			(0x03<<14)

#define ACCDET_FAST_DISCAHRGE_EN		(0xC01C)
#define ACCDET_FAST_DISCAHRGE_DIS		(0xC00C)
#define ACCDET_FAST_DISCAHRGE_REVISE		(0x000C)

#define ACCDET_EINT1_DEB_SEL			(0x01<<0)/* debounce_multi_sync_path */
#define ACCDET_EINT1_DEB_BYPASS			(0x00<<3)/* 0ms */
#define ACCDET_EINT1_DEB_IN_256			(0x0E<<3)/* 256ms */
#define ACCDET_EINT1_DEB_IN_64			(0x0C<<3)/* 64ms */
#define ACCDET_EINT1_DEB_IN_32			(0x0A<<3)/* 32ms */
#define ACCDET_EINT1_DEB_OUT_012		(0x01<<3)/* 0.12ms */
#define ACCDET_EINT1_DEB_512			(0x0F<<3)/* 512ms */
#define ACCDET_EINT1_DEB_CLR			(0x0F<<3)/* 512ms */
#define ACCDET_EINT1_PWM_THRSH			(0x06<<8)/* 16ms */
#define ACCDET_EINT1_PWM_WIDTH			(0x02<<12)/* 16ms */

/* ACCDET_CON26,0x253C: accdet eint1 PWM rise/falling set */
/* ACCDET_CON27,0x253E: RO. accdet_eint FSM state, etc. */
/* ACCDET_CON28,0x2540: RO. accdet_eint1 current used debounce time */
/*--------------------------Register_ACCDET_REG  Bit Define End--------------------------------*/

#if 0
/* ACCDET_ELR_NUM,0x1700: bit[0:7]: length of ELR register series, unit is byte */
#define ACCDET_ELR_LEN_B0_B7				(0x0FF)

/* ACCDET_ELR0,0x1702 */
#define RG_ACCDET_RES_B8_B15				(0x0FF<<8)/* ELR 0 register */
#define RG_ACCDET_OFFSET_CAL_B0_B7			(0x0FF)
/* ACCDET_ELR1,0x1704 */
#define RG_ACCDET_DB_B8_B15					(0x0FF<<8)/* ELR 1 register */
#define RG_ACCDET_AD_B0_B7					(0x0FF)
/* ACCDET_ELR2,0x1706 */
#define RG_ACCDET_BC_B0_B7					(0x0FF)/* ELR 2 register */

#define RG_ACCDET_BIT_SHIFT			(0x09)
#define RG_ACCDET_HIGH_BIT_SHIFT		(0x07)

/* AUDENC_ANA_CON10:0x161A: Mic-bias1 output voltage & lowpower Enable */
#define RG_AUD_MBIAS1_PWR					(0x01<<0)/* 1,power-on;0,power-off */
#define RG_AUD_MBIAS1_DC_SW_1P				(0x01<<1)/* MIC bias 1 DC couple switch 1P */
#define RG_AUD_MBIAS1_DC_SW_1N				(0x01<<2)/* MIC bias 1 DC couple switch 1N */
#define RG_AUD_MBIAS1_DC_SW_3P				(0x01<<8)/* MIC bias 1 DC couple switch 3P */
#define RG_AUD_MBIAS1_DC_SW_3N				(0x01<<9)/* MIC bias 1 DC couple switch 3N */
#define RG_MBIAS_MODE_6	(RG_AUD_MBIAS1_DC_SW_1P | RG_AUD_MBIAS1_DC_SW_3P)/* mic_bias_mode= 6 */

#define RG_AUD_MICBIAS1_LOWP_EN			(0x01<<2)
#define RG_AUD_MICBIAS1_BYPASS_EN			(0x01<<1)/* 2.8v bypass */
#define RG_AUD_PW_MBIAS1					(0x01)/* power on */

#define RG_MBIAS_OUTPUT_1V9					(0x02<<4)/* 1.9V */
#define RG_MBIAS_OUTPUT_2V5					(0x05<<4)/* 2.5V */
#define RG_MBIAS_OUTPUT_2V7					(0x07<<4)/* 2.7V */
#define RG_MICBIAS1_LOWPEN_OUTVOL	(RG_MBIAS_LOWPOWER_EN | RG_MBIAS_OUTPUT_2V7)/* add */
#define RG_ACCDET_MODE2_ANA10				(0x151)

/* AUDENC_ANA_CON11:0x161C: Mic-bias1 pull low enable/disable */
#define RG_AUD_ACCDET_MBIAS0_EN			(0x01<<0)
#define RG_AUD_ACCDET_MBIAS0_DISABLE		(0x00)
#define RG_AUD_ACCDET_MBIAS1_EN			(0x01<<1)
#define RG_AUD_ACCDET_MBIAS1_DISABLE		(0x00<<1)
#define RG_AUD_ACCDET_VIN1_EN				(0x01<<2)
#define RG_AUD_ACCDET_VIN1_DISABLE			(0x00<<2)
#define RG_ACCDET_SEL_MICP					(0x01<<7)
#define RG_ACCDET_SEL_ACCDET				(0x00<<7)
#define RG_EINT_CONFIG_ACCDET				(0x01<<11)

#define RG_ACCDET_MODE_ANA10_MODE1			(0x0807)
#define RG_ACCDET_MODE_ANA10_MODE2			(0x0887)
#define RG_ACCDET_MODE_ANA10_MODE6			(0x0987)
#define RG_ACCDET_AUXADC_SW_ON				(0x0001)

#define RG_ACCDET1_SEL_MIC1P				(0x01<<7)
#define RG_ACCDET1_SEL_ACCDET1				(0x00<<7)
#define RG_ACCDET2_SEL_MIC3P				(0x01<<8)
#define RG_ACCDET2_SEL_ACCDET2				(0x00<<8)
#define RG_SWBUF_SW_EN						(0x01<<10)/* power on */
#define RG_SWBUF_SW_DISEN					(0x00<<10)/* power off */
#define ACCDET_EINT0_CON_EN					(0x01<<12)
#define ACCDET_EINT1_CON_EN					(0x01<<13)

#define ACCDET_SEL_EINT_EN					(0x3182)
#define ACCDET_SEL_EINT0_EN		(RG_ACCDET1_SEL_MIC1P | ACCDET_EINT0_CON_EN)
#define ACCDET_SEL_EINT1_EN		(RG_ACCDET2_SEL_MIC3P | ACCDET_EINT1_CON_EN)
#define ACCDET_SEL_EINT_CON_EN	(ACCDET_EINT0_EN | ACCDET_EINT1_EN)

#define RG_OTP_PA_ADDR_WORD_INDEX			(0x03)
#define RG_OTP_PA_ACCDET_BIT_SHIFT			(0x06)

#define ACCDET_IN_SW			0x10
#define ACCDET_DE4			0x42 /* 2ms */

/* power mode and auxadc switch on/off */
#define ACCDET_1V9_MODE_OFF   0x1A10
#define ACCDET_2V8_MODE_OFF   0x5A10
#define ACCDET_1V9_MODE_ON   0x1E10
#define ACCDET_2V8_MODE_ON   0x5A20
#define ACCDET_SWCTRL_IDLE_EN    (0x07<<4)
/* ++++++++++++++++++++++++++++++++++++++++++++++++++++ */
#endif

#endif/* end _REG_ACCDET_H_ */
