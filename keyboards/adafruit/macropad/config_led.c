#ifdef RGB_MATRIX_ENABLE

#include "macropad.h"
#include "rgb_matrix.h"
#include "config_led.h"

#define NA NO_LED

/* RGB Positioning */
led_config_t g_led_config = { {
             { NA }, /* Encoder Button */
    {  0,   1,  2 },
    {  3,   4,  5 },
    {  6,   7,  8 },
    {  9,  10, 11 }
}, {
    { 0,  0 }, { 112,  0 }, { 224,  0},
    { 0, 21 }, { 112, 21 }, { 224, 21},
    { 0, 42 }, { 112, 42 }, { 224, 42},
    { 0, 64 }, { 112, 64 }, { 224, 64}
}, {
    4, 4, 4,
    4, 4, 4,
    4, 4, 4,
    4, 4, 4
} };

#endif
