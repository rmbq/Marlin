/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Creality v4.5.3 (STM32F103RE / STM32F103RC) board pin assignments
 */

#if HAS_MULTI_HOTEND || E_STEPPERS > 1
  #error "Creality v4.5.3 only supports 1 hotend / E stepper."
#endif

#define BOARD_INFO_NAME "Creality v4.5.3"

#define HEATER_0_PIN                        PB14  // HEATER1
#define HEATER_BED_PIN                      PB13  // HOT BED
#define FAN_PIN                             PB15  // FAN

#if ENABLED(PROBE_ACTIVATION_SWITCH)
  #ifndef PROBE_ACTIVATION_SWITCH_PIN
    #define PROBE_ACTIVATION_SWITCH_PIN     PB2   // Optoswitch to Enable Z Probe
  #endif
#endif

#if HAS_TMC_UART
  #define E0_SERIAL_TX_PIN PA14
  #define E0_SERIAL_RX_PIN PA14
  #define TMC_BAUD_RATE 19600
#endif

#if ENABLED(CR10_STOCKDISPLAY)
  #define LCD_PINS_RS                EXP3_07_PIN
  #define LCD_PINS_ENABLE            EXP3_08_PIN
  #define LCD_PINS_D4                EXP3_06_PIN

  #define BTN_ENC                    EXP3_02_PIN
  #define BTN_EN1                    EXP3_03_PIN
  #define BTN_EN2                    EXP3_05_PIN

  #ifndef HAS_PIN_27_BOARD
    #define BEEPER_PIN               EXP3_01_PIN
  #endif
#endif

#include "pins_CREALITY_V45x.h"
