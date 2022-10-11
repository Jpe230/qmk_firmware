// Copyright 2022 Jose Pablo Ramirez (@jpe230)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "jpe230.h"
#include "junicode.h"

void matrix_init_user(void) {
    matrix_init_unicode();
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_unicode(keycode, record)) {
        return false;
    }

    if (record->event.pressed) {
        oled_timer_reset();
        set_keylog(keycode, record);

        switch (keycode) {
            case QK_BOOT:
                rgb_matrix_set_color_all(30, 0, 0);
                rgb_matrix_driver.flush();
                oled_off();
                return true;
        }
    }
    return true;
}
