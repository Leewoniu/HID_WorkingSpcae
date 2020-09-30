/*********************************************************************************************
    *   Filename        : p11.h

    *   Description     :

    *   Author          : Bingquan

    *   Email           : caibingquan@zh-jieli.com

    *   Last modifiled  : 2019-12-09 10:21

    *   Copyright:(c)JIELI  2011-2019  @ , All Rights Reserved.
*********************************************************************************************/

#ifndef __P11__
#define __P11__

#ifdef c51
#define P11_ACCESS(x)       (*(volatile u8 *)(0x1F00 + x))
#else
#define P11_RAM_ACCESS(x)   (*(volatile u8 *)(0x1A0000 + x))
#define P11_ACCESS(x)       (*(volatile u8 *)(0x1A0000 + 0x1F00 + x))
#endif

//  0x80 - 0x87
//******************************
#define    P11_DPCON0            P11_ACCESS(0x80)
#define    P11_SP                P11_ACCESS(0x81)
#define    P11_DP0L              P11_ACCESS(0x82)
#define    P11_DP0H              P11_ACCESS(0x83)
#define    P11_DP1L              P11_ACCESS(0x84)
#define    P11_DP1H              P11_ACCESS(0x85)
#define    P11_SPH               P11_ACCESS(0x86)
#define    P11_PDATA             P11_ACCESS(0x87)

//  0x88 - 0x8f
//******************************
#define    P11_WDT_CON0          P11_ACCESS(0x88)
#define    P11_WDT_CON1          P11_ACCESS(0x89)
#define    P11_PWR_CON           P11_ACCESS(0x8a)
#define    P11_CLK_CON0          P11_ACCESS(0x8b)
#define    P11_CLK_CON1          P11_ACCESS(0x8c)
//#define                          P11_ACCESS(0x8d)
#define    P11_RST_SRC           P11_ACCESS(0x8e)
#define    P11_SYS_DIV           P11_ACCESS(0x8f)

//  0xA8 - 0xA7
//******************************
#define    P11_IE0               P11_ACCESS(0xa8)
#define    P11_IE1               P11_ACCESS(0xa9)
#define    P11_IPCON0L           P11_ACCESS(0xaa)
#define    P11_IPCON0H           P11_ACCESS(0xab)
#define    P11_IPCON1L           P11_ACCESS(0xac)
#define    P11_IPCON1H           P11_ACCESS(0xad)
#define    P11_INT_BASE          P11_ACCESS(0xae)
#define    P11_SINT_CON          P11_ACCESS(0xaf)

//  0xC0 - 0xC7
//******************************
#define    P11_LCTM_CON         P11_ACCESS(0xc0)
#define    P11_PORT_CON0        P11_ACCESS(0xc1)
#define    P11_PORT_CON1        P11_ACCESS(0xc2)

//  0xC8 - 0xCF
//******************************
#define    P11_UART_CON0         P11_ACCESS(0xc8)
#define    P11_UART_CON1         P11_ACCESS(0xc9)
#define    P11_UART_STA          P11_ACCESS(0xca)
#define    P11_UART_BUF          P11_ACCESS(0xcb)
#define    P11_UART_BAUD         P11_ACCESS(0xcc)
#define    P11_TMR2_CON0         P11_ACCESS(0xcd)
#define    P11_TMR2_CON1         P11_ACCESS(0xce)
#define    P11_TMR2_CON2         P11_ACCESS(0xcf)

//  0xD0 - 0xD7
//******************************
#define    P11_PSW               P11_ACCESS(0xD0)
#define    P11_TMR0_CON0         P11_ACCESS(0xd1)
#define    P11_TMR0_CON1         P11_ACCESS(0xd2)
#define    P11_TMR0_CON2         P11_ACCESS(0xd3)
#define    P11_TMR0_PRD0         P11_ACCESS(0xd4)
#define    P11_TMR0_PRD1         P11_ACCESS(0xd5)
#define    P11_TMR0_PRD2         P11_ACCESS(0xd6)
#define    P11_TMR0_PRD3         P11_ACCESS(0xd7)

//  0xD8 - 0xDF
//******************************
#define    P11_TMR0_RSC0         P11_ACCESS(0xd8)
#define    P11_TMR0_RSC1         P11_ACCESS(0xd9)
#define    P11_TMR0_RSC2         P11_ACCESS(0xda)
#define    P11_TMR0_RSC3         P11_ACCESS(0xdb)
#define    P11_TMR0_CNT0         P11_ACCESS(0xdc)
#define    P11_TMR0_CNT1         P11_ACCESS(0xdd)
#define    P11_TMR0_CNT2         P11_ACCESS(0xde)
#define    P11_TMR0_CNT3         P11_ACCESS(0xdf)

//  0xE0 - 0xE7
//******************************
#define    P11_ACC               P11_ACCESS(0xe0)
#define    P11_TMR1_CON0         P11_ACCESS(0xe1)
#define    P11_TMR1_CON1         P11_ACCESS(0xe2)
#define    P11_TMR1_CON2         P11_ACCESS(0xe3)
#define    P11_TMR1_PRD0         P11_ACCESS(0xe4)
#define    P11_TMR1_PRD1         P11_ACCESS(0xe5)
#define    P11_TMR1_RSC0         P11_ACCESS(0xe6)
#define    P11_TMR1_RSC1         P11_ACCESS(0xe7)

//  0xE8 - 0xEF
//******************************
#define    P11_TMR1_CNT0         P11_ACCESS(0xe8)
#define    P11_TMR1_CNT1         P11_ACCESS(0xe9)
#define    P11_TMR2_PRD0         P11_ACCESS(0xea)
#define    P11_TMR2_PRD1         P11_ACCESS(0xeb)
#define    P11_TMR2_RSC0         P11_ACCESS(0xec)
#define    P11_TMR2_RSC1         P11_ACCESS(0xed)
#define    P11_TMR2_CNT0         P11_ACCESS(0xee)
#define    P11_TMR2_CNT1         P11_ACCESS(0xef)

//  0xF0 - 0xF7
//******************************
#define    P11_BREG              P11_ACCESS(0xf0)
#define    P11_P2M_INT_IE        P11_ACCESS(0xf1)
#define    P11_P2M_INT_SET       P11_ACCESS(0xf2)
#define    P11_P2M_INT_CLR       P11_ACCESS(0xf3)
#define    P11_P2M_INT_PND       P11_ACCESS(0xf4)
#define    P11_P2M_CLK_CON0      P11_ACCESS(0xf5)
#define    P11_P11_SYS_CON0      P11_ACCESS(0xf6)
#define    P11_P11_SYS_CON1      P11_ACCESS(0xf7)

//  0xF8 - 0xFF
//******************************
#define    P11_SYS_CON2          P11_ACCESS(0xf8)
#define    P11_M2P_INT_IE        P11_ACCESS(0xf9)
#define    P11_M2P_INT_SET       P11_ACCESS(0xfa)
#define    P11_M2P_INT_CLR       P11_ACCESS(0xfb)
#define    P11_M2P_INT_PND       P11_ACCESS(0xfc)
//#define                          P11_ACCESS(0xfd)
//#define                          P11_ACCESS(0xfe)
#define    P11_SIM_END           P11_ACCESS(0xff)

#define P33_TEST_ENABLE()           P11_P11_SYS_CON0 |= BIT(5)
#define P33_TEST_DISABLE()          P11_P11_SYS_CON0 &= ~BIT(5)

#define LP_PWR_IDLE(x)              SFR(P11_PWR_CON, 0, 1, x)
#define LP_PWR_STANDBY(x)           SFR(P11_PWR_CON, 1, 1, x)
#define LP_PWR_SLEEP(x)             SFR(P11_PWR_CON, 2, 1, x)
#define LP_PWR_SSMODE(x)            SFR(P11_PWR_CON, 3, 1, x)
#define LP_PWR_SOFT_RESET(x)        SFR(P11_PWR_CON, 4, 1, x)
#define LP_PWR_INIT_FLAG()          (P11_PWR_CON & BIT(5))
#define LP_PWR_RST_FLAG_CLR(x)      SFR(P11_PWR_CON, 6, 1, x)
#define LP_PWR_RST_FLAG()           (P11_PWR_CON & BIT(7))

#define LP_SOFT_FLAG_GET()          (P11_SYS_CON0 & BIT(0))
#define LP_SOFT_FLAG_SET(x)         SFR(P11_SYS_CON0, 0, 1, x)
#define LP_M2P_ACCESS_EN(x)         SFR(P11_SYS_CON0, 1, 1, x)
#define LP_PORT_WKUP_IE(x)          SFR(P11_SYS_CON0, 6, 1, x)
#define LP_PORT_WKUP_PND()          (P11_SYS_CON0 & BIT(7))

#define P11_P2M_RESET(x)            SFR(P11_SYS_CON2, 3, 1, x)
#define P11_M2P_RESET_MASK(x)       SFR(P11_SYS_CON2, 4, 1, x)
#define P11_RESET_SYS(x)            SFR(P11_SYS_CON2, 6, 1, x)
#define SYS_RESET_P11(x)            SFR(P11_SYS_CON2, 7, 1, x)

#define LP_TMR0_EN(x)               SFR(P11_TMR0_CON0, 0, 1, x)
#define LP_TMR0_CTU(x)              SFR(P11_TMR0_CON0, 1, 1, x)
#define LP_TMR0_P11_WKUP_IE(x)      SFR(P11_TMR0_CON0, 2, 1, x)
#define LP_TMR0_P11_TO_IE(x)        SFR(P11_TMR0_CON0, 3, 1, x)
#define LP_TMR0_CLR_P11_WKUP(x)     SFR(P11_TMR0_CON0, 4, 1, x)
#define LP_TMR0_P11_WKUP(x)         (P11_TMR0_CON0 & BIT(5))
#define LP_TMR0_CLR_P11_TO(x)       SFR(P11_TMR0_CON0, 6, 1, x)
#define LP_TMR0_P11_TO(x)           (P11_TMR0_CON0 & BIT(7))

#define LP_TMR0_SW_KICK_START(x)    SFR(P11_TMR0_CON1, 0, 1, x)
#define LP_TMR0_HW_KICK_START(x)    SFR(P11_TMR0_CON1, 1, 1, x)
#define LP_TMR0_WKUP_IE(x)          SFR(P11_TMR0_CON1, 2, 1, x)
#define LP_TMR0_TO_IE(x)            SFR(P11_TMR0_CON1, 3, 1, x)
#define LP_TMR0_CLR_MSYS_WKUP(x)    SFR(P11_TMR0_CON1, 4, 1, x)
#define LP_TMR0_MSYS_WKUP(x)        (P11_TMR0_CON1 & BIT(5))
#define LP_TMR0_CLR_MSYS_TO(x)      SFR(P11_TMR0_CON1, 6, 1, x)
#define LP_TMR0_MSYS_TO(x)          (P11_TMR0_CON1 & BIT(7))

#define LP_TMR0_CLK_SEL(x)          SFR(P11_TMR0_CON2, 0, 2, x)
#define LP_TMR0_CLK_DIV(x)          SFR(P11_TMR0_CON2, 2, 2, x)
#define LP_TMR0_KST(x)              SFR(P11_TMR0_CON2, 4, 1, x)
#define LP_TMR0_RUN()               (P11_TMR0_CON2 & BIT(5))
#define LP_TMR0_SAMPLE_KST(x)       SFR(P11_TMR0_CON2, 6, 1, x)
#define LP_TMR0_SAMPLE_DONE()       (P11_TMR0_CON2 & BIT(7))

#define LP_TMR1_EN(x)               SFR(P11_TMR1_CON0, 0, 1, x)
#define LP_TMR1_CTU(x)              SFR(P11_TMR1_CON0, 1, 1, x)
#define LP_TMR1_P11_WKUP_IE(x)      SFR(P11_TMR1_CON0, 2, 1, x)
#define LP_TMR1_P11_TO_IE(x)        SFR(P11_TMR1_CON0, 3, 1, x)
#define LP_TMR1_CLR_P11_WKUP(x)     SFR(P11_TMR1_CON0, 4, 1, x)
#define LP_TMR1_WKUP(x)             SFR(P11_TMR1_CON0, 5, 1, x)
#define LP_TMR1_CLR_P11_TO(x)       SFR(P11_TMR1_CON0, 6, 1, x)
#define LP_TMR1_P11_TO(x)           SFR(P11_TMR1_CON0, 7, 1, x)

#define LP_TMR1_SW_KICK_START(x)    SFR(P11_TMR1_CON1, 0, 1, x)
#define LP_TMR1_HW_KICK_START(x)    SFR(P11_TMR1_CON1, 1, 1, x)
#define LP_TMR1_WKUP_IE(x)          SFR(P11_TMR1_CON1, 2, 1, x)
#define LP_TMR1_TO_IE(x)            SFR(P11_TMR1_CON1, 3, 1, x)
#define LP_TMR1_CLR_MSYS_WKUP(x)    SFR(P11_TMR1_CON1, 4, 1, x)
#define LP_TMR1_MSYS_WKUP(x)        SFR(P11_TMR1_CON1, 5, 1, x)
#define LP_TMR1_CLR_MSYS_TO(x)      SFR(P11_TMR1_CON1, 6, 1, x)
#define LP_TMR1_MSYS_TO(x)          SFR(P11_TMR1_CON1, 7, 1, x)

#define LP_TMR1_CLK_SEL(x)          SFR(P11_TMR1_CON2, 0, 2, x)
#define LP_TMR1_CLK_DIV(x)          SFR(P11_TMR1_CON2, 2, 2, x)
#define LP_TMR1_KST(x)              SFR(P11_TMR1_CON2, 4, 1, x)
#define LP_TMR1_RUN()               (P11_TMR1_CON2 & BIT(5))
#define LP_TMR1_SAMPLE_KST(x)       SFR(P11_TMR1_CON2, 6, 1, x)
#define LP_TMR1_SAMPLE_DONE()       (P11_TMR1_CON2 & BIT(7))

//Mapping to P11
#define P2M_WKUP_SRC                P11_RAM_ACCESS(0xf80)
#define P2M_WKUP_PND                P11_RAM_ACCESS(0xf81)
#define P2M_WKUP_LEVEL              P11_RAM_ACCESS(0xf82)

#define P2M_CTMU_KEY_EVENT          P11_RAM_ACCESS(0xf83)
#define P2M_CTMU_CH0_L_RES      	P11_RAM_ACCESS(0xf84)
#define P2M_CTMU_CH0_H_RES      	P11_RAM_ACCESS(0xf85)
#define P2M_CTMU_CH1_L_RES      	P11_RAM_ACCESS(0xf86)
#define P2M_CTMU_CH1_H_RES      	P11_RAM_ACCESS(0xf87)
#define P2M_CTMU_CTMU_KEY_CNT      	P11_RAM_ACCESS(0xf88)

#define P2M_R3_WKUP_SRC				P11_RAM_ACCESS(0xf89)
#define P2M_R3_ALM_CON				P11_RAM_ACCESS(0xf8a)
#define P2M_R3_TIME_PND				P11_RAM_ACCESS(0xf8b)
#define P2M_CTMU_CTMU_WKUP_MSG		P11_RAM_ACCESS(0xf8c)

#define M2P_LRC_PRD                 P11_RAM_ACCESS(0xfc0)
#define M2P_LCTM_PRD0               P11_RAM_ACCESS(0xfc1)
#define M2P_LCTM_PRD1               P11_RAM_ACCESS(0xfc2)
#define M2P_CTMU_MSG                P11_RAM_ACCESS(0xfc3)
#define M2P_CTMU_CH0_SHORT_TIMEL    P11_RAM_ACCESS(0xfc4)
#define M2P_CTMU_CH0_SHORT_TIMEH    P11_RAM_ACCESS(0xfc5)
#define M2P_CTMU_CH0_LONG_TIMEL    	P11_RAM_ACCESS(0xfc6)
#define M2P_CTMU_CH0_LONG_TIMEH     P11_RAM_ACCESS(0xfc7)

#define M2P_CTMU_CH0_CFG0L          P11_RAM_ACCESS(0xfc8)
#define M2P_CTMU_CH0_CFG0H          P11_RAM_ACCESS(0xfc9)
#define M2P_CTMU_CH0_CFG1L          P11_RAM_ACCESS(0xfca)
#define M2P_CTMU_CH0_CFG1H          P11_RAM_ACCESS(0xfcb)
#define M2P_CTMU_CH0_CFG2L          P11_RAM_ACCESS(0xfcc)
#define M2P_CTMU_CH0_CFG2H          P11_RAM_ACCESS(0xfcd)
#define M2P_CTMU_CH1_CFG0L          P11_RAM_ACCESS(0xfce)
#define M2P_CTMU_CH1_CFG0H          P11_RAM_ACCESS(0xfcf)

#define M2P_CTMU_CH1_CFG1L          P11_RAM_ACCESS(0xfd0)
#define M2P_CTMU_CH1_CFG1H          P11_RAM_ACCESS(0xfd1)
#define M2P_CTMU_CH1_CFG2L          P11_RAM_ACCESS(0xfd2)
#define M2P_CTMU_CH1_CFG2H          P11_RAM_ACCESS(0xfd3)
#define M2P_WDVDD                   P11_RAM_ACCESS(0xfd4)
#define M2P_CTMU_CH0_SOFTOFF_LONG_TIMEL    	P11_RAM_ACCESS(0xfd5)
#define M2P_CTMU_CH0_SOFTOFF_LONG_TIMEH     P11_RAM_ACCESS(0xfd6)
#define M2P_CTMU_CMD  				P11_RAM_ACCESS(0xfd7)
#define M2P_CTMU_BASE_TIME_PRD_L  	P11_RAM_ACCESS(0xfd8)
#define M2P_CTMU_BASE_TIME_PRD_H 	P11_RAM_ACCESS(0xfd9)
#define M2P_LRC_TMR_50us  	        P11_RAM_ACCESS(0xfda)
#define M2P_LRC_TMR_200us 	        P11_RAM_ACCESS(0xfdb)
#define M2P_LRC_TMR_600us 	        P11_RAM_ACCESS(0xfdc)
#define M2P_VDDIO_KEEP 	            P11_RAM_ACCESS(0xfdd)
#define M2P_LRC_KEEP 	            P11_RAM_ACCESS(0xfde)

#define M2P_CTMU_CH0_PRD1_L			P11_RAM_ACCESS(0xfdf)
#define M2P_CTMU_CH0_PRD1_H			P11_RAM_ACCESS(0xfe0)
#define M2P_CTMU_CH1_PRD1_L			P11_RAM_ACCESS(0xfe1)
#define M2P_CTMU_CH1_PRD1_H			P11_RAM_ACCESS(0xfe2)

#define M2P_CRITICAL_CMD1            P11_RAM_ACCESS(0xfe3)
#define M2P_CRITICAL_CMD2			 P11_RAM_ACCESS(0xfe4)

#define M2P_RTC_CMD					P11_RAM_ACCESS(0xfe5)
#define M2P_RTC_DAT0				P11_RAM_ACCESS(0xfe6)
#define M2P_RTC_DAT1				P11_RAM_ACCESS(0xfe7)
#define M2P_RTC_DAT2				P11_RAM_ACCESS(0xfe8)
#define M2P_RTC_DAT3				P11_RAM_ACCESS(0xfe9)
#define M2P_RTC_DAT4				P11_RAM_ACCESS(0xfea)

/*
 *  Must Sync to P11 code
 */
enum {
    M2P_LP_INDEX    = 0,
    M2P_PF_INDEX,
    M2P_P33_INDEX,
    M2P_SF_INDEX,
    M2P_CTMU_INDEX,
    M2P_CRITICAL_INDEX,
    M2P_RTC_INDEX,
};

enum {
    P2M_LP_INDEX    = 0,
    P2M_PF_INDEX,
    P2M_WK_INDEX    = 1,
    P2M_WDT_INDEX,
    P2M_LP_INDEX2,
    P2M_CTMU_INDEX,
    P2M_CTMU_POWUP,
};

enum {
    TIME0_INT = 0,
    TIME1_INT,
    TIME2_INT,
    WDT_INT,
    UART_INT,
    M2P_INT,
    P33_INT,
    EA_INT,
};

void wdt_isr(void);

#endif


