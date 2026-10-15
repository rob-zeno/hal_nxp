/*
 * Copyright 2023 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _S32K312_GLUE_MCUX_H_
#define _S32K312_GLUE_MCUX_H_

#include "S32K312_device.h"

/* LPUART - Peripheral instance base addresses */
/** Peripheral LPUART_0 base address */
#define LPUART0_BASE                         IP_LPUART_0_BASE
/** Peripheral LPUART_0 base pointer */
#define LPUART0                              IP_LPUART_0
/** Peripheral LPUART_1 base address */
#define LPUART1_BASE                         IP_LPUART_1_BASE
/** Peripheral LPUART_1 base pointer */
#define LPUART1                              IP_LPUART_1
/** Peripheral LPUART_2 base address */
#define LPUART2_BASE                         IP_LPUART_2_BASE
/** Peripheral LPUART_2 base pointer */
#define LPUART2                              IP_LPUART_2
/** Peripheral LPUART_3 base address */
#define LPUART3_BASE                         IP_LPUART_3_BASE
/** Peripheral LPUART_3 base pointer */
#define LPUART3                              IP_LPUART_3
/** Peripheral LPUART_4 base address */
#define LPUART4_BASE                         IP_LPUART_4_BASE
/** Peripheral LPUART_4 base pointer */
#define LPUART4                              IP_LPUART_4
/** Peripheral LPUART_5 base address */
#define LPUART5_BASE                         IP_LPUART_5_BASE
/** Peripheral LPUART_5 base pointer */
#define LPUART5                              IP_LPUART_5
/** Peripheral LPUART_6 base address */
#define LPUART6_BASE                         IP_LPUART_6_BASE
/** Peripheral LPUART_6 base pointer */
#define LPUART6                              IP_LPUART_6
/** Peripheral LPUART_7 base address */
#define LPUART7_BASE                         IP_LPUART_7_BASE
/** Peripheral LPUART_7 base pointer */
#define LPUART7                              IP_LPUART_7
/** Array initializer of LPUART peripheral base addresses */
#define LPUART_BASE_ADDRS                    IP_LPUART_BASE_ADDRS
/** Array initializer of LPUART peripheral base pointers */
#define LPUART_BASE_PTRS                     IP_LPUART_BASE_PTRS
/** Interrupt vectors for the LPUART peripheral type */
#define LPUART_RX_TX_IRQS                    { LPUART0_IRQn, LPUART1_IRQn, LPUART2_IRQn, LPUART3_IRQn, LPUART4_IRQn, LPUART5_IRQn, LPUART6_IRQn, LPUART7_IRQn }

/* CAN - Peripheral instance base addresses */
/** Peripheral CAN_0 base address */
#define CAN0_BASE                                IP_CAN_0_BASE
/** Peripheral CAN_0 base pointer */
#define CAN0                                     ((CAN_Type *)CAN0_BASE)
/** Peripheral CAN_1 base address */
#define CAN1_BASE                                IP_CAN_1_BASE
/** Peripheral CAN_1 base pointer */
#define CAN1                                     ((CAN_Type *)CAN1_BASE)
/** Peripheral CAN_2 base address */
#define CAN2_BASE                                IP_CAN_2_BASE
/** Peripheral CAN_2 base pointer */
#define CAN2                                     ((CAN_Type *)CAN2_BASE)
/** Peripheral CAN_3 base address */
#define CAN3_BASE                                IP_CAN_3_BASE
/** Peripheral CAN_3 base pointer */
#define CAN3                                     ((CAN_Type *)CAN3_BASE)
/** Peripheral CAN_4 base address */
#define CAN4_BASE                                IP_CAN_4_BASE
/** Peripheral CAN_4 base pointer */
#define CAN4                                     ((CAN_Type *)CAN4_BASE)
/** Peripheral CAN_5 base address */
#define CAN5_BASE                                IP_CAN_5_BASE
/** Peripheral CAN_5 base pointer */
#define CAN5                                     ((CAN_Type *)CAN5_BASE)
/** Array initializer of CAN peripheral base addresses */
#define CAN_BASE_ADDRS                           { CAN0_BASE, CAN1_BASE, CAN2_BASE, CAN3_BASE, CAN4_BASE, CAN5_BASE }
/** Array initializer of CAN peripheral base pointers */
#define CAN_BASE_PTRS                            { CAN0, CAN1, CAN2, CAN3, CAN4, CAN5 }
/** Interrupt vectors for the CAN peripheral type */
#define CAN_Rx_Warning_IRQS                      { FlexCAN0_0_IRQn, FlexCAN1_0_IRQn, FlexCAN2_0_IRQn, FlexCAN3_0_IRQn, FlexCAN4_0_IRQn, FlexCAN5_0_IRQn}
#define CAN_Tx_Warning_IRQS                      { FlexCAN0_0_IRQn, FlexCAN1_0_IRQn, FlexCAN2_0_IRQn, FlexCAN3_0_IRQn, FlexCAN4_0_IRQn, FlexCAN5_0_IRQn}
#define CAN_Wake_Up_IRQS                         { FlexCAN0_0_IRQn, FlexCAN1_0_IRQn, FlexCAN2_0_IRQn, FlexCAN3_0_IRQn, FlexCAN4_0_IRQn, FlexCAN5_0_IRQn}
#define CAN_Error_IRQS                           { FlexCAN0_0_IRQn, FlexCAN1_0_IRQn, FlexCAN2_0_IRQn, FlexCAN3_0_IRQn, FlexCAN4_0_IRQn, FlexCAN5_0_IRQn}
#define CAN_Bus_Off_IRQS                         { FlexCAN0_0_IRQn, FlexCAN1_0_IRQn, FlexCAN2_0_IRQn, FlexCAN3_0_IRQn, FlexCAN4_0_IRQn, FlexCAN5_0_IRQn}
#define CAN_ORed_Message_buffer_0_31_IRQS        { FlexCAN0_1_IRQn, FlexCAN1_1_IRQn, FlexCAN2_1_IRQn, FlexCAN3_1_IRQn, FlexCAN4_1_IRQn, FlexCAN5_1_IRQn}
#define CAN_ORed_Message_buffer_32_63_IRQS       { FlexCAN0_2_IRQn, FlexCAN1_2_IRQn, FlexCAN2_2_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn}
#define CAN_ORed_Message_buffer_64_95_IRQS       { FlexCAN0_1_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn}
#define CAN_ORed_Message_buffer_IRQS             CAN_ORed_Message_buffer_0_31_IRQS

/* LPI2C - Peripheral instance base addresses */
/** Peripheral LPI2C0 base address */
#define LPI2C0_BASE                              IP_LPI2C_0_BASE
/** Peripheral LPI2C0 base pointer */
#define LPI2C0                                   IP_LPI2C_0
/** Peripheral LPI2C1 base address */
#define LPI2C1_BASE                              IP_LPI2C_1_BASE
/** Peripheral LPI2C1 base pointer */
#define LPI2C1                                   IP_LPI2C_1
/** Array initializer of LPI2C peripheral base addresses */
#define LPI2C_BASE_ADDRS                         IP_LPI2C_BASE_ADDRS
/** Array initializer of LPI2C peripheral base pointers */
#define LPI2C_BASE_PTRS                          IP_LPI2C_BASE_PTRS
/** Interrupt vectors for the LPI2C peripheral type */
#define LPI2C_IRQS                               { LPI2C0_IRQn, LPI2C1_IRQn }

/* LPSPI - Peripheral instance base addresses */
/** Peripheral LPSPI0 base address */
#define LPSPI0_BASE                              IP_LPSPI_0_BASE
/** Peripheral LPSPI0 base pointer */
#define LPSPI0                                   IP_LPSPI_0
/** Peripheral LPSPI1 base address */
#define LPSPI1_BASE                              IP_LPSPI_1_BASE
/** Peripheral LPSPI1 base pointer */
#define LPSPI1                                   IP_LPSPI_1
/** Peripheral LPSPI2 base address */
#define LPSPI2_BASE                              IP_LPSPI_2_BASE
/** Peripheral LPSPI2 base pointer */
#define LPSPI2                                   IP_LPSPI_2
/** Peripheral LPSPI3 base address */
#define LPSPI3_BASE                              IP_LPSPI_3_BASE
/** Peripheral LPSPI3 base pointer */
#define LPSPI3                                   IP_LPSPI_3
/** Array initializer of LPSPI peripheral base addresses */
#define LPSPI_BASE_ADDRS                         IP_LPSPI_BASE_ADDRS
/** Array initializer of LPSPI peripheral base pointers */
#define LPSPI_BASE_PTRS                          IP_LPSPI_BASE_PTRS
/** Interrupt vectors for the LPSPI peripheral type */
#define LPSPI_IRQS                               { LPSPI0_IRQn, LPSPI1_IRQn, LPSPI2_IRQn, LPSPI3_IRQn }

/* DMA - Peripheral instance base addresses */
#define DMA_BASE                           IP_EDMA_BASE
#define DMA                                ((DMA_Type*)DMA_BASE)
#define DMA_BASE_PTRS                      {DMA}

/** Interrupt vectors for the DMA peripheral type, there is no interrupt id for offset channels */
#define DMA_IRQS                        { {DMATCD0_IRQn, DMATCD1_IRQn, DMATCD2_IRQn, DMATCD3_IRQn,  DMATCD4_IRQn, DMATCD5_IRQn,       \
                                            DMATCD6_IRQn, DMATCD7_IRQn, DMATCD8_IRQn, DMATCD9_IRQn, DMATCD10_IRQn, DMATCD11_IRQn} }

/* DMAMUX - Peripheral instance base addresses */
/** Peripheral DMAMUX0 base address */
#define DMAMUX0_BASE                            IP_DMAMUX_0_BASE
/** Peripheral DMAMUX0 base pointer */
#define DMAMUX0                                 IP_DMAMUX_0
/** Peripheral DMAMUX1 base address */
#define DMAMUX1_BASE                            IP_DMAMUX_1_BASE
/** Peripheral DMAMUX1 base pointer */
#define DMAMUX1                                 IP_DMAMUX_1
/** Array initializer of DMAMUX peripheral base addresses */
#define DMAMUX_BASE_ADDRS                       IP_DMAMUX_BASE_ADDRS
/** Array initializer of DMAMUX peripheral base pointers */
#define DMAMUX_BASE_PTRS                        IP_DMAMUX_BASE_PTRS

/* FLEXIO - Peripheral instance base addresses */
/** Peripheral FLEXIO base address */
#define FLEXIO_BASE                             IP_FLEXIO_BASE
/** Peripheral FLEXIO base pointer */
#define FLEXIO                                  IP_FLEXIO
/** Array initializer of FLEXIO peripheral base addresses */
#define FLEXIO_BASE_ADDRS                       IP_FLEXIO_BASE_ADDRS
/** Array initializer of FLEXIO peripheral base pointers */
#define FLEXIO_BASE_PTRS                        IP_FLEXIO_BASE_PTRS
/** Interrupt vectors for the FLEXIO peripheral type */
#define FLEXIO_IRQS                              { FLEXIO_IRQn }

/* FLASH - Peripheral instance base addresses */
/** Peripheral FLASH base address */
#define FLASH_BASE                               IP_FLASH_BASE
/** Peripheral FLASH base pointer */
#define FLASH                                    IP_FLASH
/** Array initializer of FLASH peripheral base addresses */
#define FLASH_BASE_ADDRS                         IP_FLASH_BASE_ADDRS
/** Array initializer of FLASH peripheral base pointers */
#define FLASH_BASE_PTRS                          IP_FLASH_BASE_PTRS

/* PFLASH - Peripheral instance base addresses */
/** Peripheral PFLASH base address */
#define PFLASH_BASE                              IP_PFLASH_BASE
/** Peripheral PFLASH base pointer */
#define PFLASH                                   IP_PFLASH
/** Array initializer of PFLASH peripheral base addresses */
#define PFLASH_BASE_ADDRS                        IP_PFLASH_BASE_ADDRS
/** Array initializer of PFLASH peripheral base pointers */
#define PFLASH_BASE_PTRS                         IP_PFLASH_BASE_PTRS

/*
 *     WARNING: the following peripherals were not included in the generated header
 *
 *
 * 		IP_CMU_1_BASE
 * 		IP_CMU_2_BASE
 * 		IP_ERM_BASE
 * 		IP_WKPU_BASE
 * 		IP_CMU_0_BASE
 * 		IP_CMU_3_BASE
 * 		IP_CMU_4_BASE
 * 		IP_CMU_5_BASE
 * 		IP_PIT_0_BASE
 * 		IP_PIT_1_BASE
 * 		IP_PLL_BASE
 * 		IP_TCD_BASE
 * 		IP_FCCU_BASE
 * 		IP_TSPC_BASE
 * 		IP_CRC_BASE
 * 		IP_XBIC_AXBS_BASE
 * 		IP_STCU_BASE
 * 		IP_MSCM_BASE
 * 		IP_LCU_0_BASE
 * 		IP_LCU_1_BASE
 * 		IP_FXOSC_BASE
 * 		IP_MC_RGM_BASE
 * 		IP_MC_ME_BASE
 * 		IP_INTM_BASE
 * 		IP_ADC_0_BASE
 * 		IP_ADC_1_BASE
 * 		IP_MC_CGM_BASE
 * 		IP_SIRC_BASE
 * 		IP_TEMPSENSE_BASE
 * 		IP_FIRC_BASE
 * 		IP_PRAMC_0_BASE
 * 		IP_MDM_AP_BASE
 * 		IP_SIUL2_BASE
 * 		IP_EMIOS_0_BASE
 * 		IP_EMIOS_1_BASE
 * 		IP_DCM_GPR_BASE
 * 		IP_MCM_0_CM7_BASE
 * 		IP_VIRT_WRAPPER_BASE
 * 		IP_XRDC_BASE
 * 		IP_DCM_BASE
 * 		IP_SXOSC_BASE
 * 		IP_JDC_BASE
 * 		IP_CONFIGURATION_GPR_BASE
 * 		IP_BCTU_BASE
 * 		IP_STM_0_BASE
 * 		IP_TRGMUX_BASE
 * 		IP_MU_0__MUB_BASE
 * 		IP_MU_1__MUB_BASE
 * 		IP_SDA_AP_BASE
 * 		IP_LPCMP_0_BASE
 * 		IP_LPCMP_1_BASE
 * 		IP_SWT_0_BASE
 * 		IP_RTC_BASE
 * 		IP_EIM_BASE
 * 		IP_PMC_BASE
 *
 */
#endif /* _S32K312_GLUE_MCUX_H_ */
