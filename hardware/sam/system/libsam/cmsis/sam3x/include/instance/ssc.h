/* $asf_license$ */

#ifndef _SAM3XA_SSC_INSTANCE_
#define _SAM3XA_SSC_INSTANCE_

/* ========== Register definition for SSC peripheral ========== */
#ifdef __ASSEMBLY__
#define REG_SSC_CR            (0x40004000U) /**< \brief (SSC) Control Register */
#define REG_SSC_CMR           (0x40004004U) /**< \brief (SSC) Clock Mode Register */
#define REG_SSC_RCMR          (0x40004010U) /**< \brief (SSC) Receive Clock Mode Register */
#define REG_SSC_RFMR          (0x40004014U) /**< \brief (SSC) Receive Frame Mode Register */
#define REG_SSC_TCMR          (0x40004018U) /**< \brief (SSC) Transmit Clock Mode Register */
#define REG_SSC_TFMR          (0x4000401CU) /**< \brief (SSC) Transmit Frame Mode Register */
#define REG_SSC_RHR           (0x40004020U) /**< \brief (SSC) Receive Holding Register */
#define REG_SSC_THR           (0x40004024U) /**< \brief (SSC) Transmit Holding Register */
#define REG_SSC_RSHR          (0x40004030U) /**< \brief (SSC) Receive Sync. Holding Register */
#define REG_SSC_TSHR          (0x40004034U) /**< \brief (SSC) Transmit Sync. Holding Register */
#define REG_SSC_RC0R          (0x40004038U) /**< \brief (SSC) Receive Compare 0 Register */
#define REG_SSC_RC1R          (0x4000403CU) /**< \brief (SSC) Receive Compare 1 Register */
#define REG_SSC_SR            (0x40004040U) /**< \brief (SSC) Status Register */
#define REG_SSC_IER           (0x40004044U) /**< \brief (SSC) Interrupt Enable Register */
#define REG_SSC_IDR           (0x40004048U) /**< \brief (SSC) Interrupt Disable Register */
#define REG_SSC_IMR           (0x4000404CU) /**< \brief (SSC) Interrupt Mask Register */
#define REG_SSC_WPMR          (0x400040E4U) /**< \brief (SSC) Write Protect Mode Register */
#define REG_SSC_WPSR          (0x400040E8U) /**< \brief (SSC) Write Protect Status Register */
#else
#define REG_SSC_CR   (*(WoReg*)0x40004000U) /**< \brief (SSC) Control Register */
#define REG_SSC_CMR  (*(RwReg*)0x40004004U) /**< \brief (SSC) Clock Mode Register */
#define REG_SSC_RCMR (*(RwReg*)0x40004010U) /**< \brief (SSC) Receive Clock Mode Register */
#define REG_SSC_RFMR (*(RwReg*)0x40004014U) /**< \brief (SSC) Receive Frame Mode Register */
#define REG_SSC_TCMR (*(RwReg*)0x40004018U) /**< \brief (SSC) Transmit Clock Mode Register */
#define REG_SSC_TFMR (*(RwReg*)0x4000401CU) /**< \brief (SSC) Transmit Frame Mode Register */
#define REG_SSC_RHR  (*(RoReg*)0x40004020U) /**< \brief (SSC) Receive Holding Register */
#define REG_SSC_THR  (*(WoReg*)0x40004024U) /**< \brief (SSC) Transmit Holding Register */
#define REG_SSC_RSHR (*(RoReg*)0x40004030U) /**< \brief (SSC) Receive Sync. Holding Register */
#define REG_SSC_TSHR (*(RwReg*)0x40004034U) /**< \brief (SSC) Transmit Sync. Holding Register */
#define REG_SSC_RC0R (*(RwReg*)0x40004038U) /**< \brief (SSC) Receive Compare 0 Register */
#define REG_SSC_RC1R (*(RwReg*)0x4000403CU) /**< \brief (SSC) Receive Compare 1 Register */
#define REG_SSC_SR   (*(RoReg*)0x40004040U) /**< \brief (SSC) Status Register */
#define REG_SSC_IER  (*(WoReg*)0x40004044U) /**< \brief (SSC) Interrupt Enable Register */
#define REG_SSC_IDR  (*(WoReg*)0x40004048U) /**< \brief (SSC) Interrupt Disable Register */
#define REG_SSC_IMR  (*(RoReg*)0x4000404CU) /**< \brief (SSC) Interrupt Mask Register */
#define REG_SSC_WPMR (*(RwReg*)0x400040E4U) /**< \brief (SSC) Write Protect Mode Register */
#define REG_SSC_WPSR (*(RoReg*)0x400040E8U) /**< \brief (SSC) Write Protect Status Register */
#endif /* __ASSEMBLY__ */

#endif /* _SAM3XA_SSC_INSTANCE_ */
