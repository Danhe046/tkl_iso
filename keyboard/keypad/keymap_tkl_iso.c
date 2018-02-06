#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP_TKL_ISO(
        ESC, F1,  F2,  F3, F4,  F5, F6, F7, F8, F9, F10, F11, F12, PSCR, SLCK, PAUS, \
        1,  2,  3, 4, 5,  6,  7,  8,  9, 0, PPLS, A, BSPC, INS, HOME, PGUP, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P, A, A, DEL, RBRC, BSPC,      \
        A, CAPS, A,   S,   D,   F,   G,   H,   J,   K,   L, A, A, A, ENT,       \
        LSFT, A, Z,   X,   C,   V,   B,   N,   M,   COMM, DOT, A,     RSFT,    A,       \
        A,  A,A,          SPC,                 A,A,A,A,                A,A,A),
};

/*
 * Fn action definition
 */
const action_t PROGMEM fn_actions[] = {
//    [0] = ACTION_LAYER_MOMENTARY(1),
};
