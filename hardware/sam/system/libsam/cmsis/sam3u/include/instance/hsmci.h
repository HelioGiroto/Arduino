/* $asf_license$ */

#ifndef _SAM3U_HSMCI_INSTANCE_
#define _SAM3U_HSMCI_INSTANCE_

/* ========== Register definition for HSMCI peripheral ========== */
#ifdef __ASSEMBLY__
#define REG_HSMCI_CR                 (0x40000000U) /**< \brief (HSMCI) Control Register */
#define REG_HSMCI_MR                 (0x40000004U) /**< \brief (HSMCI) Mode Register */
#define REG_HSMCI_DTOR               (0x40000008U) /**< \brief (HSMCI) Data Timeout Register */
#define REG_HSMCI_SDCR               (0x4000000CU) /**< \brief (HSMCI) SD/SDIO Card Register */
#define REG_HSMCI_ARGR               (0x40000010U) /**< \brief (HSMCI) Argument Register */
#define REG_HSMCI_CMDR               (0x40000014U) /**< \brief (HSMCI) Command Register */
#define REG_HSMCI_BLKR               (0x40000018U) /**< \brief (HSMCI) Block Register */
#define REG_HSMCI_CSTOR              (0x4000001CU) /**< \brief (HSMCI) Completion Signal Timeout Register */
#define REG_HSMCI_RSPR               (0x40000020U) /**< \brief (HSMCI) Response Register */
#define REG_HSMCI_RDR                (0x40000030U) /**< \brief (HSMCI) Receive Data Register */
#define REG_HSMCI_TDR                (0x40000034U) /**< \brief (HSMCI) Transmit Data Register */
#define REG_HSMCI_SR                 (0x40000040U) /**< \brief (HSMCI) Status Register */
#define REG_HSMCI_IER                (0x40000044U) /**< \brief (HSMCI) Interrupt Enable Register */
#define REG_HSMCI_IDR                (0x40000048U) /**< \brief (HSMCI) Interrupt Disable Register */
#define REG_HSMCI_IMR                (0x4000004CU) /**< \brief (HSMCI) Interrupt Mask Register */
#define REG_HSMCI_DMA                (0x40000050U) /**< \brief (HSMCI) DMA Configuration Register */
#define REG_HSMCI_CFG                (0x40000054U) /**< \brief (HSMCI) Configuration Register */
#define REG_HSMCI_WPMR               (0x400000E4U) /**< \brief (HSMCI) Write Protection Mode Register */
#define REG_HSMCI_WPSR               (0x400000E8U) /**< \brief (HSMCI) Write Protection Status Register */
#define REG_HSMCI_FIFO               (0x40000200U) /**< \brief (HSMCI) FIFO Memory Aperture0 */
#else
#define REG_HSMCI_CR        (*(WoReg*)0x40000000U) /**< \brief (HSMCI) Control Register */
#define REG_HSMCI_MR        (*(RwReg*)0x40000004U) /**< \brief (HSMCI) Mode Register */
#define REG_HSMCI_DTOR      (*(RwReg*)0x40000008U) /**< \brief (HSMCI) Data Timeout Register */
#define REG_HSMCI_SDCR      (*(RwReg*)0x4000000CU) /**< \brief (HSMCI) SD/SDIO Card Register */
#define REG_HSMCI_ARGR      (*(RwReg*)0x40000010U) /**< \brief (HSMCI) Argument Register */
#define REG_HSMCI_CMDR      (*(WoReg*)0x40000014U) /**< \brief (HSMCI) Command Register */
#define REG_HSMCI_BLKR      (*(RwReg*)0x40000018U) /**< \brief (HSMCI) Block Register */
#define REG_HSMCI_CSTOR     (*(RwReg*)0x4000001CU) /**< \brief (HSMCI) Completion Signal Timeout Register */
#define REG_HSMCI_RSPR      (*(RoReg*)0x40000020U) /**< \brief (HSMCI) Response Register */
#define REG_HSMCI_RDR       (*(RoReg*)0x40000030U) /**< \brief (HSMCI) Receive Data Register */
#define REG_HSMCI_TDR       (*(WoReg*)0x40000034U) /**< \brief (HSMCI) Transmit Data Register */
#define REG_HSMCI_SR        (*(RoReg*)0x40000040U) /**< \brief (HSMCI) Status Register */
#define REG_HSMCI_IER       (*(WoReg*)0x40000044U) /**< \brief (HSMCI) Interrupt Enable Register */
#define REG_HSMCI_IDR       (*(WoReg*)0x40000048U) /**< \brief (HSMCI) Interrupt Disable Register */
#define REG_HSMCI_IMR       (*(RoReg*)0x4000004CU) /**< \brief (HSMCI) Interrupt Mask Register */
#define REG_HSMCI_DMA       (*(RwReg*)0x40000050U) /**< \brief (HSMCI) DMA Configuration Register */
#define REG_HSMCI_CFG       (*(RwReg*)0x40000054U) /**< \brief (HSMCI) Configuration Register */
#define REG_HSMCI_WPMR      (*(RwReg*)0x400000E4U) /**< \brief (HSMCI) Write Protection Mode Register */
#define REG_HSMCI_WPSR      (*(RoReg*)0x400000E8U) /**< \brief (HSMCI) Write Protection Status Register */
#define REG_HSMCI_FIFO      (*(RwReg*)0x40000200U) /**< \brief (HSMCI) FIFO Memory Aperture0 */
#endif /* __ASSEMBLY__ */

#endif /* _SAM3U_HSMCI_INSTANCE_ */
