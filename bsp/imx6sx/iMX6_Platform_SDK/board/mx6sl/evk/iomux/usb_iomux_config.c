/*
 * Copyright (c) 2012, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

// File: usb_iomux_config.c

/* ------------------------------------------------------------------------------
 * <auto-generated>
 *     This code was generated by a tool.
 *     Runtime Version:3.4.0.0
 *
 *     Changes to this file may cause incorrect behavior and will be lost if
 *     the code is regenerated.
 * </auto-generated>
 * ------------------------------------------------------------------------------
*/

#include "iomux_config.h"
#include "registers/regsiomuxc.h"

// Function to configure IOMUXC for usb module.
void usb_iomux_config(void)
{
    // Config usb.USB_OTG1_ID to pad EPDC_PWR_COM(B11)
    // HW_IOMUXC_SW_MUX_CTL_PAD_EPDC_PWR_COM_WR(0x00000004);
    // HW_IOMUXC_SW_PAD_CTL_PAD_EPDC_PWR_COM_WR(0x000110B0);
    // HW_IOMUXC_ANALOG_USB_OTG_ID_SELECT_INPUT_WR(0x00000000);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EPDC_PWR_COM(0x020E00E0)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: epdc signal: EPDC_PWR_COM
    //     ALT1 (1) - Select instance: usdhc4 signal: SD4_DATA0
    //     ALT2 (2) - Select instance: lcd signal: LCD_DATA20
    //     ALT3 (3) - Select instance: eim signal: EIM_BCLK
    //     ALT4 (4) - Select instance: usb signal: USB_OTG1_ID
    //     ALT5 (5) - Select instance: gpio2 signal: GPIO2_IO11
    //     ALT6 (6) - Select instance: usdhc3 signal: SD3_RESET
    HW_IOMUXC_SW_MUX_CTL_PAD_EPDC_PWR_COM_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_EPDC_PWR_COM_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_EPDC_PWR_COM_MUX_MODE_V(ALT4));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EPDC_PWR_COM(0x020E03D0)
    //   LVE [22] - Low Voltage Enable Field Reset: DISABLED
    //     DISABLED (0) - High Voltage
    //     ENABLED (1) - Low Voltage
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PD
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: KEEP
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_EPDC_PWR_COM_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_EPDC_PWR_COM_LVE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EPDC_PWR_COM_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EPDC_PWR_COM_PUS_V(100K_OHM_PD) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EPDC_PWR_COM_PUE_V(KEEP) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EPDC_PWR_COM_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EPDC_PWR_COM_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EPDC_PWR_COM_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EPDC_PWR_COM_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EPDC_PWR_COM_SRE_V(SLOW));
    // Pad EPDC_PWR_COM is involved in Daisy Chain.
    // Input Select Register:
    // IOMUXC_ANALOG_USB_OTG_ID_SELECT_INPUT(0x020E05DC)
    //   DAISY [2:0] - MUX Mode Select Field Reset: EPDC_PWR_COM_ALT4
    //                 Selecting Pads Involved in Daisy Chain.
    //     EPDC_PWR_COM_ALT4 (0) - Select signal usb USB_OTG1_ID as input from pad EPDC_PWR_COM(ALT4).
    //     FEC_RX_DATA0_ALT2 (1) - Select signal usb USB_OTG1_ID as input from pad FEC_RX_DATA0(ALT2).
    //     LCD_DATA01_ALT2 (2) - Select signal usb USB_OTG1_ID as input from pad LCD_DATA01(ALT2).
    //     REF_CLK_32K_ALT3 (3) - Select signal usb USB_OTG1_ID as input from pad REF_CLK_32K(ALT3).
    //     SD3_DATA0_ALT4 (4) - Select signal usb USB_OTG1_ID as input from pad SD3_DATA0(ALT4).
    HW_IOMUXC_ANALOG_USB_OTG_ID_SELECT_INPUT_WR(
            BF_IOMUXC_ANALOG_USB_OTG_ID_SELECT_INPUT_DAISY_V(EPDC_PWR_COM_ALT4));

    // Config usb.USB_OTG1_PWR to pad KEY_COL4(E20)
    // HW_IOMUXC_SW_MUX_CTL_PAD_KEY_COL4_WR(0x00000006);
    // HW_IOMUXC_SW_PAD_CTL_PAD_KEY_COL4_WR(0x000110B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_KEY_COL4(0x020E017C)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: kpp signal: KEY_COL4
    //     ALT1 (1) - Select instance: audmux signal: AUD6_RXD
    //     ALT2 (2) - Select instance: lcd signal: LCD_DATA08
    //     ALT3 (3) - Select instance: eim signal: EIM_AD08
    //     ALT4 (4) - Select instance: usdhc4 signal: SD4_CLK
    //     ALT5 (5) - Select instance: gpio4 signal: GPIO4_IO00
    //     ALT6 (6) - Select instance: usb signal: USB_OTG1_PWR
    HW_IOMUXC_SW_MUX_CTL_PAD_KEY_COL4_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_KEY_COL4_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_KEY_COL4_MUX_MODE_V(ALT6));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_KEY_COL4(0x020E0484)
    //   LVE [22] - Low Voltage Enable Field Reset: DISABLED
    //     DISABLED (0) - High Voltage
    //     ENABLED (1) - Low Voltage
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PD
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: KEEP
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_KEY_COL4_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_COL4_LVE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_COL4_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_COL4_PUS_V(100K_OHM_PD) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_COL4_PUE_V(KEEP) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_COL4_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_COL4_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_COL4_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_COL4_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_COL4_SRE_V(SLOW));

    // Config usb.USB_OTG2_ID to pad REF_CLK_24M(AC14)
    // HW_IOMUXC_SW_MUX_CTL_PAD_REF_CLK_24M_WR(0x00000003);
    // HW_IOMUXC_SW_PAD_CTL_PAD_REF_CLK_24M_WR(0x000110B0);
    // HW_IOMUXC_ANALOG_USB_H1_ID_SELECT_INPUT_WR(0x00000002);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_REF_CLK_24M(0x020E0224)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: xtalosc signal: XTALOSC_REF_CLK_24M
    //     ALT1 (1) - Select instance: i2c3 signal: I2C3_SCL
    //     ALT2 (2) - Select instance: pwm3 signal: PWM3_OUT
    //     ALT3 (3) - Select instance: usb signal: USB_OTG2_ID
    //     ALT4 (4) - Select instance: ccm signal: CCM_PMIC_READY
    //     ALT5 (5) - Select instance: gpio3 signal: GPIO3_IO21
    //     ALT6 (6) - Select instance: usdhc3 signal: SD3_WP
    HW_IOMUXC_SW_MUX_CTL_PAD_REF_CLK_24M_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_REF_CLK_24M_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_REF_CLK_24M_MUX_MODE_V(ALT3));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_REF_CLK_24M(0x020E052C)
    //   LVE [22] - Low Voltage Enable Field Reset: DISABLED
    //     DISABLED (0) - High Voltage
    //     ENABLED (1) - Low Voltage
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PD
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: KEEP
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_REF_CLK_24M_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_REF_CLK_24M_LVE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_REF_CLK_24M_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_REF_CLK_24M_PUS_V(100K_OHM_PD) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_REF_CLK_24M_PUE_V(KEEP) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_REF_CLK_24M_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_REF_CLK_24M_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_REF_CLK_24M_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_REF_CLK_24M_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_REF_CLK_24M_SRE_V(SLOW));
    // Pad REF_CLK_24M is involved in Daisy Chain.
    // Input Select Register:
    // IOMUXC_ANALOG_USB_H1_ID_SELECT_INPUT(0x020E05E0)
    //   DAISY [1:0] - MUX Mode Select Field Reset: EPDC_PWR_IRQ_ALT4
    //                 Selecting Pads Involved in Daisy Chain.
    //     EPDC_PWR_IRQ_ALT4 (0) - Select signal usb USB_OTG2_ID as input from pad EPDC_PWR_IRQ(ALT4).
    //     LCD_DATA00_ALT2 (1) - Select signal usb USB_OTG2_ID as input from pad LCD_DATA00(ALT2).
    //     REF_CLK_24M_ALT3 (2) - Select signal usb USB_OTG2_ID as input from pad REF_CLK_24M(ALT3).
    //     SD3_CMD_ALT4 (3) - Select signal usb USB_OTG2_ID as input from pad SD3_CMD(ALT4).
    HW_IOMUXC_ANALOG_USB_H1_ID_SELECT_INPUT_WR(
            BF_IOMUXC_ANALOG_USB_H1_ID_SELECT_INPUT_DAISY_V(REF_CLK_24M_ALT3));

    // Config usb.USB_OTG2_PWR to pad KEY_COL5(D24)
    // HW_IOMUXC_SW_MUX_CTL_PAD_KEY_COL5_WR(0x00000006);
    // HW_IOMUXC_SW_PAD_CTL_PAD_KEY_COL5_WR(0x000110B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_KEY_COL5(0x020E0180)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: kpp signal: KEY_COL5
    //     ALT1 (1) - Select instance: audmux signal: AUD6_TXFS
    //     ALT2 (2) - Select instance: lcd signal: LCD_DATA10
    //     ALT3 (3) - Select instance: eim signal: EIM_AD10
    //     ALT4 (4) - Select instance: usdhc4 signal: SD4_DATA0
    //     ALT5 (5) - Select instance: gpio4 signal: GPIO4_IO02
    //     ALT6 (6) - Select instance: usb signal: USB_OTG2_PWR
    HW_IOMUXC_SW_MUX_CTL_PAD_KEY_COL5_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_KEY_COL5_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_KEY_COL5_MUX_MODE_V(ALT6));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_KEY_COL5(0x020E0488)
    //   LVE [22] - Low Voltage Enable Field Reset: DISABLED
    //     DISABLED (0) - High Voltage
    //     ENABLED (1) - Low Voltage
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PD
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: KEEP
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_KEY_COL5_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_COL5_LVE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_COL5_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_COL5_PUS_V(100K_OHM_PD) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_COL5_PUE_V(KEEP) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_COL5_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_COL5_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_COL5_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_COL5_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_COL5_SRE_V(SLOW));
}