#include "wiredsek.h"

#define FN_LED_PIN B7
#define PRR_LED_PIN A7

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
