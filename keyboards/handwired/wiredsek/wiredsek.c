#include "wiredsek.h"

#define FN_LED_PIN B7
#define PRR_LED_PIN A7
#define PRW_LED_PIN A6

static bool left_alt_down_performed;

void keyboard_pre_init_user(void) {
    setPinOutput(FN_LED_PIN);
    writePinHigh(FN_LED_PIN);
    setPinOutput(PRR_LED_PIN);
    writePinHigh(PRR_LED_PIN);
}

layer_state_t layer_state_set_user(layer_state_t state)
{
    if (IS_LAYER_ON_STATE(state, 1)) {
        writePinLow(FN_LED_PIN);
    }
    else {
        writePinHigh(FN_LED_PIN);
    }

    if (IS_LAYER_ON_STATE(state, 2)) {
        writePinLow(PRR_LED_PIN);
    }
    else {
        writePinHigh(PRR_LED_PIN);
    }

    return state;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(100) SS_TAP(X_1));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(100) SS_TAP(X_2));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(100) SS_TAP(X_3));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(100) SS_TAP(X_4));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(100) SS_TAP(X_5));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(100) SS_TAP(X_6));
    }
    break;
        case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(100) SS_TAP(X_7));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(100) SS_TAP(X_8));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(100) SS_TAP(X_9));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(100) SS_TAP(X_0));
    }
    break;

    /* tmux pane navigation */
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(100) SS_TAP(X_LEFT));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(100) SS_TAP(X_DOWN));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(100) SS_TAP(X_RIGHT));
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(100) SS_TAP(X_UP));
    }
    break;
    /* tmux pane scrolling */
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(100) SS_RALT(SS_TAP(X_8)));
    }
    break;

    /* tmux split pane */
    case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(100) SS_LSFT(SS_TAP(X_5)));
    }
    break;

    /* tmux create window */
    case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(100) SS_TAP(X_C));
    }
    break;

    /* custom tab behaviour */
    case KC_TAB:
    if (record->event.pressed) {
        if(IS_LAYER_ON(2)) {
            left_alt_down_performed = true;
            register_code(KC_LALT);
        }
    }
    break;

    case OSL(2):
    if (!record->event.pressed) {
        if(left_alt_down_performed) {
            unregister_code(KC_LALT);
        }
        left_alt_down_performed = false;
    }
    break;

  }
  return true;
}
