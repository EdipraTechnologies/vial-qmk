#include QMK_KEYBOARD_H

// C1, C2, R1, R2, R3, R4 in schematic-net order.
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        MS_BTN1, MS_BTN2,
        MS_BTN3, MS_BTN4,
        MS_BTN5, KC_NO,
        KC_NO,  KC_NO
    )
};

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        tap_code(clockwise ? KC_VOLU : KC_VOLD);
    }
    return false;
}
#endif
