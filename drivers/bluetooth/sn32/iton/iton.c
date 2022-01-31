/* Copyright 2022 1Conan
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
#include <stdint.h>
#include <string.h>
#include "ch.h"
#include "hal.h"
#include "gpio.h"
#include "SPI.h"
#include "iton.h"

#include "config.h"

#ifndef ITON_IRQ_PIN
#define ITON_IRQ_PIN A0
#endif

#ifndef ITON_INT_PIN
#define ITON_INT_PIN A1
#endif

#ifndef BT_MAX_PROFILES
#define BT_MAX_PROFILES 3
#endif

#ifdef ITON_BT5
#define ITON_HID_REPORT 0x51
#define ITON_NKRO_REPORT 0x52
#define ITON_CONSUMER_REPORT 0x53
#define ITON_SYSTEM_REPORT 0x54
#define ITON_FN_REPORT 0x55
#define ITON_CONTROL 0x56
#define ITON_MODIFY_NAME 0x57
#else
#define ITON_HID_REPORT 0xA1
#define ITON_NKRO_REPORT 0xA2
#define ITON_CONSUMER_REPORT 0xA3
#define ITON_SYSTEM_REPORT 0xA4
#define ITON_FN_REPORT 0xA5
#define ITON_CONTROL 0xA6
#define ITON_MODIFY_NAME 0xA7
#endif

void iton_init() {
    setPinOutput(ITON_IRQ_PIN);
    writePinLow(ITON_IRQ_PIN);
    setPinInput(ITON_INT_PIN);
}

void iton_send_init(void) {
    writePinHigh(ITON_IRQ_PIN);
}
void iton_send_end(void) {
    writePinLow(ITON_IRQ_PIN);
}

void iton_hid_report(uint8_t *data) {
    iton_send_init();
    SPI0_Write1(ITON_HID_REPORT);
    SPI0_Write(data, 8);
    SPI0_Write_End();
    iton_send_end();
}

void iton_nkro_report(uint8_t *data) {
    iton_send_init();
    SPI0_Write1(ITON_NKRO_REPORT);
    SPI0_Write(data, 16);
    SPI0_Write_End();
    iton_send_end();
}

void iton_consumer_report(uint16_t data) {
    iton_send_init();
    SPI0_Write1(ITON_CONSUMER_REPORT);
    SPI0_Write1((uint8_t)(data >> 8));
    SPI0_Write1((uint8_t)data);
    SPI0_Write_End();
    iton_send_end();
}

// 0xA8 - Shutdown
// 0xA9 - Sleep
// 0xAA - Wake
void iton_system_report(uint8_t data) {
    iton_send_init();
    SPI0_Write1(ITON_SYSTEM_REPORT);
    SPI0_Write1(data);
    SPI0_Write_End();
    iton_send_end();
}

// 0xA3 - Fn keypress
// 0x00 - Fn key release
void iton_fn_report(uint8_t data) {
    iton_send_init();
    SPI0_Write1(ITON_FN_REPORT);
    SPI0_Write1(data);
    SPI0_Write_End();
    iton_send_end();
}

void iton_control(uint8_t cmd, uint8_t data) {
    iton_send_init();
    SPI0_Write1(ITON_CONTROL);
    SPI0_Write1(cmd);
    SPI0_Write1(data);
    SPI0_Write_End();
    iton_send_end();
}

void iton_mode_usb() {
    iton_control(0x58, 0x01);
}

void iton_mode_bt() {
    iton_control(0x51, 0x62);
}

void iton_clear_pairing() {
    iton_control(0x51, 0x70);
}

void iton_pairing_mode() {
    iton_control(0x51, 0x89);
}

void iton_profile(uint8_t profile) {
    if (profile > BT_MAX_PROFILES) {
        profile = BT_MAX_PROFILES;
    } else if (profile < 0) {
        profile = 0;
    }

    iton_control(0x51, 0x81 + profile);
}

void iton_os(iton_os_type_t type) {
    iton_control(0x51, type);
}

// Not Tested
void iton_change_name(char *name, uint8_t len) {
    uint16_t checksum = 0;
    for (uint8_t i = 0; i < len; i++) {
        checksum += name[i];
    }
    iton_send_init();
    SPI0_Write1(ITON_MODIFY_NAME);
    SPI0_Write((uint8_t *)&checksum, 2);
    SPI0_Write1(len);
    SPI0_Write((uint8_t *)name, strlen(name));
    SPI0_Write_End();
    iton_send_end();
}
