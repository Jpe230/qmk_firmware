/* Copyright 2022 Jose Pablo Ramirez <jp.ramangulo@gmail.com>
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

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 3

#define VENDOR_ID 0x0032
#define PRODUCT_ID 0x0061
#define DEVICE_VER 0x0001

/* Keyboard Matrix Assignments */
// clang-format off
#define DIRECT_PINS { \
    { NO_PIN, NO_PIN, GP0  }, \
    { GP1,    GP2,    GP3  }, \
    { GP4,    GP5,    GP6  }, \
    { GP7,    GP8,    GP9  }, \
    { GP10,   GP11,   GP12 }  \
}
// clang-format on

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP13
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

#define TRANSIENT_EEPROM_SIZE 400

/* OLED SPI Defines */
#define OLED_DISPLAY_128X64
#define OLED_IC OLED_IC_SH1106

/* OLED SPI Pins */
#define OLED_DC_PIN GP24
#define OLED_CS_PIN GP22
#define OLED_RST_PIN GP23

/* Shift OLED columns by 2 pixels */
#define OLED_COLUMN_OFFSET 2

/* Divisor for OLED */
#define OLED_SPI_DIVISOR 4

/* ChibiOS SPI definitions */
#define SPI_DRIVER SPID1
#define SPI_SCK_PIN GP26
#define SPI_MOSI_PIN GP27
#define SPI_MISO_PIN GP28

/* Encoders */
#define ENCODERS_PAD_A { GP18 }
#define ENCODERS_PAD_B { GP17 }

#define DEBOUNCE 5

/* Audio */
// #define AUDIO_PIN GP16
// #define SPEAKER_SHUTDOWN GP14

#define RGB_DISABLE_WHEN_USB_SUSPENDED

/* Bootmagic lite */
/* (Press the Encoder button while plugging the keyboard to enter the bootloader and clear flash) */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 2

#include "config_led.h"
