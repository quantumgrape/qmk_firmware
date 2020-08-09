#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */
enum custom_keycodes {
    KEY_LULU = SAFE_RANGE,
    KEY_ROCIO,
    KEY_KARL
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case KEY_LULU:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("ʕっ•ᴥ•ʔっ ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case KEY_ROCIO:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("(✿◠‿◠)");
        } else {
            // when keycode QMKBEST is released

        }
        break;
    case KEY_KARL:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("♪♬");
        } else {
            // when keycode QMKBEST is released
            SEND_STRING(" ᕕ(⌐■_■)ᕗ ♪♬");
        }
        break;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_iso_1u(
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,           KC_F12,   KC_PSCR,  MO(2),      KC_DEL,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,          KC_EQL,   KC_DEL,   KC_BSPC,    KC_HOME,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,          KC_RBRC,  KC_ENT,               KC_PGUP,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,          KC_NUHS,                        KC_PGDN,
        KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,          KC_RSFT,            KC_UP,      KC_END,
        KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_RALT,  LT(1, KC_MENU),   KC_RCTL,  KC_LEFT,  KC_DOWN,    KC_RGHT
    ),

    [1] = LAYOUT_iso_1u(
        _______,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,  KC_BRID,  KC_BRIU,  _______,  _______,  _______,  _______,  _______,          _______,  KC_PAUS,  KC_SLCK,    KC_INS,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,          _______,  _______,  _______,    _______,
        _______,  _______,  _______,  _______,  KEY_ROCIO, _______,  _______,  _______,  _______, _______,  _______,  _______,          _______,  _______,              _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KEY_KARL, KEY_LULU,  _______,  _______,         _______,                        _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,          _______,            _______,    _______,
        _______,  _______,  _______,                                _______,                                _______,  KC_TRNS,          _______,  _______,  _______,    _______
    ),

    [2] = LAYOUT_iso_1u(
        _______,  DM_REC1,  DM_REC2,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_TRNS,  _______,
        _______,  DM_PLY1,  DM_PLY2,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  DM_RSTP,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,
        _______,  _______,  _______,  _______,  _______,  _______,  RESET,    _______,  _______,  _______,  _______,  _______,  _______,            RGB_VAI,  RGB_TOG,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  RGB_RMOD, RGB_VAD,  RGB_MOD
    ),
};

