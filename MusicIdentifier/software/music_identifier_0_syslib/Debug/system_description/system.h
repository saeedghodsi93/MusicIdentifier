/* system.h
 *
 * Machine generated for a CPU named "cpu_0" as defined in:
 * d:\LAST\Last\test\software\hello_world_0_syslib\..\..\test.ptf
 *
 * Generated: 2015-11-29 17:28:28.234
 *
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/*

DO NOT MODIFY THIS FILE

   Changing this file will have subtle consequences
   which will almost certainly lead to a nonfunctioning
   system. If you do modify this file, be aware that your
   changes will be overwritten and lost when this file
   is generated again.

DO NOT MODIFY THIS FILE

*/

/******************************************************************************
*                                                                             *
* License Agreement                                                           *
*                                                                             *
* Copyright (c) 2003 Altera Corporation, San Jose, California, USA.           *
* All rights reserved.                                                        *
*                                                                             *
* Permission is hereby granted, free of charge, to any person obtaining a     *
* copy of this software and associated documentation files (the "Software"),  *
* to deal in the Software without restriction, including without limitation   *
* the rights to use, copy, modify, merge, publish, distribute, sublicense,    *
* and/or sell copies of the Software, and to permit persons to whom the       *
* Software is furnished to do so, subject to the following conditions:        *
*                                                                             *
* The above copyright notice and this permission notice shall be included in  *
* all copies or substantial portions of the Software.                         *
*                                                                             *
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR  *
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,    *
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE *
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER      *
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING     *
* FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER         *
* DEALINGS IN THE SOFTWARE.                                                   *
*                                                                             *
* This agreement shall be governed in all respects by the laws of the State   *
* of California and by the laws of the United States of America.              *
*                                                                             *
******************************************************************************/

/*
 * system configuration
 *
 */

#define ALT_SYSTEM_NAME "test"
#define ALT_CPU_NAME "cpu_0"
#define ALT_CPU_ARCHITECTURE "altera_nios2"
#define ALT_DEVICE_FAMILY "CYCLONEII"
#define ALT_STDIN "/dev/jtag_uart_0"
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN_BASE 0x02001010
#define ALT_STDIN_DEV jtag_uart_0
#define ALT_STDIN_PRESENT
#define ALT_STDOUT "/dev/jtag_uart_0"
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT_BASE 0x02001010
#define ALT_STDOUT_DEV jtag_uart_0
#define ALT_STDOUT_PRESENT
#define ALT_STDERR "/dev/jtag_uart_0"
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDERR_BASE 0x02001010
#define ALT_STDERR_DEV jtag_uart_0
#define ALT_STDERR_PRESENT
#define ALT_CPU_FREQ 50000000
#define ALT_IRQ_BASE NULL

/*
 * processor configuration
 *
 */

#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_BIG_ENDIAN 0

#define NIOS2_ICACHE_SIZE 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_FLUSHDA_SUPPORTED

#define NIOS2_EXCEPTION_ADDR 0x01000020
#define NIOS2_RESET_ADDR 0x01000000
#define NIOS2_BREAK_ADDR 0x02000820

#define NIOS2_HAS_DEBUG_STUB

#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0

/*
 * A define for each class of peripheral
 *
 */

#define __ALTERA_UP_AVALON_CLOCKS
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_NEW_SDRAM_CONTROLLER
#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_NIOS_CUSTOM_INSTR_FLOATING_POINT

/*
 * up_avalon_clocks_0 configuration
 *
 */

#define UP_AVALON_CLOCKS_0_NAME "/dev/up_avalon_clocks_0"
#define UP_AVALON_CLOCKS_0_TYPE "altera_up_avalon_clocks"
#define UP_AVALON_CLOCKS_0_BASE 0x02001018
#define UP_AVALON_CLOCKS_0_SPAN 2
#define UP_AVALON_CLOCKS_0_TERMINATED_PORTS ""
#define ALT_MODULE_CLASS_up_avalon_clocks_0 altera_up_avalon_clocks

/*
 * pio_0 configuration
 *
 */

#define PIO_0_NAME "/dev/pio_0"
#define PIO_0_TYPE "altera_avalon_pio"
#define PIO_0_BASE 0x02001000
#define PIO_0_SPAN 16
#define PIO_0_DO_TEST_BENCH_WIRING 0
#define PIO_0_DRIVEN_SIM_VALUE 0
#define PIO_0_HAS_TRI 0
#define PIO_0_HAS_OUT 1
#define PIO_0_HAS_IN 0
#define PIO_0_CAPTURE 0
#define PIO_0_DATA_WIDTH 8
#define PIO_0_RESET_VALUE 0
#define PIO_0_EDGE_TYPE "NONE"
#define PIO_0_IRQ_TYPE "NONE"
#define PIO_0_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_0_FREQ 50000000
#define ALT_MODULE_CLASS_pio_0 altera_avalon_pio

/*
 * sdram_0 configuration
 *
 */

#define SDRAM_0_NAME "/dev/sdram_0"
#define SDRAM_0_TYPE "altera_avalon_new_sdram_controller"
#define SDRAM_0_BASE 0x01000000
#define SDRAM_0_SPAN 8388608
#define SDRAM_0_REGISTER_DATA_IN 1
#define SDRAM_0_SIM_MODEL_BASE 1
#define SDRAM_0_SDRAM_DATA_WIDTH 16
#define SDRAM_0_SDRAM_ADDR_WIDTH 12
#define SDRAM_0_SDRAM_ROW_WIDTH 12
#define SDRAM_0_SDRAM_COL_WIDTH 8
#define SDRAM_0_SDRAM_NUM_CHIPSELECTS 1
#define SDRAM_0_SDRAM_NUM_BANKS 4
#define SDRAM_0_REFRESH_PERIOD 15.625
#define SDRAM_0_POWERUP_DELAY 100.0
#define SDRAM_0_CAS_LATENCY 3
#define SDRAM_0_T_RFC 70.0
#define SDRAM_0_T_RP 20.0
#define SDRAM_0_T_MRD 3
#define SDRAM_0_T_RCD 20.0
#define SDRAM_0_T_AC 5.5
#define SDRAM_0_T_WR 14.0
#define SDRAM_0_INIT_REFRESH_COMMANDS 2
#define SDRAM_0_INIT_NOP_DELAY 0.0
#define SDRAM_0_SHARED_DATA 0
#define SDRAM_0_SDRAM_BANK_WIDTH 2
#define SDRAM_0_TRISTATE_BRIDGE_SLAVE ""
#define SDRAM_0_STARVATION_INDICATOR 0
#define SDRAM_0_IS_INITIALIZED 1
#define ALT_MODULE_CLASS_sdram_0 altera_avalon_new_sdram_controller

/*
 * jtag_uart_0 configuration
 *
 */

#define JTAG_UART_0_NAME "/dev/jtag_uart_0"
#define JTAG_UART_0_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_0_BASE 0x02001010
#define JTAG_UART_0_SPAN 8
#define JTAG_UART_0_IRQ 0
#define JTAG_UART_0_WRITE_DEPTH 64
#define JTAG_UART_0_READ_DEPTH 64
#define JTAG_UART_0_WRITE_THRESHOLD 8
#define JTAG_UART_0_READ_THRESHOLD 8
#define JTAG_UART_0_READ_CHAR_STREAM ""
#define JTAG_UART_0_SHOWASCII 1
#define JTAG_UART_0_READ_LE 0
#define JTAG_UART_0_WRITE_LE 0
#define JTAG_UART_0_ALTERA_SHOW_UNRELEASED_JTAG_UART_FEATURES 0
#define ALT_MODULE_CLASS_jtag_uart_0 altera_avalon_jtag_uart

/*
 * system library configuration
 *
 */

#define ALT_MAX_FD 32
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none

/*
 * Devices associated with code sections.
 *
 */

#define ALT_TEXT_DEVICE       SDRAM_0
#define ALT_RODATA_DEVICE     SDRAM_0
#define ALT_RWDATA_DEVICE     SDRAM_0
#define ALT_EXCEPTIONS_DEVICE SDRAM_0
#define ALT_RESET_DEVICE      SDRAM_0

/*
 * The text section is initialised so no bootloader will be required.
 * Set a variable to tell crt0.S to provide code at the reset address and
 * to initialise rwdata if appropriate.
 */

#define ALT_NO_BOOTLOADER


#endif /* __SYSTEM_H_ */
