#include "ch.h"
#include "hal.h"
#include "k14.h"
#include "config_led.h"
#include "SPI.h"
#include "printf.h"
#include "../../../drivers/bluetooth/sn32/iton/iton.h"
#include "../../../drivers/bluetooth/sn32/iton/iton_driver.h"

void keyboard_pre_init_kb(void)  {
    SPI0_Init();
    iton_init();

    keyboard_pre_init_user();
}

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch(keycode) {
            case KEY_USB_LED:
                return false;
            case KEY_BT_TOGGLE:
                iton_switch_driver();
                break;
            case KEY_BT_MODE:
                if (!iton_is_bt()) iton_switch_driver();
                break;
            case KEY_USB_MODE:
                if (iton_is_bt()) iton_switch_driver();
                break;
            case KEY_BT_PAIR:
                dprintf("Pairing... \n");
                iton_pairing_mode();
                break;
            case KEY_BT_PROF1:
                iton_profile(0);
                break;
            case KEY_BT_PROF2:
                iton_profile(1);
                break;
            case KEY_BT_PROF3:
                iton_profile(2);
                break;
            default:
                break;
        }
    }
    return process_record_user(keycode, record);
}
