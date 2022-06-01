#include "macropad.h"

void keyboard_pre_init_kb(void) {
    // setPinOutput(SPEAKER_SHUTDOWN);
    // writePinHigh(SPEAKER_SHUTDOWN);
}

__attribute__((weak)) void raw_hid_receive_kb(uint8_t *data, uint8_t length){}
