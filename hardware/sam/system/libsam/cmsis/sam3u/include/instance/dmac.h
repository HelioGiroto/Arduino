/* $asf_license$ */

#ifndef _SAM3U_DMAC_INSTANCE_
#define _SAM3U_DMAC_INSTANCE_

/* ========== Register definition for DMAC peripheral ========== */
#ifdef __ASSEMBLY__
#define REG_DMAC_GCFG            (0x400B0000U) /**< \brief (DMAC) DMAC Global Configuration Register */
#define REG_DMAC_EN              (0x400B0004U) /**< \brief (DMAC) DMAC Enable Register */
#define REG_DMAC_SREQ            (0x400B0008U) /**< \brief (DMAC) DMAC Software Single Request Register */
#define REG_DMAC_CREQ            (0x400B000CU) /**< \brief (DMAC) DMAC Software Chunk Transfer Request Register */
#define REG_DMAC_LAST            (0x400B0010U) /**< \brief (DMAC) DMAC Software Last Transfer Flag Register */
#define REG_DMAC_SYNC            (0x400B0014U) /**< \brief (DMAC) DMAC Request Synchronization Register */
#define REG_DMAC_EBCIER          (0x400B0018U) /**< \brief (DMAC) DMAC Error, Chained Buffer transfer completed and Buffer transfer completed Interrupt Enable register. */
#define REG_DMAC_EBCIDR          (0x400B001CU) /**< \brief (DMAC) DMAC Error, Chained Buffer transfer completed and Buffer transfer completed Interrupt Disable register. */
#define REG_DMAC_EBCIMR          (0x400B0020U) /**< \brief (DMAC) DMAC Error, Chained Buffer transfer completed and Buffer transfer completed Mask Register. */
#define REG_DMAC_EBCISR          (0x400B0024U) /**< \brief (DMAC) DMAC Error, Chained Buffer transfer completed and Buffer transfer completed Status Register. */
#define REG_DMAC_CHER            (0x400B0028U) /**< \brief (DMAC) DMAC Channel Handler Enable Register */
#define REG_DMAC_CHDR            (0x400B002CU) /**< \brief (DMAC) DMAC Channel Handler Disable Register */
#define REG_DMAC_CHSR            (0x400B0030U) /**< \brief (DMAC) DMAC Channel Handler Status Register */
#define REG_DMAC_SADDR0          (0x400B003CU) /**< \brief (DMAC) DMAC Channel Source Address Register (ch_num = 0) */
#define REG_DMAC_DADDR0          (0x400B0040U) /**< \brief (DMAC) DMAC Channel Destination Address Register (ch_num = 0) */
#define REG_DMAC_DSCR0           (0x400B0044U) /**< \brief (DMAC) DMAC Channel Descriptor Address Register (ch_num = 0) */
#define REG_DMAC_CTRLA0          (0x400B0048U) /**< \brief (DMAC) DMAC Channel Control A Register (ch_num = 0) */
#define REG_DMAC_CTRLB0          (0x400B004CU) /**< \brief (DMAC) DMAC Channel Control B Register (ch_num = 0) */
#define REG_DMAC_CFG0            (0x400B0050U) /**< \brief (DMAC) DMAC Channel Configuration Register (ch_num = 0) */
#define REG_DMAC_SPIP0           (0x400B0054U) /**< \brief (DMAC) DMAC Channel Source Picture in Picture Configuration Register (ch_num = 0) */
#define REG_DMAC_DPIP0           (0x400B0058U) /**< \brief (DMAC) DMAC Channel Destination Picture in Picture Configuration Register (ch_num = 0) */
#define REG_DMAC_SADDR1          (0x400B0064U) /**< \brief (DMAC) DMAC Channel Source Address Register (ch_num = 1) */
#define REG_DMAC_DADDR1          (0x400B0068U) /**< \brief (DMAC) DMAC Channel Destination Address Register (ch_num = 1) */
#define REG_DMAC_DSCR1           (0x400B006CU) /**< \brief (DMAC) DMAC Channel Descriptor Address Register (ch_num = 1) */
#define REG_DMAC_CTRLA1          (0x400B0070U) /**< \brief (DMAC) DMAC Channel Control A Register (ch_num = 1) */
#define REG_DMAC_CTRLB1          (0x400B0074U) /**< \brief (DMAC) DMAC Channel Control B Register (ch_num = 1) */
#define REG_DMAC_CFG1            (0x400B0078U) /**< \brief (DMAC) DMAC Channel Configuration Register (ch_num = 1) */
#define REG_DMAC_SPIP1           (0x400B007CU) /**< \brief (DMAC) DMAC Channel Source Picture in Picture Configuration Register (ch_num = 1) */
#define REG_DMAC_DPIP1           (0x400B0080U) /**< \brief (DMAC) DMAC Channel Destination Picture in Picture Configuration Register (ch_num = 1) */
#define REG_DMAC_SADDR2          (0x400B008CU) /**< \brief (DMAC) DMAC Channel Source Address Register (ch_num = 2) */
#define REG_DMAC_DADDR2          (0x400B0090U) /**< \brief (DMAC) DMAC Channel Destination Address Register (ch_num = 2) */
#define REG_DMAC_DSCR2           (0x400B0094U) /**< \brief (DMAC) DMAC Channel Descriptor Address Register (ch_num = 2) */
#define REG_DMAC_CTRLA2          (0x400B0098U) /**< \brief (DMAC) DMAC Channel Control A Register (ch_num = 2) */
#define REG_DMAC_CTRLB2          (0x400B009CU) /**< \brief (DMAC) DMAC Channel Control B Register (ch_num = 2) */
#define REG_DMAC_CFG2            (0x400B00A0U) /**< \brief (DMAC) DMAC Channel Configuration Register (ch_num = 2) */
#define REG_DMAC_SPIP2           (0x400B00A4U) /**< \brief (DMAC) DMAC Channel Source Picture in Picture Configuration Register (ch_num = 2) */
#define REG_DMAC_DPIP2           (0x400B00A8U) /**< \brief (DMAC) DMAC Channel Destination Picture in Picture Configuration Register (ch_num = 2) */
#define REG_DMAC_SADDR3          (0x400B00B4U) /**< \brief (DMAC) DMAC Channel Source Address Register (ch_num = 3) */
#define REG_DMAC_DADDR3          (0x400B00B8U) /**< \brief (DMAC) DMAC Channel Destination Address Register (ch_num = 3) */
#define REG_DMAC_DSCR3           (0x400B00BCU) /**< \brief (DMAC) DMAC Channel Descriptor Address Register (ch_num = 3) */
#define REG_DMAC_CTRLA3          (0x400B00C0U) /**< \brief (DMAC) DMAC Channel Control A Register (ch_num = 3) */
#define REG_DMAC_CTRLB3          (0x400B00C4U) /**< \brief (DMAC) DMAC Channel Control B Register (ch_num = 3) */
#define REG_DMAC_CFG3            (0x400B00C8U) /**< \brief (DMAC) DMAC Channel Configuration Register (ch_num = 3) */
#define REG_DMAC_SPIP3           (0x400B00CCU) /**< \brief (DMAC) DMAC Channel Source Picture in Picture Configuration Register (ch_num = 3) */
#define REG_DMAC_DPIP3           (0x400B00D0U) /**< \brief (DMAC) DMAC Channel Destination Picture in Picture Configuration Register (ch_num = 3) */
#else
#define REG_DMAC_GCFG   (*(RwReg*)0x400B0000U) /**< \brief (DMAC) DMAC Global Configuration Register */
#define REG_DMAC_EN     (*(RwReg*)0x400B0004U) /**< \brief (DMAC) DMAC Enable Register */
#define REG_DMAC_SREQ   (*(RwReg*)0x400B0008U) /**< \brief (DMAC) DMAC Software Single Request Register */
#define REG_DMAC_CREQ   (*(RwReg*)0x400B000CU) /**< \brief (DMAC) DMAC Software Chunk Transfer Request Register */
#define REG_DMAC_LAST   (*(RwReg*)0x400B0010U) /**< \brief (DMAC) DMAC Software Last Transfer Flag Register */
#define REG_DMAC_SYNC   (*(RwReg*)0x400B0014U) /**< \brief (DMAC) DMAC Request Synchronization Register */
#define REG_DMAC_EBCIER (*(WoReg*)0x400B0018U) /**< \brief (DMAC) DMAC Error, Chained Buffer transfer completed and Buffer transfer completed Interrupt Enable register. */
#define REG_DMAC_EBCIDR (*(WoReg*)0x400B001CU) /**< \brief (DMAC) DMAC Error, Chained Buffer transfer completed and Buffer transfer completed Interrupt Disable register. */
#define REG_DMAC_EBCIMR (*(RoReg*)0x400B0020U) /**< \brief (DMAC) DMAC Error, Chained Buffer transfer completed and Buffer transfer completed Mask Register. */
#define REG_DMAC_EBCISR (*(RoReg*)0x400B0024U) /**< \brief (DMAC) DMAC Error, Chained Buffer transfer completed and Buffer transfer completed Status Register. */
#define REG_DMAC_CHER   (*(WoReg*)0x400B0028U) /**< \brief (DMAC) DMAC Channel Handler Enable Register */
#define REG_DMAC_CHDR   (*(WoReg*)0x400B002CU) /**< \brief (DMAC) DMAC Channel Handler Disable Register */
#define REG_DMAC_CHSR   (*(RoReg*)0x400B0030U) /**< \brief (DMAC) DMAC Channel Handler Status Register */
#define REG_DMAC_SADDR0 (*(RwReg*)0x400B003CU) /**< \brief (DMAC) DMAC Channel Source Address Register (ch_num = 0) */
#define REG_DMAC_DADDR0 (*(RwReg*)0x400B0040U) /**< \brief (DMAC) DMAC Channel Destination Address Register (ch_num = 0) */
#define REG_DMAC_DSCR0  (*(RwReg*)0x400B0044U) /**< \brief (DMAC) DMAC Channel Descriptor Address Register (ch_num = 0) */
#define REG_DMAC_CTRLA0 (*(RwReg*)0x400B0048U) /**< \brief (DMAC) DMAC Channel Control A Register (ch_num = 0) */
#define REG_DMAC_CTRLB0 (*(RwReg*)0x400B004CU) /**< \brief (DMAC) DMAC Channel Control B Register (ch_num = 0) */
#define REG_DMAC_CFG0   (*(RwReg*)0x400B0050U) /**< \brief (DMAC) DMAC Channel Configuration Register (ch_num = 0) */
#define REG_DMAC_SPIP0  (*(RwReg*)0x400B0054U) /**< \brief (DMAC) DMAC Channel Source Picture in Picture Configuration Register (ch_num = 0) */
#define REG_DMAC_DPIP0  (*(RwReg*)0x400B0058U) /**< \brief (DMAC) DMAC Channel Destination Picture in Picture Configuration Register (ch_num = 0) */
#define REG_DMAC_SADDR1 (*(RwReg*)0x400B0064U) /**< \brief (DMAC) DMAC Channel Source Address Register (ch_num = 1) */
#define REG_DMAC_DADDR1 (*(RwReg*)0x400B0068U) /**< \brief (DMAC) DMAC Channel Destination Address Register (ch_num = 1) */
#define REG_DMAC_DSCR1  (*(RwReg*)0x400B006CU) /**< \brief (DMAC) DMAC Channel Descriptor Address Register (ch_num = 1) */
#define REG_DMAC_CTRLA1 (*(RwReg*)0x400B0070U) /**< \brief (DMAC) DMAC Channel Control A Register (ch_num = 1) */
#define REG_DMAC_CTRLB1 (*(RwReg*)0x400B0074U) /**< \brief (DMAC) DMAC Channel Control B Register (ch_num = 1) */
#define REG_DMAC_CFG1   (*(RwReg*)0x400B0078U) /**< \brief (DMAC) DMAC Channel Configuration Register (ch_num = 1) */
#define REG_DMAC_SPIP1  (*(RwReg*)0x400B007CU) /**< \brief (DMAC) DMAC Channel Source Picture in Picture Configuration Register (ch_num = 1) */
#define REG_DMAC_DPIP1  (*(RwReg*)0x400B0080U) /**< \brief (DMAC) DMAC Channel Destination Picture in Picture Configuration Register (ch_num = 1) */
#define REG_DMAC_SADDR2 (*(RwReg*)0x400B008CU) /**< \brief (DMAC) DMAC Channel Source Address Register (ch_num = 2) */
#define REG_DMAC_DADDR2 (*(RwReg*)0x400B0090U) /**< \brief (DMAC) DMAC Channel Destination Address Register (ch_num = 2) */
#define REG_DMAC_DSCR2  (*(RwReg*)0x400B0094U) /**< \brief (DMAC) DMAC Channel Descriptor Address Register (ch_num = 2) */
#define REG_DMAC_CTRLA2 (*(RwReg*)0x400B0098U) /**< \brief (DMAC) DMAC Channel Control A Register (ch_num = 2) */
#define REG_DMAC_CTRLB2 (*(RwReg*)0x400B009CU) /**< \brief (DMAC) DMAC Channel Control B Register (ch_num = 2) */
#define REG_DMAC_CFG2   (*(RwReg*)0x400B00A0U) /**< \brief (DMAC) DMAC Channel Configuration Register (ch_num = 2) */
#define REG_DMAC_SPIP2  (*(RwReg*)0x400B00A4U) /**< \brief (DMAC) DMAC Channel Source Picture in Picture Configuration Register (ch_num = 2) */
#define REG_DMAC_DPIP2  (*(RwReg*)0x400B00A8U) /**< \brief (DMAC) DMAC Channel Destination Picture in Picture Configuration Register (ch_num = 2) */
#define REG_DMAC_SADDR3 (*(RwReg*)0x400B00B4U) /**< \brief (DMAC) DMAC Channel Source Address Register (ch_num = 3) */
#define REG_DMAC_DADDR3 (*(RwReg*)0x400B00B8U) /**< \brief (DMAC) DMAC Channel Destination Address Register (ch_num = 3) */
#define REG_DMAC_DSCR3  (*(RwReg*)0x400B00BCU) /**< \brief (DMAC) DMAC Channel Descriptor Address Register (ch_num = 3) */
#define REG_DMAC_CTRLA3 (*(RwReg*)0x400B00C0U) /**< \brief (DMAC) DMAC Channel Control A Register (ch_num = 3) */
#define REG_DMAC_CTRLB3 (*(RwReg*)0x400B00C4U) /**< \brief (DMAC) DMAC Channel Control B Register (ch_num = 3) */
#define REG_DMAC_CFG3   (*(RwReg*)0x400B00C8U) /**< \brief (DMAC) DMAC Channel Configuration Register (ch_num = 3) */
#define REG_DMAC_SPIP3  (*(RwReg*)0x400B00CCU) /**< \brief (DMAC) DMAC Channel Source Picture in Picture Configuration Register (ch_num = 3) */
#define REG_DMAC_DPIP3  (*(RwReg*)0x400B00D0U) /**< \brief (DMAC) DMAC Channel Destination Picture in Picture Configuration Register (ch_num = 3) */
#endif /* __ASSEMBLY__ */

#endif /* _SAM3U_DMAC_INSTANCE_ */
