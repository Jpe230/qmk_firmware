// Copyright 2022 Jose Pablo Ramirez (@jpe230)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include QMK_KEYBOARD_H

#ifdef VIA_ENABLE
  #define USER_START USER00
#else
  #define USER_START SAFE_RANGE
#endif

enum userspace_custom_keycodes {
    VRSN = USER_START,           // Prints QMK Firmware and board info
    UC_FLIP,                     // (ಠ痊ಠ)┻━┻
    UC_TABL,                     // ┬─┬ノ( º _ ºノ)
    UC_SHRG,                     // ¯\_(ツ)_/¯
    UC_DISA,                     // ಠ_ಠ
    UC_IRNY,
    UC_CLUE,
    KC_NOMODE,
    KC_WIDE,
    KC_SCRIPT,
    KC_BLOCKS,
    KC_REGIONAL,
    KC_AUSSIE,
    KC_ZALGO,
    KC_SUPER
};


/* ---------------------------
 * Custom OLED Fncs Prototypes
 * ---------------------------
 */
void render_slave_oled(void);
void render_master_oled(void);
void oled_timer_reset(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
