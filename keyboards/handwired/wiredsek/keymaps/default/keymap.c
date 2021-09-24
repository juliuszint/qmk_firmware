#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT( \
        KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,    KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_DEL,    KC_SLCK, KC_PAUS, KC_NLCK,    KC_CALC, RESET, KC_MAIL, KC_LOCK, \
        DE_CIRC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6,         KC_7, KC_8, KC_9, KC_0, DE_SS, DE_ACUT, KC_BSPC,                 KC_INS, KC_HOME, KC_PGUP,     KC_CLEAR, KC_PSLS, KC_PAST, KC_PMNS, \
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,                DE_Z, KC_U, KC_I, KC_O, KC_P, DE_UDIA, DE_PLUS, KC_ENT,          KC_END, KC_PGDN,              KC_P7, KC_P8, KC_P9, KC_PPLS, \
        KC_CLCK, KC_A, KC_S, KC_D, KC_F, KC_G,               KC_H, KC_J, KC_K, KC_L, LT(2, DE_ODIA), DE_ADIA, DE_HASH,                                             KC_P4, KC_P5, KC_P6, \
        KC_LSFT, DE_LABK, DE_Y, KC_X, KC_C, KC_V, KC_B,      KC_N, KC_M, DE_COMM, DE_DOT, DE_MINS, KC_RSFT,                   KC_UP,                        KC_P1, KC_P2, KC_P3, KC_PENT, \
        KC_LCTL, TG(1), KC_LGUI, KC_LALT, KC_SPC,            KC_RALT, KC_RGUI, KC_APP, KC_RCTL,                               KC_LEFT, KC_DOWN, KC_RIGHT,   KC_P0, KC_PDOT \
  ),
  [1] = LAYOUT( \
        KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU, KC_MPRV, KC_MPLY, KC_MNXT,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,             KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                          KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                      KC_TRNS,                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                        KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS \
  ),
  [2] = LAYOUT( \
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,             KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_TRNS, KC_TRNS, RALT(KC_0), KC_TRNS, KC_TRNS,                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS, RALT(KC_8), KC_TRNS, RALT(KC_7), KC_TRNS, RSFT(KC_4),                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                          KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_TRNS, RALT(KC_9), RSFT(KC_5), RALT(DE_LABK), RSFT(KC_6), KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                      KC_TRNS,                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                        KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS \
  ),
};

// column test keymap
/*
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = {
	{KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_A, KC_B, KC_C, KC_D, KC_E, KC_F, KC_G, KC_H},
	{KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_A, KC_B, KC_C, KC_D, KC_E, KC_F, KC_G, KC_H},
	{KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_A, KC_B, KC_C, KC_D, KC_E, KC_F, KC_G, KC_H},
	{KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_A, KC_B, KC_C, KC_D, KC_E, KC_F, KC_G, KC_H},
	{KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_A, KC_B, KC_C, KC_D, KC_E, KC_F, KC_G, KC_H},
	{KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_A, KC_B, KC_C, KC_D, KC_E, KC_F, KC_G, KC_H},
	{KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_A, KC_B, KC_C, KC_D, KC_E, KC_F, KC_G, KC_H},
	{KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_A, KC_B, KC_C, KC_D, KC_E, KC_F, KC_G, KC_H}
  }
};
*/

// row test keymap
/*
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = {
	{KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1},
	{KC_2, KC_2, KC_2, KC_2, KC_2, KC_2, KC_2, KC_2, KC_2, KC_2, KC_2, KC_2, KC_2, KC_2, KC_2, KC_2, KC_2},
	{KC_3, KC_3, KC_3, KC_3, KC_3, KC_3, KC_3, KC_3, KC_3, KC_3, KC_3, KC_3, KC_3, KC_3, KC_3, KC_3, KC_3},
	{KC_4, KC_4, KC_4, KC_4, KC_4, KC_4, KC_4, KC_4, KC_4, KC_4, KC_4, KC_4, KC_4, KC_4, KC_4, KC_4, KC_4},
	{KC_5, KC_5, KC_5, KC_5, KC_5, KC_5, KC_5, KC_5, KC_5, KC_5, KC_5, KC_5, KC_5, KC_5, KC_5, KC_5, KC_5},
	{KC_6, KC_6, KC_6, KC_6, KC_6, KC_6, KC_6, KC_6, KC_6, KC_6, KC_6, KC_6, KC_6, KC_6, KC_6, KC_6, KC_6},
	{KC_7, KC_7, KC_7, KC_7, KC_7, KC_7, KC_7, KC_7, KC_7, KC_7, KC_7, KC_7, KC_7, KC_7, KC_7, KC_7, KC_7},
	{KC_8, KC_8, KC_8, KC_8, KC_8, KC_8, KC_8, KC_8, KC_8, KC_8, KC_8, KC_8, KC_8, KC_8, KC_8, KC_8, KC_8}
  }
};
*/
