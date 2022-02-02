/*
 * Copyright (c) 2018 Charlie Waters
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

#include "pin_defs.h"
#include "config_led.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0xfeed
#define PRODUCT_ID 0xac15
#define DEVICE_VER 0x1337
#define MANUFACTURER Obins
#define PRODUCT Anne Pro 2 QMK
// key matrix size
#define MATRIX_ROWS 5
#define MATRIX_COLS 14
// layer size: MATRIX_ROWS * MATRIX_COLS * sizeof(uint16_t) = 140 bytes

#define LINE_UART_TX B0  // Master TX, LED RX
#define LINE_UART_RX B1  // Master RX, LED TX

#define LINE_BT_UART_TX A4  // Master TX, BLE RX
#define LINE_BT_UART_RX A5  // Master RX, BLE TX

// outputs (rows are pulled low)
#define MATRIX_ROW_PINS \
    { C2, C1, B5, B4, C3 }

// inputs (columns are sampled)
// PORTA 12,13 conflict with SWD

#define MATRIX_COL_PINS \
    { C4, C5, B10, B11, C0, A15, A8, A10, A11, A12, A13, A14, B2, B3 }

// SPI Config
#define SPI_DRIVER SPID1
#define SPI_SCK_PIN A0
#define SPI_SCK_PAL_MODE 5
#define SPI_MOSI_PIN A1
#define SPI_MOSI_PAL_MODE 5
#define SPI_MISO_PIN A2
#define SPI_MISO_PAL_MODE 5

#define SPI_FLASH_SLAVE_SELECT_PIN B6
#define SPI_FLASH_MODE 3
#define SPI_FLASH_CLOCK_DIVISOR 16
#define SPI_FLASH_ADDRESS_SIZE 3
#define SPI_FLASH_PAGE_SIZE 256
#define SPI_FLASH_PAGE_COUNT 8
#define SPI_FLASH_SECTOR_SIZE 4096
#define SPI_FLASH_SECTOR_COUNT 64
#define SPI_FLASH_SIZE 256

// HAL Config
#define HAL_USE_SPI TRUE
#define SPI_SELECT_MODE SPI_SELECT_MODE_PAD
// MCU Config
#define HT32_SPI_USE_SPI1 TRUE
#define HT32_SPI1_IRQ_PRIORITY 9

#define ENABLE_RGB_MATRIX_ALPHAS_MODS
#define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_BAND_SAT
#define ENABLE_RGB_MATRIX_BAND_VAL
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#define ENABLE_RGB_MATRIX_CYCLE_ALL
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#define ENABLE_RGB_MATRIX_DUAL_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#define ENABLE_RGB_MATRIX_RAINDROPS
#define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#define ENABLE_RGB_MATRIX_HUE_BREATHING
#define ENABLE_RGB_MATRIX_HUE_PENDULUM
#define ENABLE_RGB_MATRIX_HUE_WAVE
