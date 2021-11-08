#include <string.h>
#include "rgb_matrix.h"
#include "rgb_matrix_types.h"
#include "qmk_ap2_led.h"
#include "color.h"

uint8_t led_pos[DRIVER_LED_TOTAL];

void init(void) {
    unsigned int i = 0;
    for (unsigned int y = 0; y < LED_MATRIX_ROWS; y++) {
        for (unsigned int x = 0; x < LED_MATRIX_COLS; x++) {
            if (g_led_config.matrix_co[y][x] != NO_LED) {
                led_pos[g_led_config.matrix_co[y][x]] = i;
            }
            i++;
        }
    }
}

static void flush(void) {}

void set_color(int index, uint8_t r, uint8_t g, uint8_t b) {
    if (r != ledMask[led_pos[index]].p.red   ||
        g != ledMask[led_pos[index]].p.green ||
        b != ledMask[led_pos[index]].p.blue)
        {
            ledMask[led_pos[index]] = (annepro2Led_t){
                .p.blue  = b,
                .p.red   = r,
                .p.green = g,
                .p.alpha = 0xff,
            };
            int row = led_pos[index] / LED_MATRIX_COLS;
            rowChanged[row] = 1;
        }
}

static void set_color_all(uint8_t r, uint8_t g, uint8_t b) {
    for (int i=0; i<DRIVER_LED_TOTAL; i++)
        set_color(i, r, g, b);
}

const rgb_matrix_driver_t rgb_matrix_driver = {
    .init          = init,
    .flush         = flush,
    .set_color     = set_color,
    .set_color_all = set_color_all,
};