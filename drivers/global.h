/**
 * File: global.h
 * Author: Alston Liu
 * 
 * Date: 01-18-25
 * Description: Header file for Peripheral Addresses for BCM2711 Processor
 */
#ifndef GLOBAL_H
#define GLOBAL_H

// Libraries Required
#include <stdint.h>

/*64-bit Addresses for Peripheral Devices on the BCM2711*/
#define BCM2711_PERI_BASE_ADDR 0xFE000000 // Base of all the peripheral addresses

/* OFFSETS FOR DIFFERENT PERIPHERALS*/
/* --------------- AUXILIARY PERIPHERALS --------------- 
   DESCRIPTION:

*/
#define AUX_BASE_ADDR           (BCM2711_PERI_BASE_ADDR + 0x215000) // 0xFE215000
#define AUX_IRQ                 (AUX_BASE_ADDR + 0x00)
#define AUX_ENABLES             (AUX_BASE_ADDR + 0x04)
// Mini UART
#define AUX_MU_IO_REG           (AUX_BASE_ADDR + 0x40)
#define AUX_MU_IER_REG          (AUX_BASE_ADDR + 0x44)
#define AUX_MU_IIR_REG          (AUX_BASE_ADDR + 0x48)
#define AUX_MU_LCR_REG          (AUX_BASE_ADDR + 0x4C)
#define AUX_MU_MCR_REG          (AUX_BASE_ADDR + 0x50)
#define AUX_MU_LSR_REG          (AUX_BASE_ADDR + 0x54)
#define AUX_MU_MSR_REG          (AUX_BASE_ADDR + 0x58)
#define AUX_MU_SCRATCH          (AUX_BASE_ADDR + 0x5C)
#define AUX_MU_CNTL_REG         (AUX_BASE_ADDR + 0x60)
#define AUX_MU_STAT_REG         (AUX_BASE_ADDR + 0x64)
// SPI 1
#define AUX_SP1_CNTL0_REG       (AUX_BASE_ADDR + 0x80)
#define AUX_SP1_CNTL1_REG       (AUX_BASE_ADDR + 0x84)
#define AUX_SP1_STAT_REG        (AUX_BASE_ADDR + 0x88)
#define AUX_SP1_PEAK_REG        (AUX_BASE_ADDR + 0x8C)
#define AUX_SP1_IO_REGa         (AUX_BASE_ADDR + 0xA0)
#define AUX_SP1_IO_REGb         (AUX_BASE_ADDR + 0xA4)
#define AUX_SP1_IO_REGc         (AUX_BASE_ADDR + 0xA8)
#define AUX_SP1_IO_REGd         (AUX_BASE_ADDR + 0xAC)
#define AUX_SP1_TXHOLD_REGa     (AUX_BASE_ADDR + 0xB0)
#define AUX_SP1_TXHOLD_REGb     (AUX_BASE_ADDR + 0xB4)
#define AUX_SP1_TXHOLD_REGc     (AUX_BASE_ADDR + 0xB8)
#define AUX_SP1_TXHOLD_REGd     (AUX_BASE_ADDR + 0xBC)
// SPI 2
#define AUX_SP2_CNTL0_REG       (AUX_BASE_ADDR + 0xC0)
#define AUX_SP2_CNTL1_REG       (AUX_BASE_ADDR + 0xC4)
#define AUX_SP2_STAT_REG        (AUX_BASE_ADDR + 0xC8)
#define AUX_SP2_PEAK_REG        (AUX_BASE_ADDR + 0xCC)
#define AUX_SP2_IO_REGa         (AUX_BASE_ADDR + 0xE0)
#define AUX_SP2_IO_REGb         (AUX_BASE_ADDR + 0xE4)
#define AUX_SP2_IO_REGc         (AUX_BASE_ADDR + 0xE8)
#define AUX_SP2_IO_REGd         (AUX_BASE_ADDR + 0xEC)
#define AUX_SP2_TXHOLD_REGa     (AUX_BASE_ADDR + 0xF0)
#define AUX_SP2_TXHOLD_REGb     (AUX_BASE_ADDR + 0xF4)
#define AUX_SP2_TXHOLD_REGc     (AUX_BASE_ADDR + 0xF8)
#define AUX_SP2_TXHOLD_REGd     (AUX_BASE_ADDR + 0xFC)

/*---------------- BSC (Broadcom Serial Control) ---------------- */
/* DESCRIPTION:
   The Broadcom Serial Control (BSC) controller is a master fast mode BSC Controller
   - I2C Single Master only operation 
   - Both 7-bit and 10-bit addressing is supported
   - Timing completely software controllable via registers
   - The BSC controller in the BCM2711 fixes the clock-stretching bug that was present in BCM283x devices
*/

#define BSC0_BASE_ADDR (BCM2711_PERI_BASE_ADDR + 0x205000)
#define BSC1_BASE_ADDR (BCM2711_PERI_BASE_ADDR + 0x804000)
#define BSC3_BASE_ADDR (BCM2711_PERI_BASE_ADDR + 0x205600)
#define BSC4_BASE_ADDR (BCM2711_PERI_BASE_ADDR + 0x205800)
#define BSC5_BASE_ADDR (BCM2711_PERI_BASE_ADDR + 0x205A80)
#define BSC6_BASE_ADDR (BCM2711_PERI_BASE_ADDR + 0x205C00)

// OFFSETS FOR I2C Registers
#define BSC_CTRL_OFFSET       0x00
#define BSC_STATUS_OFFSET     0x04
#define BSC_DLEN_OFFSET       0x08 
#define BSC_SLAVE_OFFSET      0x0C
#define BSC_DFIFO_OFFSET      0x10
#define BSC_CLK_DIV_OFFSET    0x14
#define BSC_DEL_OFFSET        0x18
#define BSC_CLKT_OFFSET       0x1C

#define GET_BSC_REG_OFFSET(REG) (BSC_ ## REG ## _OFFSET)
#define GET_BSC_BASE_ADDR(VAL) (BSC ## VAL ## _BASE_ADDR)
   
#define BSC0_CTRL_ADDR     (GET_BSC_BASE_ADDR(0) + GET_BSC_REG_OFFSET(CTRL))
#define BSC0_STATUS_ADDR   (GET_BSC_BASE_ADDR(0) + GET_BSC_REG_OFFSET(STATUS))
#define BSC0_DLEN_ADDR     (GET_BSC_BASE_ADDR(0) + GET_BSC_REG_OFFSET(DLEN))
#define BSC0_SLAVE_ADDR    (GET_BSC_BASE_ADDR(0) + GET_BSC_REG_OFFSET(SLAVE))
#define BSC0_DFIFO_ADDR    (GET_BSC_BASE_ADDR(0) + GET_BSC_REG_OFFSET(DFIFO))
#define BSC0_CLK_DIV_ADDR  (GET_BSC_BASE_ADDR(0) + GET_BSC_REG_OFFSET(CLK_DIV))
#define BSC0_DEL_OFFSET    (GET_BSC_BASE_ADDR(0) + GET_BSC_REG_OFFSET(DEL))
#define BSC0_CLKT_OFFSET   (GET_BSC_BASE_ADDR(0) + GET_BSC_REG_OFFSET(CLKT))

#define BSC1_CTRL_ADDR     (GET_BSC_BASE_ADDR(1) + GET_BSC_REG_OFFSET(CTRL))
#define BSC1_STATUS_ADDR   (GET_BSC_BASE_ADDR(1) + GET_BSC_REG_OFFSET(STATUS))
#define BSC1_DLEN_ADDR     (GET_BSC_BASE_ADDR(1) + GET_BSC_REG_OFFSET(DLEN))
#define BSC1_SLAVE_ADDR    (GET_BSC_BASE_ADDR(1) + GET_BSC_REG_OFFSET(SLAVE))
#define BSC1_DFIFO_ADDR    (GET_BSC_BASE_ADDR(1) + GET_BSC_REG_OFFSET(DFIFO))
#define BSC1_CLK_DIV_ADDR  (GET_BSC_BASE_ADDR(1) + GET_BSC_REG_OFFSET(CLK_DIV))
#define BSC1_DEL_OFFSET    (GET_BSC_BASE_ADDR(1) + GET_BSC_REG_OFFSET(DEL))
#define BSC1_CLKT_OFFSET   (GET_BSC_BASE_ADDR(1) + GET_BSC_REG_OFFSET(CLKT))

#define BSC3_CTRL_ADDR     (GET_BSC_BASE_ADDR(3) + GET_BSC_REG_OFFSET(CTRL))
#define BSC3_STATUS_ADDR   (GET_BSC_BASE_ADDR(3) + GET_BSC_REG_OFFSET(STATUS))
#define BSC3_DLEN_ADDR     (GET_BSC_BASE_ADDR(3) + GET_BSC_REG_OFFSET(DLEN))
#define BSC3_SLAVE_ADDR    (GET_BSC_BASE_ADDR(3) + GET_BSC_REG_OFFSET(SLAVE))
#define BSC3_DFIFO_ADDR    (GET_BSC_BASE_ADDR(3) + GET_BSC_REG_OFFSET(DFIFO))
#define BSC3_CLK_DIV_ADDR  (GET_BSC_BASE_ADDR(3) + GET_BSC_REG_OFFSET(CLK_DIV))
#define BSC3_DEL_OFFSET    (GET_BSC_BASE_ADDR(3) + GET_BSC_REG_OFFSET(DEL))
#define BSC3_CLKT_OFFSET   (GET_BSC_BASE_ADDR(3) + GET_BSC_REG_OFFSET(CLKT))

#define BSC4_CTRL_ADDR     (GET_BSC_BASE_ADDR(4) + GET_BSC_REG_OFFSET(CTRL))
#define BSC4_STATUS_ADDR   (GET_BSC_BASE_ADDR(4) + GET_BSC_REG_OFFSET(STATUS))
#define BSC4_DLEN_ADDR     (GET_BSC_BASE_ADDR(4) + GET_BSC_REG_OFFSET(DLEN))
#define BSC4_SLAVE_ADDR    (GET_BSC_BASE_ADDR(4) + GET_BSC_REG_OFFSET(SLAVE))
#define BSC4_DFIFO_ADDR    (GET_BSC_BASE_ADDR(4) + GET_BSC_REG_OFFSET(DFIFO))
#define BSC4_CLK_DIV_ADDR  (GET_BSC_BASE_ADDR(4) + GET_BSC_REG_OFFSET(CLK_DIV))
#define BSC4_DEL_OFFSET    (GET_BSC_BASE_ADDR(4) + GET_BSC_REG_OFFSET(DEL))
#define BSC4_CLKT_OFFSET   (GET_BSC_BASE_ADDR(4) + GET_BSC_REG_OFFSET(CLKT))

#define BSC5_CTRL_ADDR     (GET_BSC_BASE_ADDR(5) + GET_BSC_REG_OFFSET(CTRL))
#define BSC5_STATUS_ADDR   (GET_BSC_BASE_ADDR(5) + GET_BSC_REG_OFFSET(STATUS))
#define BSC5_DLEN_ADDR     (GET_BSC_BASE_ADDR(5) + GET_BSC_REG_OFFSET(DLEN))
#define BSC5_SLAVE_ADDR    (GET_BSC_BASE_ADDR(5) + GET_BSC_REG_OFFSET(SLAVE))
#define BSC5_DFIFO_ADDR    (GET_BSC_BASE_ADDR(5) + GET_BSC_REG_OFFSET(DFIFO))
#define BSC5_CLK_DIV_ADDR  (GET_BSC_BASE_ADDR(5) + GET_BSC_REG_OFFSET(CLK_DIV))
#define BSC5_DEL_OFFSET    (GET_BSC_BASE_ADDR(5) + GET_BSC_REG_OFFSET(DEL))
#define BSC5_CLKT_OFFSET   (GET_BSC_BASE_ADDR(5) + GET_BSC_REG_OFFSET(CLKT))

#define BSC6_CTRL_ADDR     (GET_BSC_BASE_ADDR(6) + GET_BSC_REG_OFFSET(CTRL))
#define BSC6_STATUS_ADDR   (GET_BSC_BASE_ADDR(6) + GET_BSC_REG_OFFSET(STATUS))
#define BSC6_DLEN_ADDR     (GET_BSC_BASE_ADDR(6) + GET_BSC_REG_OFFSET(DLEN))
#define BSC6_SLAVE_ADDR    (GET_BSC_BASE_ADDR(6) + GET_BSC_REG_OFFSET(SLAVE))
#define BSC6_DFIFO_ADDR    (GET_BSC_BASE_ADDR(6) + GET_BSC_REG_OFFSET(DFIFO))
#define BSC6_CLK_DIV_ADDR  (GET_BSC_BASE_ADDR(6) + GET_BSC_REG_OFFSET(CLK_DIV))
#define BSC6_DEL_OFFSET    (GET_BSC_BASE_ADDR(6) + GET_BSC_REG_OFFSET(DEL))
#define BSC6_CLKT_OFFSET   (GET_BSC_BASE_ADDR(6) + GET_BSC_REG_OFFSET(CLKT))

/* --------------------- DMA CONTROLLER ADDR --------------------- */
/* DESCRIPTION:
   The Direct Memory Access controller is the component that transfers data between
   a device and memory w/o using the CPU. The DMA Controller is reduced to block-to-block
   memory transfers.
   
   The BCM2711 DMA Controller has a total of 16 DMA Channels:
   - 4 DMA Lite Channels (Reduced Performance and Features)
   - 4 DMA4 Channels (Increased Performance and a wider address range)
   
   A Control BLock Data Structure is loaded from memory into internal registers.
   
*/

#endif /*GLOBAL_H*/