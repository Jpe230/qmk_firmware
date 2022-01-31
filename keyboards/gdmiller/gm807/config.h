/* Copyright 2020 Adam Honse <calcprogrammer1@gmail.com>
 * Copyright 2020 Dimitris Mantzouranis <d3xter93@gmail.com>
 * Copyright 2022 1Conan <me@1conan.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x05AC
#define PRODUCT_ID      0x0256
#define DEVICE_VER      0x0001

#define MANUFACTURER    gdmiller
#define PRODUCT         GM807
#define DESCRIPTION     GM807 TKL BT Keyboard

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 17

#define DIODE_DIRECTION COL2ROW

#define MATRIX_COL_PINS { A8, A9, A10, A11, A12, A13, A14, A15, B0, B1, B2, B3, B4, B5, B6, B7, B8 }
#define MATRIX_ROW_PINS { C15, D11, D10, D9, D8, D7 }

#define ENCODERS_PAD_A { B10 }
#define ENCODERS_PAD_B { B9 }

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 0

#include "config_led.h"

#define TAP_CODE_DELAY 10

// Bluetooth
// #define ITON_BT5 // Uncomment on BT5.0 keyboards
#define BT_MAX_PROFILES 3
#define SN32_SPI_SLAVE_MODE
#define SN32_SPI_TXFIFO_THRESHOLD 7
