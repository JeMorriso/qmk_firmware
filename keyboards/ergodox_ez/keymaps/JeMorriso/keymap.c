#include QMK_KEYBOARD_H
#include "version.h"

#define BASE 0
#define WARP 1
#define FUN_MED 2
#define ONESHOT 3
#define ONE_DUMB 4

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

#define OSL_OSL   OSL(ONESHOT)
#define OSL_OSR   OSL(ONE_DUMB)

// left thumb
#define TL_1 LT(FUN_MED,KC_SPACE)
#define TL_2 KC_ENTER
#define TL_3 OSL(ONESHOT)

// right thumb
#define TR_1 KC_BACKSPACE
#define TR_2 KC_TAB
#define TR_3 OSL(ONE_DUMB)

enum custom_keycodes {
    WARP_ON = SAFE_RANGE, // not exactly sure what SAFE_RANGE does but if not included these macros are buggy / broken
    WARP_OFF,
    OS_FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_ergodox_pretty(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           _______,                                        _______,        KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    KC_TAB,         KC_Q,           HYPR_T(KC_W),   MEH_T(KC_E),    KC_R,           KC_T,           KC_UP,                                          KC_LEFT,        KC_Y,           KC_U,           MEH_T(KC_I),    HYPR_T(KC_O),   KC_P,           KC_BACKSPACE,
    KC_ESCAPE,      CTL_T(KC_A),    OPT_T(KC_S),    CMD_T(KC_D),    SFT_T(KC_F),    KC_G,                                                                           KC_H,           SFT_T(KC_J),    CMD_T(KC_K),    OPT_T(KC_L),    CTL_T(KC_SCLN), KC_QUOTE,
    OSM(MOD_LSFT),  KC_Z,           KC_X,           KC_C,           KC_V,           OPT_T(KC_B),    KC_DOWN,                                        KC_RIGHT,       KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       OSM(MOD_LSFT),
    _______,        KC_LBRC,        KC_RBRC,        _______,        OSL_OSL,                                                                                                        OSL_OSR,        _______,        KC_EQUAL,       KC_BACKSLASH,   KC_DELETE,
                                                                                                    WARP_ON,        _______,        TG(FUN_MED),    MEH(KC_R),
                                                                                                                    QK_AREP,        _______,
                                                                              LT(FUN_MED,KC_SPACE), KC_ENTER,       QK_REP,         CW_TOGG,        KC_TAB,         KC_BACKSPACE
  ),
  [WARP] = LAYOUT_ergodox_pretty(
    _______,        _______,        _______,        _______,        _______,        _______,        _______,                                        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,        _______,        KC_W,           KC_E,           _______,        _______,        _______,                                        _______,        _______,        _______,        KC_I,           KC_O,           _______,        _______,
    WARP_OFF,       KC_A,           KC_S,           KC_D,           KC_F,           _______,                                                                        _______,        KC_J,           KC_K,           KC_L,           KC_SCLN,        _______,
    _______,        _______,        _______,        _______,        _______,        _______,        _______,                                        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,        _______,        _______,        _______,        _______,                                                                                                        _______,        _______,        _______,        _______,        _______,
                                                                                                    WARP_OFF,       _______,        _______,        _______,
                                                                                                                    _______,        _______,
                                                                                    _______,        _______,        _______,        _______,        _______,        _______
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
    _______,        OSM_AC,         OSM_HYP,        OSM_MEH,        OSM_CM,         OSM_ACM,        _______,                                        _______,        OSM_ACM,        OSM_CM,         OSM_MEH,        OSM_HYP,        OSM_AC,         _______,
    OSL(FUN_MED),   OSM_C,          OSM_A,          OSM_M,          OSM_S,          OSM_CMS,                                                                        OSM_CMS,        OSM_S,          OSM_M,          OSM_A,          OSM_C,          OSL(FUN_MED),
    _______,        OSM_CS,         OSM_AS,         OSM_MS,         OSM_AM,         OSM_AMS,        _______,                                        _______,        OSM_AMS,        OSM_AM,         OSM_MS,         OSM_AS,         OSM_CS,         _______,
    _______,        _______,        _______,        _______,        _______,                                                                                                        _______,        _______,        _______,        _______,        _______,
                                                                                                    _______,        _______,        _______,        _______,
                                                                                                                    _______,        _______,
                                                                                    _______,        _______,        _______,        _______,        _______,        _______
  ),
  [ONE_DUMB] = LAYOUT_ergodox_pretty(
    _______,        _______,        _______,        _______,        _______,        _______,        _______,                                        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,        OSM_AC,         OSM_HYP,        OSM_MEH,        OSM_CM,         OSM_ACM,        _______,                                        _______,        OSM_ACM,        OSM_CM,         OSM_MEH,        OSM_HYP,        OSM_AC,         _______,
    OSL(FUN_MED),   OSM_C,          OSM_A,          OSM_M,          OSM_S,          OSM_CMS,                                                                        OSM_CMS,        OSM_S,          OSM_M,          OSM_A,          OSM_C,          OSL(FUN_MED),
    _______,        OSM_CS,         OSM_AS,         OSM_MS,         OSM_AM,         OSM_AMS,        _______,                                        _______,        OSM_AMS,        OSM_AM,         OSM_MS,         OSM_AS,         OSM_CS,         _______,
    _______,        _______,        _______,        _______,        _______,                                                                                                        _______,        _______,        _______,        _______,        _______,
                                                                                                    _______,        _______,        _______,        _______,
                                                                                                                    _______,        _______,
                                                                                    _______,        _______,        _______,        _______,        _______,        _______
  ),
};

const uint16_t PROGMEM enter[]   = {TL_1, TR_1, COMBO_END};
const uint16_t PROGMEM homerow[] = {TL_1, TR_2, COMBO_END};

const uint16_t PROGMEM warp[]     = {TL_2, TR_1, COMBO_END};
const uint16_t PROGMEM launcher[] = {TL_2, TR_2, COMBO_END};

const uint16_t PROGMEM raycast[] = {TL_1, TR_3, COMBO_END};

/* const uint16_t PROGMEM raycast[] = { LT(1,KC_SPACE), OSM(MOD_LCTL), COMBO_END}; */
/* const uint16_t PROGMEM toggle_1[] = { OSL(ONESHOT), OSM(MOD_LCTL), COMBO_END}; */
/* COMBO(raycast, LALT(KC_SPACE)), */
/* COMBO(toggle_1, TG(1)), */

combo_t key_combos[] = {
    COMBO(enter, KC_ENTER), COMBO(homerow, MEH(KC_R)), COMBO(warp, WARP_ON), COMBO(launcher, MEH(KC_A)), COMBO(raycast, LALT(KC_SPACE)),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
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

static const uint8_t max_led_value = 20;

void led_1_on(void) {
    ergodox_right_led_1_on();
    ergodox_right_led_1_set(max_led_value);
}

void led_2_on(void) {
    ergodox_right_led_2_on();
    ergodox_right_led_2_set(max_led_value);
}

void led_3_on(void) {
    ergodox_right_led_3_on();
    ergodox_right_led_3_set(max_led_value);
}

void led_1_off(void) {
    ergodox_right_led_1_off();
}

void led_2_off(void) {
    ergodox_right_led_2_off();
}

void led_3_off(void) {
    ergodox_right_led_3_off();
}

layer_state_t layer_state_set_user(layer_state_t state) {
    uint8_t layer = get_highest_layer(state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
        case 1:
            led_1_on();
            break;
        case 2:
            led_2_on();
            break;
        case 3:
            led_3_on();
            break;
        case 4:
            led_1_on();
            led_2_on();
            break;
        case 5:
            led_1_on();
            led_3_on();
            break;
        case 6:
            led_2_on();
            led_3_on();
            break;
        case 7:
            led_1_on();
            led_2_on();
            led_3_on();
            break;
        default:
            break;
    }
    return state;
};
