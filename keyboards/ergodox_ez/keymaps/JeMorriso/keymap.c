#include QMK_KEYBOARD_H
#include "version.h"

#define BASE 0
#define FUN_MED 1
#define ONESHOT 2
#define WARP 3

#define OSM_A   OSM(MOD_LALT)
#define OSM_AC  OSM(MOD_LALT|MOD_LCTL)
#define OSM_ACM OSM(MOD_LALT|MOD_LCTL|MOD_LGUI)
#define OSM_AM  OSM(MOD_LALT|MOD_LGUI)
#define OSM_AMS OSM(MOD_LALT|MOD_LGUI|MOD_LSFT)
#define OSM_AS  OSM(MOD_LALT|MOD_LSFT)
#define OSM_C   OSM(MOD_LCTL)
#define OSM_CM  OSM(MOD_LCTL|MOD_LGUI)
#define OSM_CMS OSM(MOD_LCTL|MOD_LGUI|MOD_LSFT)
#define OSM_CS  OSM(MOD_LCTL|MOD_LSFT)
#define OSM_HYP OSM(MOD_HYPR)
#define OSM_M   OSM(MOD_LGUI)
#define OSM_MEH OSM(MOD_MEH)
#define OSM_MS  OSM(MOD_LGUI|MOD_LSFT)
#define OSM_S   OSM(MOD_LSFT)

enum custom_keycodes {
    ST_MACRO_0,
    WARP_ON,
    WARP_OFF
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_ergodox_pretty(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_BACKSLASH,                                   KC_EQUAL,       KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    KC_TAB,         KC_Q,           HYPR_T(KC_W),   MEH_T(KC_E),    KC_R,           KC_T,           KC_LBRC,                                        KC_RBRC,        KC_Y,           KC_U,           MEH_T(KC_I),    HYPR_T(KC_O),   KC_P,           KC_BACKSPACE,
    KC_ESCAPE,      CTL_T(KC_A),    OPT_T(KC_S),    CMD_T(KC_D),    SFT_T(KC_F),    KC_G,                                                                           KC_H,           SFT_T(KC_J),    CMD_T(KC_K),    OPT_T(KC_L),    CTL_T(KC_SCLN), KC_QUOTE,
    OSM(MOD_LSFT),  KC_Z,           KC_X,           KC_C,           KC_V,           OPT_T(KC_B),    OSM(MOD_MEH),                                   OSM(MOD_HYPR),  KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_ENTER,
    _______,        ST_MACRO_0,     _______,        WARP_ON,        OSL(2),                                                                                                         OSL(2),         MEH(KC_R),      _______,        _______,        KC_DELETE,
                                                                                                    OSM(MOD_LALT),  _______,        _______,        TG(1),
                                                                                                                    QK_AREP,        _______,
                                                                                    LT(1,KC_SPACE), OSM(MOD_LGUI),  QK_REP,         CW_TOGG,        OSM(MOD_LCTL),  OSM(MOD_LSFT)
  ),
  [FUN_MED] = LAYOUT_ergodox_pretty(
    _______,        _______,        _______,        _______,        _______,        _______,        _______,                                        _______,        _______,        _______,        _______,        _______,        _______,        KC_VOLU,
    _______,        KC_F14,         KC_F15,         LCTL(KC_UP),    LGUI(KC_SPACE), LCTL(KC_F5),    _______,                                        _______,        LALT(KC_F6),    KC_MPRV,        KC_MPLY,        KC_MNXT,        KC_MUTE,        KC_VOLD,
    TO(BASE),       KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    _______,        _______,        _______,        _______,        _______,        _______,        _______,                                        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,        _______,        _______,        _______,        _______,                                                                                                        _______,        _______,        _______,        _______,        _______,
                                                                                                    _______,        _______,        _______,        _______,
                                                                                                                    _______,        _______,
                                                                                    _______,        _______,        _______,        _______,        _______,        _______
  ),
  [ONESHOT] = LAYOUT_ergodox_pretty(
    _______,        _______,        _______,        _______,        _______,        _______,        _______,                                        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    OSL(1),         OSM_AC,         OSM_HYP,        OSM_MEH,        OSM_CM,         OSM_ACM,        _______,                                        _______,        OSM_ACM,        OSM_CM,         OSM_MEH,        OSM_HYP,        OSM_AC,         OSL(1),
    OSL(1),         OSM_C,          OSM_A,          OSM_M,          OSM_S,          OSM_CMS,                                                                        OSM_CMS,        OSM_S,          OSM_M,          OSM_A,          OSM_C,          OSL(1),
    _______,        OSM_CS,         OSM_AS,         OSM_MS,         OSM_AM,         OSM_AMS,        _______,                                        _______,        OSM_AMS,        OSM_AM,         OSM_MS,         OSM_AS,         OSM_CS,         _______,
    _______,        _______,        _______,        _______,        _______,                                                                                                        _______,        _______,        _______,        _______,        _______,
                                                                                                    _______,        _______,        _______,        _______,
                                                                                                                    _______,        _______,
                                                                                    _______,        _______,        _______,        _______,        _______,        _______
  ),
  [WARP] = LAYOUT_ergodox_pretty(
    _______,        _______,        _______,        _______,        _______,        _______,        _______,                                        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,        _______,        KC_W,           KC_E,           _______,        _______,        _______,                                        _______,        _______,        _______,        KC_I,           KC_O,           _______,        _______,
    WARP_OFF,       KC_A,           KC_S,           KC_D,           KC_F,           _______,                                                                        _______,        KC_J,           KC_K,           KC_L,           KC_SCLN,        _______,
    _______,        _______,        _______,        _______,        _______,        _______,        _______,                                        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,        _______,        _______,        WARP_OFF,       _______,                                                                                                        _______,        _______,        _______,        _______,        _______,
                                                                                                    _______,        _______,        _______,        _______,
                                                                                                                    _______,        _______,
                                                                                    _______,        _______,        _______,        _______,        _______,        _______
  ),
};

const uint16_t PROGMEM launcher[] = { LT(1,KC_SPACE), OSM(MOD_LSFT), COMBO_END};
const uint16_t PROGMEM warp[] = { LT(1,KC_SPACE), OSM(MOD_LCTL), COMBO_END};
const uint16_t PROGMEM homerow[] = { OSM(MOD_LGUI), OSM(MOD_LCTL), COMBO_END};
const uint16_t PROGMEM raycast[] = { LT(1,KC_SPACE), OSL(2), COMBO_END};
const uint16_t PROGMEM toggle_1[] = { OSM(MOD_LSFT), OSM(MOD_LGUI), COMBO_END};

combo_t key_combos[5] = {
    COMBO(launcher, MEH(KC_A)),
    COMBO(warp, WARP_ON),
    COMBO(homerow, MEH(KC_R)),
    COMBO(raycast, LALT(KC_SPACE)),
    COMBO(toggle_1, TG(1)),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
        if (record->event.pressed) {
            SEND_STRING("JER");
        }
        break;

    case WARP_ON:
        if (record->event.pressed) {
            layer_on(WARP);
            SEND_STRING(SS_LCTL(SS_LALT(SS_LSFT("w"))));
        }
        break;

    case WARP_OFF:
        if (record->event.pressed) {
            layer_off(WARP);
            tap_code(KC_ESC);
        }
        break;
  }
  return true;
}

