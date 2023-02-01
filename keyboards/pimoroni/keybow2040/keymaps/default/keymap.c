#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┤---│
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───|───┼───┤---│
     * │ 0 | . │ + │ENT│
     * └───┴───┴───┴───┘
     * Plus and Enter to toggle num lock
     */
    [0] = LAYOUT_numpad_4x4(
        KC_P0,     KC_P1,   KC_P4,   KC_P7,
        KC_PDOT,   KC_P2,   KC_P5,   KC_P8,
        KC_PPLS,   KC_P3,   KC_P6,   KC_P9,
        KC_PENT,   KC_PMNS, KC_PAST, KC_PSLS
    )
};

const uint16_t PROGMEM numlock_combo[] = {KC_PPLS, KC_PENT, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
    COMBO(numlock_combo, KC_NUM_LOCK)
};
