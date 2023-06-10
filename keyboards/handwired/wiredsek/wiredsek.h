#pragma once
#include "quantum.h"
#include "keymap_german.h"

enum custom_keycodes {
  RGB_SLD = SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
  ST_MACRO_14,
  ST_MACRO_15,
  ST_MACRO_16,
};

#define LAYOUT( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, k0f, k0g, k0h, k0i, k0j, k0k, k0l, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e, k1f, k1g, k1h, k1i, k1j, k1k, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, k2f, k2g, k2h, k2i, k2j, k2k, \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d, k3e, k3f, \
    k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4a, k4b, k4c, k4d, k4e, k4f, k4g, k4h, \
    k50, k51, k52, k53, k54, k55, k56, k57, k58, k59, k5a, k5b, k5c, k5d \
) \
{ \
    {k5d, k5c, k41, k42, k4b, k4a, k49, k48, k47, k1d, k50, KC_NO, KC_NO, k0g, k1h, KC_NO, k00}, \
    {k4g, k4f, k4e, k25, k2g, k04, k3c, k3b, k1k, k5b, KC_NO, k40, KC_NO, k0f, k14, k02, KC_NO}, \
    {k3f, k3e, k3d, k24, k1g, k0e, k1a, k19, k18, k17, KC_NO, KC_NO, k53, k0k, k01, k06, KC_NO}, \
    {k2j, k2i, k2h, k23, k2f, k1f, KC_NO, k2c, k2b, k2a, KC_NO, KC_NO, KC_NO, k52, k05, k2d, KC_NO}, \
    {k1j, k1i, k0i, k22, k0h, k20, k29, k28, k27, k26, k58, KC_NO, KC_NO, k0l, KC_NO, k03, KC_NO}, \
    {k16, k15, k4h, k21, k0d, k1e, k2k, k1c, k1b, k10, KC_NO, k4c, KC_NO, k0j, k13, k12, k11}, \
    {k45, k44, k43, k4d, k0c, k0b, k0a, k09, k08, k07, KC_NO, KC_NO, k55, KC_NO, k30, KC_NO, k46}, \
    {k39, k38, k37, k36, k54, k35, k34, k33, k32, k31, KC_NO, k51, k57, k56, k5a, k59, k3a} \
}

layer_state_t layer_state_set_user(layer_state_t state);
