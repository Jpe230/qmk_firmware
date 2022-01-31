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
#include "iton.h"
#include "ch.h"
#include "hal.h"
#include "host_driver.h"
#include "report.h"
#include "iton_driver.h"
#include "quantum.h"

static uint8_t iton_bt_leds(void) {
    // TODO: Process leds
    return 0;
}

static void iton_bt_mouse(report_mouse_t *report) {
    // Not supported by bt fw
}

static void iton_bt_system(uint16_t data) {
    iton_system_report((uint8_t)data);
}

static void iton_bt_consumer(uint16_t data) {
    iton_consumer_report(data);
}


static void iton_bt_keyboard(report_keyboard_t *report) {
#ifdef NKRO_ENABLE
    if (!keymap_config.nkro) {
#endif
        iton_hid_report(&report->raw[0]);
#ifdef NKRO_ENABLE
        return;
    }
    static uint8_t iton_last_mod_sent = 0;

    if (iton_last_mod_sent != report->nkro.mods) {
        static uint8_t iton_mod_report[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
        iton_mod_report[0] = report->nkro.mods;
        iton_hid_report(iton_mod_report);
        iton_last_mod_sent = report->nkro.mods;
    }
    iton_nkro_report(&report->nkro.bits[0]);
#endif
}

static host_driver_t iton_bt_driver = {
    iton_bt_leds,
    iton_bt_keyboard,
    iton_bt_mouse,
    iton_bt_system,
    iton_bt_consumer,
};

static host_driver_t *last_driver = NULL;

bool iton_is_bt() {
    return host_get_driver() == &iton_bt_driver;
}

void iton_switch_driver() {
    clear_keyboard();
    if (host_get_driver() == &iton_bt_driver) {
        host_set_driver(last_driver);
        iton_mode_usb();
        return;
    }
    iton_mode_bt();
    last_driver = host_get_driver();
    host_set_driver(&iton_bt_driver);
}
