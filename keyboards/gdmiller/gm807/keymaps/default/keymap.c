/* Copyright 2022 1Conan <me@1conan.com>
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
#include "quantum.h"
#include "../../gm807.h"
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _GAME,
    _FN,
};

#define _BTN    KC_NO
#define PRT_LED KEY_USB_LED
#define BT_TOG KEY_BT_TOGGLE
#define BT_PRO1 KEY_BT_PROF1
#define BT_PRO2 KEY_BT_PROF2
#define BT_PRO3 KEY_BT_PROF3
#define BT_PAIR KEY_BT_PAIR

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,             KC_PSCR,  KC_SLCK, KC_PAUS, \
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,   KC_INS,   KC_HOME, KC_PGUP, \
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,   KC_DEL,   KC_END,  KC_PGDN, \
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,    TG(_GAME), _BTN,             \
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,             KC_UP,            \
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, MO(_FN), KC_APP,  KC_RCTL,   KC_LEFT,  KC_DOWN, KC_RGHT \
    ),
    [_GAME] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,             _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,    _______, _______,          \
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,             _______,          \
        _______, KC_NO,   _______,                            _______,                            _______, _______, _______, _______,    _______, _______, _______  \
    ),
    [_FN] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,             _______, _______, PRT_LED, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, \
        BT_TOG,  BT_PRO1, BT_PRO2, BT_PRO3, _______, _______, _______, _______, _______, _______, BT_PAIR, _______, _______, _______,    _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,    _______, _______,          \
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,             _______,          \
        _______, _______, _______,                            _______,                            _______, _______, _______, _______,    _______, _______, _______  \
    )
    /*
    [X] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,             _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,    _______, _______,          \
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,             _______,          \
        _______, _______, _______,                   _______,                            _______, _______, _______, _______,             _______, _______, _______  \
    ),
    */
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        tap_code(KC_VOLU);
    } else {
        tap_code(KC_VOLD);
    }
    return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    writePin(LED_K5, IS_LAYER_ON_STATE(state, _GAME));

    return state;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KEY_USB_LED:
            if (record->event.pressed) {
                writePin(LED_USB_PORT, !readPin(LED_USB_PORT));
            }
            return false;
        default:
            return true;
    }
}

void keyboard_post_init_user() {
    writePinHigh(LED_USB_PORT);
}
