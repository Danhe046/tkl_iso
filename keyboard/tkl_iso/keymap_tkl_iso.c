#include "keymap_common.h"


const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP_TKL_ISO(
        ESC,  /**/  F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,   F10,  F11,  F12,  PSCR, SLCK, PAUS, \
        GRV,  1,    2,    3,    4,    5,    6,    7,    8,    9,    0,    MINS, EQL,  BSPC, INS,  HOME, PGUP, \
        TAB,  Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P,    LBRC, RBRC, /**/  DEL,  END,  PGDN, \
        CAPS, A,    S,    D,    F,    G,    H,    J,    K,    L,    SCLN, QUOT, NUHS, ENT,  /**/  /**/  /**/  \
        LSFT, NUBS, Z,    X,    C,    V,    B,    N,    M,    COMM, DOT,  SLSH, RSFT, /**/  /**/  UP,   /**/  \
        LCTL, LGUI, LALT, /**/  /**/  /**/  SPC,  /**/  /**/  /**/  /*ERAS*/RALT, RGUI, FN0/*APP*/,  RCTL, LEFT, DOWN, RGHT),
    KEYMAP_TKL_ISO(
        BTLD, /**/  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, /**/  TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, /**/  /**/  /**/  \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, /**/  /**/  TRNS, /**/  \
        TRNS, TRNS, TRNS, /**/  /**/  /**/  TRNS, /**/  /**/  /**/  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS),
};
/*const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP_TKL_ISO(
        A,    B, C, D, E, F, G, H, I, J, K, L, S, N, O, P, \
        Q, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, A, B, C, D, E, F, \
        G, H, I, J, K, L, Z, N, O, P, Q, R, S,    T, U, V, \
        W, E, T, D, F, G, H, J, K, L, A, B, C, D,            \
        E, F, Z, X, C, V, B, N, Z, K, L, Q, N,       O,       \
        0, 1, 2,          3,          4, 5, 6, 7, 8, 9, 0),
};*/
/*
 * Fn action definition
 */
const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
};

