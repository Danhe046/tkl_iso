#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP_KEYPAD(
        CALCULATOR, PSLS,   PAST,   PMNS, \
        7,          8,      9,      PPLS, \
        4,          5,      6, \
        1,          2,      3,      ENTER, \
        FN0,                DOT),
    KEYMAP_KEYPAD(
        NO,   NO,   NO,   NO, \
        NO,   NO,   NO,   NO, \
        NO,   NO,   NO, \
        NO,   NO,   NO,   NO, \
        0,        COMM),
};
const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TAP_KEY(1, KC_0),
};
