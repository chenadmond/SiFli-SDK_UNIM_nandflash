/*
 * SPDX-FileCopyrightText: 2019-2025 SiFli Technologies(Nanjing) Co., Ltd
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __LPSYS_AON_H
#define __LPSYS_AON_H

typedef struct
{
    __IO uint32_t PMR;
    __IO uint32_t CR;
    __IO uint32_t ACR;
    __IO uint32_t LSCR;
    __IO uint32_t DSCR;
    __IO uint32_t SBCR;
    __IO uint32_t WER;
    __IO uint32_t WSR;
    __IO uint32_t WCR;
    __IO uint32_t ISSR;
    __IO uint32_t DBGMUX;
    __IO uint32_t TARGET;
    __IO uint32_t ACTUAL;
    __IO uint32_t PRE_WKUP;
    __IO uint32_t SLP_CFG;
    __IO uint32_t SLP_CTRL;
    __IO uint32_t ANACR;
    __IO uint32_t GTIMR;
    __IO uint32_t RESERVE0;
    __IO uint32_t RESERVE1;
    __IO uint32_t RSVD1[44];
    __IO uint32_t SPR;
    __IO uint32_t PCR;
} LPSYS_AON_TypeDef;


/***************** Bit definition for LPSYS_AON_PMR register ******************/
#define LPSYS_AON_PMR_MODE_Pos          (0U)
#define LPSYS_AON_PMR_MODE_Msk          (0x3UL << LPSYS_AON_PMR_MODE_Pos)
#define LPSYS_AON_PMR_MODE              LPSYS_AON_PMR_MODE_Msk
#define LPSYS_AON_PMR_CPUWAIT_Pos       (30U)
#define LPSYS_AON_PMR_CPUWAIT_Msk       (0x1UL << LPSYS_AON_PMR_CPUWAIT_Pos)
#define LPSYS_AON_PMR_CPUWAIT           LPSYS_AON_PMR_CPUWAIT_Msk
#define LPSYS_AON_PMR_FORCE_SLEEP_Pos   (31U)
#define LPSYS_AON_PMR_FORCE_SLEEP_Msk   (0x1UL << LPSYS_AON_PMR_FORCE_SLEEP_Pos)
#define LPSYS_AON_PMR_FORCE_SLEEP       LPSYS_AON_PMR_FORCE_SLEEP_Msk

/****************** Bit definition for LPSYS_AON_CR register ******************/
#define LPSYS_AON_CR_PIN0_MODE_Pos      (0U)
#define LPSYS_AON_CR_PIN0_MODE_Msk      (0x7UL << LPSYS_AON_CR_PIN0_MODE_Pos)
#define LPSYS_AON_CR_PIN0_MODE          LPSYS_AON_CR_PIN0_MODE_Msk
#define LPSYS_AON_CR_PIN1_MODE_Pos      (3U)
#define LPSYS_AON_CR_PIN1_MODE_Msk      (0x7UL << LPSYS_AON_CR_PIN1_MODE_Pos)
#define LPSYS_AON_CR_PIN1_MODE          LPSYS_AON_CR_PIN1_MODE_Msk
#define LPSYS_AON_CR_PIN2_MODE_Pos      (6U)
#define LPSYS_AON_CR_PIN2_MODE_Msk      (0x7UL << LPSYS_AON_CR_PIN2_MODE_Pos)
#define LPSYS_AON_CR_PIN2_MODE          LPSYS_AON_CR_PIN2_MODE_Msk
#define LPSYS_AON_CR_PIN3_MODE_Pos      (9U)
#define LPSYS_AON_CR_PIN3_MODE_Msk      (0x7UL << LPSYS_AON_CR_PIN3_MODE_Pos)
#define LPSYS_AON_CR_PIN3_MODE          LPSYS_AON_CR_PIN3_MODE_Msk
#define LPSYS_AON_CR_PIN4_MODE_Pos      (12U)
#define LPSYS_AON_CR_PIN4_MODE_Msk      (0x7UL << LPSYS_AON_CR_PIN4_MODE_Pos)
#define LPSYS_AON_CR_PIN4_MODE          LPSYS_AON_CR_PIN4_MODE_Msk
#define LPSYS_AON_CR_PIN5_MODE_Pos      (15U)
#define LPSYS_AON_CR_PIN5_MODE_Msk      (0x7UL << LPSYS_AON_CR_PIN5_MODE_Pos)
#define LPSYS_AON_CR_PIN5_MODE          LPSYS_AON_CR_PIN5_MODE_Msk
#define LPSYS_AON_CR_GTIM_EN_Pos        (18U)
#define LPSYS_AON_CR_GTIM_EN_Msk        (0x1UL << LPSYS_AON_CR_GTIM_EN_Pos)
#define LPSYS_AON_CR_GTIM_EN            LPSYS_AON_CR_GTIM_EN_Msk

/***************** Bit definition for LPSYS_AON_ACR register ******************/
#define LPSYS_AON_ACR_HRC1M_REQ_Pos     (0U)
#define LPSYS_AON_ACR_HRC1M_REQ_Msk     (0x1UL << LPSYS_AON_ACR_HRC1M_REQ_Pos)
#define LPSYS_AON_ACR_HRC1M_REQ         LPSYS_AON_ACR_HRC1M_REQ_Msk
#define LPSYS_AON_ACR_HRC48_REQ_Pos     (1U)
#define LPSYS_AON_ACR_HRC48_REQ_Msk     (0x1UL << LPSYS_AON_ACR_HRC48_REQ_Pos)
#define LPSYS_AON_ACR_HRC48_REQ         LPSYS_AON_ACR_HRC48_REQ_Msk
#define LPSYS_AON_ACR_HXT48_REQ_Pos     (2U)
#define LPSYS_AON_ACR_HXT48_REQ_Msk     (0x1UL << LPSYS_AON_ACR_HXT48_REQ_Pos)
#define LPSYS_AON_ACR_HXT48_REQ         LPSYS_AON_ACR_HXT48_REQ_Msk
#define LPSYS_AON_ACR_PWR_REQ_Pos       (3U)
#define LPSYS_AON_ACR_PWR_REQ_Msk       (0x1UL << LPSYS_AON_ACR_PWR_REQ_Pos)
#define LPSYS_AON_ACR_PWR_REQ           LPSYS_AON_ACR_PWR_REQ_Msk
#define LPSYS_AON_ACR_EXTPWR_REQ_Pos    (4U)
#define LPSYS_AON_ACR_EXTPWR_REQ_Msk    (0x1UL << LPSYS_AON_ACR_EXTPWR_REQ_Pos)
#define LPSYS_AON_ACR_EXTPWR_REQ        LPSYS_AON_ACR_EXTPWR_REQ_Msk
#define LPSYS_AON_ACR_DS_RAM0_Pos       (6U)
#define LPSYS_AON_ACR_DS_RAM0_Msk       (0x1UL << LPSYS_AON_ACR_DS_RAM0_Pos)
#define LPSYS_AON_ACR_DS_RAM0           LPSYS_AON_ACR_DS_RAM0_Msk
#define LPSYS_AON_ACR_DS_RAM1_Pos       (7U)
#define LPSYS_AON_ACR_DS_RAM1_Msk       (0x1UL << LPSYS_AON_ACR_DS_RAM1_Pos)
#define LPSYS_AON_ACR_DS_RAM1           LPSYS_AON_ACR_DS_RAM1_Msk
#define LPSYS_AON_ACR_DS_RAM2_Pos       (8U)
#define LPSYS_AON_ACR_DS_RAM2_Msk       (0x1UL << LPSYS_AON_ACR_DS_RAM2_Pos)
#define LPSYS_AON_ACR_DS_RAM2           LPSYS_AON_ACR_DS_RAM2_Msk
#define LPSYS_AON_ACR_DS_RAM3_Pos       (9U)
#define LPSYS_AON_ACR_DS_RAM3_Msk       (0x1UL << LPSYS_AON_ACR_DS_RAM3_Pos)
#define LPSYS_AON_ACR_DS_RAM3           LPSYS_AON_ACR_DS_RAM3_Msk
#define LPSYS_AON_ACR_DS_RAM4_Pos       (10U)
#define LPSYS_AON_ACR_DS_RAM4_Msk       (0x1UL << LPSYS_AON_ACR_DS_RAM4_Pos)
#define LPSYS_AON_ACR_DS_RAM4           LPSYS_AON_ACR_DS_RAM4_Msk
#define LPSYS_AON_ACR_DS_RAM5_Pos       (11U)
#define LPSYS_AON_ACR_DS_RAM5_Msk       (0x1UL << LPSYS_AON_ACR_DS_RAM5_Pos)
#define LPSYS_AON_ACR_DS_RAM5           LPSYS_AON_ACR_DS_RAM5_Msk
#define LPSYS_AON_ACR_DS_ITCM_Pos       (12U)
#define LPSYS_AON_ACR_DS_ITCM_Msk       (0x1UL << LPSYS_AON_ACR_DS_ITCM_Pos)
#define LPSYS_AON_ACR_DS_ITCM           LPSYS_AON_ACR_DS_ITCM_Msk
#define LPSYS_AON_ACR_DS_DTCM_Pos       (13U)
#define LPSYS_AON_ACR_DS_DTCM_Msk       (0x1UL << LPSYS_AON_ACR_DS_DTCM_Pos)
#define LPSYS_AON_ACR_DS_DTCM           LPSYS_AON_ACR_DS_DTCM_Msk
#define LPSYS_AON_ACR_DS_CACHE_Pos      (14U)
#define LPSYS_AON_ACR_DS_CACHE_Msk      (0x1UL << LPSYS_AON_ACR_DS_CACHE_Pos)
#define LPSYS_AON_ACR_DS_CACHE          LPSYS_AON_ACR_DS_CACHE_Msk
#define LPSYS_AON_ACR_HRC1M_RDY_Pos     (29U)
#define LPSYS_AON_ACR_HRC1M_RDY_Msk     (0x1UL << LPSYS_AON_ACR_HRC1M_RDY_Pos)
#define LPSYS_AON_ACR_HRC1M_RDY         LPSYS_AON_ACR_HRC1M_RDY_Msk
#define LPSYS_AON_ACR_HRC48_RDY_Pos     (30U)
#define LPSYS_AON_ACR_HRC48_RDY_Msk     (0x1UL << LPSYS_AON_ACR_HRC48_RDY_Pos)
#define LPSYS_AON_ACR_HRC48_RDY         LPSYS_AON_ACR_HRC48_RDY_Msk
#define LPSYS_AON_ACR_HXT48_RDY_Pos     (31U)
#define LPSYS_AON_ACR_HXT48_RDY_Msk     (0x1UL << LPSYS_AON_ACR_HXT48_RDY_Pos)
#define LPSYS_AON_ACR_HXT48_RDY         LPSYS_AON_ACR_HXT48_RDY_Msk

/***************** Bit definition for LPSYS_AON_LSCR register *****************/
#define LPSYS_AON_LSCR_HRC1M_REQ_Pos    (0U)
#define LPSYS_AON_LSCR_HRC1M_REQ_Msk    (0x1UL << LPSYS_AON_LSCR_HRC1M_REQ_Pos)
#define LPSYS_AON_LSCR_HRC1M_REQ        LPSYS_AON_LSCR_HRC1M_REQ_Msk
#define LPSYS_AON_LSCR_HRC48_REQ_Pos    (1U)
#define LPSYS_AON_LSCR_HRC48_REQ_Msk    (0x1UL << LPSYS_AON_LSCR_HRC48_REQ_Pos)
#define LPSYS_AON_LSCR_HRC48_REQ        LPSYS_AON_LSCR_HRC48_REQ_Msk
#define LPSYS_AON_LSCR_HXT48_REQ_Pos    (2U)
#define LPSYS_AON_LSCR_HXT48_REQ_Msk    (0x1UL << LPSYS_AON_LSCR_HXT48_REQ_Pos)
#define LPSYS_AON_LSCR_HXT48_REQ        LPSYS_AON_LSCR_HXT48_REQ_Msk
#define LPSYS_AON_LSCR_PWR_REQ_Pos      (3U)
#define LPSYS_AON_LSCR_PWR_REQ_Msk      (0x1UL << LPSYS_AON_LSCR_PWR_REQ_Pos)
#define LPSYS_AON_LSCR_PWR_REQ          LPSYS_AON_LSCR_PWR_REQ_Msk
#define LPSYS_AON_LSCR_EXTPWR_REQ_Pos   (4U)
#define LPSYS_AON_LSCR_EXTPWR_REQ_Msk   (0x1UL << LPSYS_AON_LSCR_EXTPWR_REQ_Pos)
#define LPSYS_AON_LSCR_EXTPWR_REQ       LPSYS_AON_LSCR_EXTPWR_REQ_Msk

/***************** Bit definition for LPSYS_AON_DSCR register *****************/
#define LPSYS_AON_DSCR_HRC1M_REQ_Pos    (0U)
#define LPSYS_AON_DSCR_HRC1M_REQ_Msk    (0x1UL << LPSYS_AON_DSCR_HRC1M_REQ_Pos)
#define LPSYS_AON_DSCR_HRC1M_REQ        LPSYS_AON_DSCR_HRC1M_REQ_Msk
#define LPSYS_AON_DSCR_HRC48_REQ_Pos    (1U)
#define LPSYS_AON_DSCR_HRC48_REQ_Msk    (0x1UL << LPSYS_AON_DSCR_HRC48_REQ_Pos)
#define LPSYS_AON_DSCR_HRC48_REQ        LPSYS_AON_DSCR_HRC48_REQ_Msk
#define LPSYS_AON_DSCR_HXT48_REQ_Pos    (2U)
#define LPSYS_AON_DSCR_HXT48_REQ_Msk    (0x1UL << LPSYS_AON_DSCR_HXT48_REQ_Pos)
#define LPSYS_AON_DSCR_HXT48_REQ        LPSYS_AON_DSCR_HXT48_REQ_Msk
#define LPSYS_AON_DSCR_PWR_REQ_Pos      (3U)
#define LPSYS_AON_DSCR_PWR_REQ_Msk      (0x1UL << LPSYS_AON_DSCR_PWR_REQ_Pos)
#define LPSYS_AON_DSCR_PWR_REQ          LPSYS_AON_DSCR_PWR_REQ_Msk
#define LPSYS_AON_DSCR_EXTPWR_REQ_Pos   (4U)
#define LPSYS_AON_DSCR_EXTPWR_REQ_Msk   (0x1UL << LPSYS_AON_DSCR_EXTPWR_REQ_Pos)
#define LPSYS_AON_DSCR_EXTPWR_REQ       LPSYS_AON_DSCR_EXTPWR_REQ_Msk

/***************** Bit definition for LPSYS_AON_SBCR register *****************/
#define LPSYS_AON_SBCR_HRC1M_REQ_Pos    (0U)
#define LPSYS_AON_SBCR_HRC1M_REQ_Msk    (0x1UL << LPSYS_AON_SBCR_HRC1M_REQ_Pos)
#define LPSYS_AON_SBCR_HRC1M_REQ        LPSYS_AON_SBCR_HRC1M_REQ_Msk
#define LPSYS_AON_SBCR_HRC48_REQ_Pos    (1U)
#define LPSYS_AON_SBCR_HRC48_REQ_Msk    (0x1UL << LPSYS_AON_SBCR_HRC48_REQ_Pos)
#define LPSYS_AON_SBCR_HRC48_REQ        LPSYS_AON_SBCR_HRC48_REQ_Msk
#define LPSYS_AON_SBCR_HXT48_REQ_Pos    (2U)
#define LPSYS_AON_SBCR_HXT48_REQ_Msk    (0x1UL << LPSYS_AON_SBCR_HXT48_REQ_Pos)
#define LPSYS_AON_SBCR_HXT48_REQ        LPSYS_AON_SBCR_HXT48_REQ_Msk
#define LPSYS_AON_SBCR_PWR_REQ_Pos      (3U)
#define LPSYS_AON_SBCR_PWR_REQ_Msk      (0x1UL << LPSYS_AON_SBCR_PWR_REQ_Pos)
#define LPSYS_AON_SBCR_PWR_REQ          LPSYS_AON_SBCR_PWR_REQ_Msk
#define LPSYS_AON_SBCR_EXTPWR_REQ_Pos   (4U)
#define LPSYS_AON_SBCR_EXTPWR_REQ_Msk   (0x1UL << LPSYS_AON_SBCR_EXTPWR_REQ_Pos)
#define LPSYS_AON_SBCR_EXTPWR_REQ       LPSYS_AON_SBCR_EXTPWR_REQ_Msk
#define LPSYS_AON_SBCR_PD_RAM0_Pos      (6U)
#define LPSYS_AON_SBCR_PD_RAM0_Msk      (0x1UL << LPSYS_AON_SBCR_PD_RAM0_Pos)
#define LPSYS_AON_SBCR_PD_RAM0          LPSYS_AON_SBCR_PD_RAM0_Msk
#define LPSYS_AON_SBCR_PD_RAM1_Pos      (7U)
#define LPSYS_AON_SBCR_PD_RAM1_Msk      (0x1UL << LPSYS_AON_SBCR_PD_RAM1_Pos)
#define LPSYS_AON_SBCR_PD_RAM1          LPSYS_AON_SBCR_PD_RAM1_Msk
#define LPSYS_AON_SBCR_PD_RAM2_Pos      (8U)
#define LPSYS_AON_SBCR_PD_RAM2_Msk      (0x1UL << LPSYS_AON_SBCR_PD_RAM2_Pos)
#define LPSYS_AON_SBCR_PD_RAM2          LPSYS_AON_SBCR_PD_RAM2_Msk
#define LPSYS_AON_SBCR_PD_RAM3_Pos      (9U)
#define LPSYS_AON_SBCR_PD_RAM3_Msk      (0x1UL << LPSYS_AON_SBCR_PD_RAM3_Pos)
#define LPSYS_AON_SBCR_PD_RAM3          LPSYS_AON_SBCR_PD_RAM3_Msk
#define LPSYS_AON_SBCR_PD_RAM4_Pos      (10U)
#define LPSYS_AON_SBCR_PD_RAM4_Msk      (0x1UL << LPSYS_AON_SBCR_PD_RAM4_Pos)
#define LPSYS_AON_SBCR_PD_RAM4          LPSYS_AON_SBCR_PD_RAM4_Msk
#define LPSYS_AON_SBCR_PD_RAM5_Pos      (11U)
#define LPSYS_AON_SBCR_PD_RAM5_Msk      (0x1UL << LPSYS_AON_SBCR_PD_RAM5_Pos)
#define LPSYS_AON_SBCR_PD_RAM5          LPSYS_AON_SBCR_PD_RAM5_Msk
#define LPSYS_AON_SBCR_PD_ITCM_Pos      (12U)
#define LPSYS_AON_SBCR_PD_ITCM_Msk      (0x1UL << LPSYS_AON_SBCR_PD_ITCM_Pos)
#define LPSYS_AON_SBCR_PD_ITCM          LPSYS_AON_SBCR_PD_ITCM_Msk
#define LPSYS_AON_SBCR_PD_DTCM_Pos      (13U)
#define LPSYS_AON_SBCR_PD_DTCM_Msk      (0x1UL << LPSYS_AON_SBCR_PD_DTCM_Pos)
#define LPSYS_AON_SBCR_PD_DTCM          LPSYS_AON_SBCR_PD_DTCM_Msk
#define LPSYS_AON_SBCR_PU_DLY_Pos       (14U)
#define LPSYS_AON_SBCR_PU_DLY_Msk       (0x3UL << LPSYS_AON_SBCR_PU_DLY_Pos)
#define LPSYS_AON_SBCR_PU_DLY           LPSYS_AON_SBCR_PU_DLY_Msk

/***************** Bit definition for LPSYS_AON_WER register ******************/
#define LPSYS_AON_WER_RTC_Pos           (0U)
#define LPSYS_AON_WER_RTC_Msk           (0x1UL << LPSYS_AON_WER_RTC_Pos)
#define LPSYS_AON_WER_RTC               LPSYS_AON_WER_RTC_Msk
#define LPSYS_AON_WER_LPTIM2_Pos        (1U)
#define LPSYS_AON_WER_LPTIM2_Msk        (0x1UL << LPSYS_AON_WER_LPTIM2_Pos)
#define LPSYS_AON_WER_LPTIM2            LPSYS_AON_WER_LPTIM2_Msk
#define LPSYS_AON_WER_LPCOMP1_Pos       (2U)
#define LPSYS_AON_WER_LPCOMP1_Msk       (0x1UL << LPSYS_AON_WER_LPCOMP1_Pos)
#define LPSYS_AON_WER_LPCOMP1           LPSYS_AON_WER_LPCOMP1_Msk
#define LPSYS_AON_WER_LPCOMP2_Pos       (3U)
#define LPSYS_AON_WER_LPCOMP2_Msk       (0x1UL << LPSYS_AON_WER_LPCOMP2_Pos)
#define LPSYS_AON_WER_LPCOMP2           LPSYS_AON_WER_LPCOMP2_Msk
#define LPSYS_AON_WER_BLE_Pos           (4U)
#define LPSYS_AON_WER_BLE_Msk           (0x1UL << LPSYS_AON_WER_BLE_Pos)
#define LPSYS_AON_WER_BLE               LPSYS_AON_WER_BLE_Msk
#define LPSYS_AON_WER_PIN0_Pos          (5U)
#define LPSYS_AON_WER_PIN0_Msk          (0x1UL << LPSYS_AON_WER_PIN0_Pos)
#define LPSYS_AON_WER_PIN0              LPSYS_AON_WER_PIN0_Msk
#define LPSYS_AON_WER_PIN1_Pos          (6U)
#define LPSYS_AON_WER_PIN1_Msk          (0x1UL << LPSYS_AON_WER_PIN1_Pos)
#define LPSYS_AON_WER_PIN1              LPSYS_AON_WER_PIN1_Msk
#define LPSYS_AON_WER_PIN2_Pos          (7U)
#define LPSYS_AON_WER_PIN2_Msk          (0x1UL << LPSYS_AON_WER_PIN2_Pos)
#define LPSYS_AON_WER_PIN2              LPSYS_AON_WER_PIN2_Msk
#define LPSYS_AON_WER_PIN3_Pos          (8U)
#define LPSYS_AON_WER_PIN3_Msk          (0x1UL << LPSYS_AON_WER_PIN3_Pos)
#define LPSYS_AON_WER_PIN3              LPSYS_AON_WER_PIN3_Msk
#define LPSYS_AON_WER_PIN4_Pos          (9U)
#define LPSYS_AON_WER_PIN4_Msk          (0x1UL << LPSYS_AON_WER_PIN4_Pos)
#define LPSYS_AON_WER_PIN4              LPSYS_AON_WER_PIN4_Msk
#define LPSYS_AON_WER_PIN5_Pos          (10U)
#define LPSYS_AON_WER_PIN5_Msk          (0x1UL << LPSYS_AON_WER_PIN5_Pos)
#define LPSYS_AON_WER_PIN5              LPSYS_AON_WER_PIN5_Msk
#define LPSYS_AON_WER_HP2LP_REQ_Pos     (11U)
#define LPSYS_AON_WER_HP2LP_REQ_Msk     (0x1UL << LPSYS_AON_WER_HP2LP_REQ_Pos)
#define LPSYS_AON_WER_HP2LP_REQ         LPSYS_AON_WER_HP2LP_REQ_Msk
#define LPSYS_AON_WER_HP2LP_IRQ_Pos     (12U)
#define LPSYS_AON_WER_HP2LP_IRQ_Msk     (0x1UL << LPSYS_AON_WER_HP2LP_IRQ_Pos)
#define LPSYS_AON_WER_HP2LP_IRQ         LPSYS_AON_WER_HP2LP_IRQ_Msk

/***************** Bit definition for LPSYS_AON_WSR register ******************/
#define LPSYS_AON_WSR_RTC_Pos           (0U)
#define LPSYS_AON_WSR_RTC_Msk           (0x1UL << LPSYS_AON_WSR_RTC_Pos)
#define LPSYS_AON_WSR_RTC               LPSYS_AON_WSR_RTC_Msk
#define LPSYS_AON_WSR_LPTIM2_Pos        (1U)
#define LPSYS_AON_WSR_LPTIM2_Msk        (0x1UL << LPSYS_AON_WSR_LPTIM2_Pos)
#define LPSYS_AON_WSR_LPTIM2            LPSYS_AON_WSR_LPTIM2_Msk
#define LPSYS_AON_WSR_LPCOMP1_Pos       (2U)
#define LPSYS_AON_WSR_LPCOMP1_Msk       (0x1UL << LPSYS_AON_WSR_LPCOMP1_Pos)
#define LPSYS_AON_WSR_LPCOMP1           LPSYS_AON_WSR_LPCOMP1_Msk
#define LPSYS_AON_WSR_LPCOMP2_Pos       (3U)
#define LPSYS_AON_WSR_LPCOMP2_Msk       (0x1UL << LPSYS_AON_WSR_LPCOMP2_Pos)
#define LPSYS_AON_WSR_LPCOMP2           LPSYS_AON_WSR_LPCOMP2_Msk
#define LPSYS_AON_WSR_BLE_Pos           (4U)
#define LPSYS_AON_WSR_BLE_Msk           (0x1UL << LPSYS_AON_WSR_BLE_Pos)
#define LPSYS_AON_WSR_BLE               LPSYS_AON_WSR_BLE_Msk
#define LPSYS_AON_WSR_PIN0_Pos          (5U)
#define LPSYS_AON_WSR_PIN0_Msk          (0x1UL << LPSYS_AON_WSR_PIN0_Pos)
#define LPSYS_AON_WSR_PIN0              LPSYS_AON_WSR_PIN0_Msk
#define LPSYS_AON_WSR_PIN1_Pos          (6U)
#define LPSYS_AON_WSR_PIN1_Msk          (0x1UL << LPSYS_AON_WSR_PIN1_Pos)
#define LPSYS_AON_WSR_PIN1              LPSYS_AON_WSR_PIN1_Msk
#define LPSYS_AON_WSR_PIN2_Pos          (7U)
#define LPSYS_AON_WSR_PIN2_Msk          (0x1UL << LPSYS_AON_WSR_PIN2_Pos)
#define LPSYS_AON_WSR_PIN2              LPSYS_AON_WSR_PIN2_Msk
#define LPSYS_AON_WSR_PIN3_Pos          (8U)
#define LPSYS_AON_WSR_PIN3_Msk          (0x1UL << LPSYS_AON_WSR_PIN3_Pos)
#define LPSYS_AON_WSR_PIN3              LPSYS_AON_WSR_PIN3_Msk
#define LPSYS_AON_WSR_PIN4_Pos          (9U)
#define LPSYS_AON_WSR_PIN4_Msk          (0x1UL << LPSYS_AON_WSR_PIN4_Pos)
#define LPSYS_AON_WSR_PIN4              LPSYS_AON_WSR_PIN4_Msk
#define LPSYS_AON_WSR_PIN5_Pos          (10U)
#define LPSYS_AON_WSR_PIN5_Msk          (0x1UL << LPSYS_AON_WSR_PIN5_Pos)
#define LPSYS_AON_WSR_PIN5              LPSYS_AON_WSR_PIN5_Msk
#define LPSYS_AON_WSR_PIN_ALL           (LPSYS_AON_WSR_PIN0 | LPSYS_AON_WSR_PIN1 | LPSYS_AON_WSR_PIN2 \
                                         | LPSYS_AON_WSR_PIN3 | LPSYS_AON_WSR_PIN4 | LPSYS_AON_WSR_PIN5)
#define LPSYS_AON_WSR_PIN_NUM           (6)
#define LPSYS_AON_WSR_HP2LP_REQ_Pos     (11U)
#define LPSYS_AON_WSR_HP2LP_REQ_Msk     (0x1UL << LPSYS_AON_WSR_HP2LP_REQ_Pos)
#define LPSYS_AON_WSR_HP2LP_REQ         LPSYS_AON_WSR_HP2LP_REQ_Msk
#define LPSYS_AON_WSR_HP2LP_IRQ_Pos     (12U)
#define LPSYS_AON_WSR_HP2LP_IRQ_Msk     (0x1UL << LPSYS_AON_WSR_HP2LP_IRQ_Pos)
#define LPSYS_AON_WSR_HP2LP_IRQ         LPSYS_AON_WSR_HP2LP_IRQ_Msk

/***************** Bit definition for LPSYS_AON_WCR register ******************/
#define LPSYS_AON_WCR_PIN0_Pos          (5U)
#define LPSYS_AON_WCR_PIN0_Msk          (0x1UL << LPSYS_AON_WCR_PIN0_Pos)
#define LPSYS_AON_WCR_PIN0              LPSYS_AON_WCR_PIN0_Msk
#define LPSYS_AON_WCR_PIN1_Pos          (6U)
#define LPSYS_AON_WCR_PIN1_Msk          (0x1UL << LPSYS_AON_WCR_PIN1_Pos)
#define LPSYS_AON_WCR_PIN1              LPSYS_AON_WCR_PIN1_Msk
#define LPSYS_AON_WCR_PIN2_Pos          (7U)
#define LPSYS_AON_WCR_PIN2_Msk          (0x1UL << LPSYS_AON_WCR_PIN2_Pos)
#define LPSYS_AON_WCR_PIN2              LPSYS_AON_WCR_PIN2_Msk
#define LPSYS_AON_WCR_PIN3_Pos          (8U)
#define LPSYS_AON_WCR_PIN3_Msk          (0x1UL << LPSYS_AON_WCR_PIN3_Pos)
#define LPSYS_AON_WCR_PIN3              LPSYS_AON_WCR_PIN3_Msk
#define LPSYS_AON_WCR_PIN4_Pos          (9U)
#define LPSYS_AON_WCR_PIN4_Msk          (0x1UL << LPSYS_AON_WCR_PIN4_Pos)
#define LPSYS_AON_WCR_PIN4              LPSYS_AON_WCR_PIN4_Msk
#define LPSYS_AON_WCR_PIN5_Pos          (10U)
#define LPSYS_AON_WCR_PIN5_Msk          (0x1UL << LPSYS_AON_WCR_PIN5_Pos)
#define LPSYS_AON_WCR_PIN5              LPSYS_AON_WCR_PIN5_Msk
#define LPSYS_AON_WCR_AON_Pos           (31U)
#define LPSYS_AON_WCR_AON_Msk           (0x1UL << LPSYS_AON_WCR_AON_Pos)
#define LPSYS_AON_WCR_AON               LPSYS_AON_WCR_AON_Msk

/***************** Bit definition for LPSYS_AON_ISSR register *****************/
#define LPSYS_AON_ISSR_LP2HP_REQ_Pos    (0U)
#define LPSYS_AON_ISSR_LP2HP_REQ_Msk    (0x1UL << LPSYS_AON_ISSR_LP2HP_REQ_Pos)
#define LPSYS_AON_ISSR_LP2HP_REQ        LPSYS_AON_ISSR_LP2HP_REQ_Msk
#define LPSYS_AON_ISSR_HP2LP_REQ_Pos    (1U)
#define LPSYS_AON_ISSR_HP2LP_REQ_Msk    (0x1UL << LPSYS_AON_ISSR_HP2LP_REQ_Pos)
#define LPSYS_AON_ISSR_HP2LP_REQ        LPSYS_AON_ISSR_HP2LP_REQ_Msk
#define LPSYS_AON_ISSR_LP_ACTIVE_Pos    (4U)
#define LPSYS_AON_ISSR_LP_ACTIVE_Msk    (0x1UL << LPSYS_AON_ISSR_LP_ACTIVE_Pos)
#define LPSYS_AON_ISSR_LP_ACTIVE        LPSYS_AON_ISSR_LP_ACTIVE_Msk
#define LPSYS_AON_ISSR_HP_ACTIVE_Pos    (5U)
#define LPSYS_AON_ISSR_HP_ACTIVE_Msk    (0x1UL << LPSYS_AON_ISSR_HP_ACTIVE_Pos)
#define LPSYS_AON_ISSR_HP_ACTIVE        LPSYS_AON_ISSR_HP_ACTIVE_Msk

/**************** Bit definition for LPSYS_AON_DBGMUX register ****************/
#define LPSYS_AON_DBGMUX_PB43_SEL_Pos   (0U)
#define LPSYS_AON_DBGMUX_PB43_SEL_Msk   (0x3UL << LPSYS_AON_DBGMUX_PB43_SEL_Pos)
#define LPSYS_AON_DBGMUX_PB43_SEL       LPSYS_AON_DBGMUX_PB43_SEL_Msk
#define LPSYS_AON_DBGMUX_PB44_SEL_Pos   (2U)
#define LPSYS_AON_DBGMUX_PB44_SEL_Msk   (0x3UL << LPSYS_AON_DBGMUX_PB44_SEL_Pos)
#define LPSYS_AON_DBGMUX_PB44_SEL       LPSYS_AON_DBGMUX_PB44_SEL_Msk
#define LPSYS_AON_DBGMUX_PB45_SEL_Pos   (4U)
#define LPSYS_AON_DBGMUX_PB45_SEL_Msk   (0x3UL << LPSYS_AON_DBGMUX_PB45_SEL_Pos)
#define LPSYS_AON_DBGMUX_PB45_SEL       LPSYS_AON_DBGMUX_PB45_SEL_Msk
#define LPSYS_AON_DBGMUX_PB46_SEL_Pos   (6U)
#define LPSYS_AON_DBGMUX_PB46_SEL_Msk   (0x3UL << LPSYS_AON_DBGMUX_PB46_SEL_Pos)
#define LPSYS_AON_DBGMUX_PB46_SEL       LPSYS_AON_DBGMUX_PB46_SEL_Msk
#define LPSYS_AON_DBGMUX_PB47_SEL_Pos   (8U)
#define LPSYS_AON_DBGMUX_PB47_SEL_Msk   (0x3UL << LPSYS_AON_DBGMUX_PB47_SEL_Pos)
#define LPSYS_AON_DBGMUX_PB47_SEL       LPSYS_AON_DBGMUX_PB47_SEL_Msk
#define LPSYS_AON_DBGMUX_PB48_SEL_Pos   (10U)
#define LPSYS_AON_DBGMUX_PB48_SEL_Msk   (0x3UL << LPSYS_AON_DBGMUX_PB48_SEL_Pos)
#define LPSYS_AON_DBGMUX_PB48_SEL       LPSYS_AON_DBGMUX_PB48_SEL_Msk

/**************** Bit definition for LPSYS_AON_TARGET register ****************/
#define LPSYS_AON_TARGET_SLEEP_TARGET_Pos  (0U)
#define LPSYS_AON_TARGET_SLEEP_TARGET_Msk  (0xFFFFFFFUL << LPSYS_AON_TARGET_SLEEP_TARGET_Pos)
#define LPSYS_AON_TARGET_SLEEP_TARGET   LPSYS_AON_TARGET_SLEEP_TARGET_Msk

/**************** Bit definition for LPSYS_AON_ACTUAL register ****************/
#define LPSYS_AON_ACTUAL_SLEEP_CNT_Pos  (0U)
#define LPSYS_AON_ACTUAL_SLEEP_CNT_Msk  (0xFFFFFFFUL << LPSYS_AON_ACTUAL_SLEEP_CNT_Pos)
#define LPSYS_AON_ACTUAL_SLEEP_CNT      LPSYS_AON_ACTUAL_SLEEP_CNT_Msk

/*************** Bit definition for LPSYS_AON_PRE_WKUP register ***************/
#define LPSYS_AON_PRE_WKUP_XTAL_TIME_Pos  (0U)
#define LPSYS_AON_PRE_WKUP_XTAL_TIME_Msk  (0x3FFUL << LPSYS_AON_PRE_WKUP_XTAL_TIME_Pos)
#define LPSYS_AON_PRE_WKUP_XTAL_TIME    LPSYS_AON_PRE_WKUP_XTAL_TIME_Msk
#define LPSYS_AON_PRE_WKUP_WKUP_TIME_Pos  (16U)
#define LPSYS_AON_PRE_WKUP_WKUP_TIME_Msk  (0x3FFUL << LPSYS_AON_PRE_WKUP_WKUP_TIME_Pos)
#define LPSYS_AON_PRE_WKUP_WKUP_TIME    LPSYS_AON_PRE_WKUP_WKUP_TIME_Msk

/*************** Bit definition for LPSYS_AON_SLP_CFG register ****************/
#define LPSYS_AON_SLP_CFG_XTAL_ALWAYS_ON_Pos  (2U)
#define LPSYS_AON_SLP_CFG_XTAL_ALWAYS_ON_Msk  (0x1UL << LPSYS_AON_SLP_CFG_XTAL_ALWAYS_ON_Pos)
#define LPSYS_AON_SLP_CFG_XTAL_ALWAYS_ON  LPSYS_AON_SLP_CFG_XTAL_ALWAYS_ON_Msk
#define LPSYS_AON_SLP_CFG_XTAL_FORCE_OFF_Pos  (3U)
#define LPSYS_AON_SLP_CFG_XTAL_FORCE_OFF_Msk  (0x1UL << LPSYS_AON_SLP_CFG_XTAL_FORCE_OFF_Pos)
#define LPSYS_AON_SLP_CFG_XTAL_FORCE_OFF  LPSYS_AON_SLP_CFG_XTAL_FORCE_OFF_Msk

/*************** Bit definition for LPSYS_AON_SLP_CTRL register ***************/
#define LPSYS_AON_SLP_CTRL_SLEEP_REQ_Pos  (0U)
#define LPSYS_AON_SLP_CTRL_SLEEP_REQ_Msk  (0x1UL << LPSYS_AON_SLP_CTRL_SLEEP_REQ_Pos)
#define LPSYS_AON_SLP_CTRL_SLEEP_REQ    LPSYS_AON_SLP_CTRL_SLEEP_REQ_Msk
#define LPSYS_AON_SLP_CTRL_WKUP_REQ_Pos  (1U)
#define LPSYS_AON_SLP_CTRL_WKUP_REQ_Msk  (0x1UL << LPSYS_AON_SLP_CTRL_WKUP_REQ_Pos)
#define LPSYS_AON_SLP_CTRL_WKUP_REQ     LPSYS_AON_SLP_CTRL_WKUP_REQ_Msk
#define LPSYS_AON_SLP_CTRL_SLEEP_STATUS_Pos  (4U)
#define LPSYS_AON_SLP_CTRL_SLEEP_STATUS_Msk  (0x1UL << LPSYS_AON_SLP_CTRL_SLEEP_STATUS_Pos)
#define LPSYS_AON_SLP_CTRL_SLEEP_STATUS  LPSYS_AON_SLP_CTRL_SLEEP_STATUS_Msk
#define LPSYS_AON_SLP_CTRL_XTAL_REQ_Pos  (5U)
#define LPSYS_AON_SLP_CTRL_XTAL_REQ_Msk  (0x1UL << LPSYS_AON_SLP_CTRL_XTAL_REQ_Pos)
#define LPSYS_AON_SLP_CTRL_XTAL_REQ     LPSYS_AON_SLP_CTRL_XTAL_REQ_Msk
#define LPSYS_AON_SLP_CTRL_BLE_WKUP_Pos  (6U)
#define LPSYS_AON_SLP_CTRL_BLE_WKUP_Msk  (0x1UL << LPSYS_AON_SLP_CTRL_BLE_WKUP_Pos)
#define LPSYS_AON_SLP_CTRL_BLE_WKUP     LPSYS_AON_SLP_CTRL_BLE_WKUP_Msk

/**************** Bit definition for LPSYS_AON_ANACR register *****************/
#define LPSYS_AON_ANACR_PB_ISO_Pos      (0U)
#define LPSYS_AON_ANACR_PB_ISO_Msk      (0x1UL << LPSYS_AON_ANACR_PB_ISO_Pos)
#define LPSYS_AON_ANACR_PB_ISO          LPSYS_AON_ANACR_PB_ISO_Msk
#define LPSYS_AON_ANACR_PB_AON_ISO_Pos  (1U)
#define LPSYS_AON_ANACR_PB_AON_ISO_Msk  (0x1UL << LPSYS_AON_ANACR_PB_AON_ISO_Pos)
#define LPSYS_AON_ANACR_PB_AON_ISO      LPSYS_AON_ANACR_PB_AON_ISO_Msk

/**************** Bit definition for LPSYS_AON_GTIMR register *****************/
#define LPSYS_AON_GTIMR_CNT_Pos         (0U)
#define LPSYS_AON_GTIMR_CNT_Msk         (0xFFFFFFFFUL << LPSYS_AON_GTIMR_CNT_Pos)
#define LPSYS_AON_GTIMR_CNT             LPSYS_AON_GTIMR_CNT_Msk

/*************** Bit definition for LPSYS_AON_RESERVE0 register ***************/
#define LPSYS_AON_RESERVE0_DATA_Pos     (0U)
#define LPSYS_AON_RESERVE0_DATA_Msk     (0xFFFFFFFFUL << LPSYS_AON_RESERVE0_DATA_Pos)
#define LPSYS_AON_RESERVE0_DATA         LPSYS_AON_RESERVE0_DATA_Msk

/*************** Bit definition for LPSYS_AON_RESERVE1 register ***************/
#define LPSYS_AON_RESERVE1_DATA_Pos     (0U)
#define LPSYS_AON_RESERVE1_DATA_Msk     (0xFFFFFFFFUL << LPSYS_AON_RESERVE1_DATA_Pos)
#define LPSYS_AON_RESERVE1_DATA         LPSYS_AON_RESERVE1_DATA_Msk

/***************** Bit definition for LPSYS_AON_SPR register ******************/
#define LPSYS_AON_SPR_SP_Pos            (0U)
#define LPSYS_AON_SPR_SP_Msk            (0xFFFFFFFFUL << LPSYS_AON_SPR_SP_Pos)
#define LPSYS_AON_SPR_SP                LPSYS_AON_SPR_SP_Msk

/***************** Bit definition for LPSYS_AON_PCR register ******************/
#define LPSYS_AON_PCR_PC_Pos            (0U)
#define LPSYS_AON_PCR_PC_Msk            (0xFFFFFFFFUL << LPSYS_AON_PCR_PC_Pos)
#define LPSYS_AON_PCR_PC                LPSYS_AON_PCR_PC_Msk

#endif