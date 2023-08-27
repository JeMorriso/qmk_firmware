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

#define WARP_ENTER LT(0, KC_ENTER)

// left thumb
#define TL_1 LT(FUN_MED,KC_SPACE)
#define TL_2 WARP_ENTER
#define TL_3 OSL(ONESHOT)

// right thumb
#define TR_1 KC_BACKSPACE
#define TR_2 KC_TAB
#define TR_3 OSL(ONE_DUMB)

// for combos
#define BASE_A CTL_T(KC_A)
#define BASE_B KC_B
#define BASE_C KC_C
#define BASE_D CMD_T(KC_D)
#define BASE_E MEH_T(KC_E)
#define BASE_F SFT_T(KC_F)
#define BASE_G KC_G
#define BASE_H KC_H
#define BASE_I MEH_T(KC_I)
#define BASE_J SFT_T(KC_J)
#define BASE_K CMD_T(KC_K)
#define BASE_L OPT_T(KC_L)
#define BASE_M KC_M
#define BASE_N KC_N
#define BASE_O HYPR_T(KC_O)
#define BASE_P KC_P
#define BASE_Q KC_Q
#define BASE_R KC_R
#define BASE_S OPT_T(KC_S)
#define BASE_T KC_T
#define BASE_U KC_U
#define BASE_V KC_V
#define BASE_W HYPR_T(KC_W)
#define BASE_X KC_X
#define BASE_Y KC_Y
#define BASE_Z KC_Z
#define BASE_SCLN CTL_T(KC_SCLN)
#define BASE_COMMA KC_COMMA
#define BASE_DOT KC_DOT
#define BASE_SLASH KC_SLASH

enum custom_keycodes {
    WARP_ON = SAFE_RANGE, // not exactly sure what SAFE_RANGE does but if not included these macros are buggy / broken
    WARP_OFF,
    WARP_HINT,
    WARP_HINT2,
    WARP_GRID,
    WARP_HIST,
    WARP_SCREEN,
    WARP_HINT_ONE,
    WARP_HINT2_ONE,
    WARP_CLICK,
    OS_FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_ergodox_pretty(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           _______,                                        _______,        KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    KC_TAB,         KC_Q,           HYPR_T(KC_W),   MEH_T(KC_E),    KC_R,           KC_T,           KC_LEFT,                                        KC_UP,          KC_Y,           KC_U,           MEH_T(KC_I),    HYPR_T(KC_O),   KC_P,           KC_BACKSPACE,
    KC_ESCAPE,      CTL_T(KC_A),    OPT_T(KC_S),    CMD_T(KC_D),    SFT_T(KC_F),    KC_G,                                                                           KC_H,           SFT_T(KC_J),    CMD_T(KC_K),    OPT_T(KC_L),    CTL_T(KC_SCLN), KC_QUOTE,
    OSM(MOD_LSFT),  KC_Z,           KC_X,           KC_C,           KC_V,           OPT_T(KC_B),    KC_RIGHT,                                       KC_DOWN,        KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       OSM(MOD_LSFT),
    WARP_ENTER,     KC_LBRC,        KC_RBRC,        WARP_ON,        OSL_OSL,                                                                                                        OSL_OSR,        MEH(KC_R),      KC_EQUAL,       KC_BACKSLASH,   KC_DELETE,
                                                                                                    WARP_ON,        _______,        TG(FUN_MED),    MEH(KC_R),
                                                                                                                    QK_AREP,        _______,
                                                                              LT(FUN_MED,KC_SPACE), WARP_ENTER,     QK_REP,         CW_TOGG,        KC_TAB,         KC_BACKSPACE
  ),
  [WARP] = LAYOUT_ergodox_pretty(
    _______,        _______,        _______,        _______,        _______,        _______,        _______,                                        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,        _______,        KC_W,           KC_E,           _______,        _______,        _______,                                        _______,        _______,        _______,        KC_I,           KC_O,           _______,        _______,
    WARP_OFF,       KC_A,           KC_S,           KC_D,           KC_F,           _______,                                                                        _______,        KC_J,           KC_K,           KC_L,           KC_SCLN,        _______,
    _______,        _______,        _______,        _______,        _______,        _______,        _______,                                        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,        _______,        _______,        WARP_OFF,       _______,                                                                                                        _______,        _______,        _______,        _______,        _______,
                                                                                                    WARP_OFF,       _______,        _______,        _______,
                                                                                                                    _______,        _______,
                                                                                    _______,        _______,        _______,        _______,        _______,        _______
  ),
  [FUN_MED] = LAYOUT_ergodox_pretty(
    _______,        _______,        _______,        _______,        _______,        _______,        _______,                                        _______,        _______,        _______,        _______,        _______,        _______,        KC_VOLU,
    _______,        KC_F14,         KC_F15,         LCTL(KC_UP),    LGUI(KC_SPACE), LCTL(KC_F5),    _______,                                        _______,        LALT(KC_F6),    KC_MPRV,        KC_MPLY,        KC_MNXT,        KC_MUTE,        KC_VOLD,
    TO(BASE),       KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    _______,        _______,        _______,        _______,        _______,        _______,        _______,                                        _______,        _______,        _______,        _______,        _______,        _______,        KC_F12,
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

// thumbs
const uint16_t PROGMEM launcher[] = {TL_1, TR_1, COMBO_END};
const uint16_t PROGMEM raycast[] = {TL_1, TR_2, COMBO_END};
const uint16_t PROGMEM warp[]     = {TL_2, TR_1, COMBO_END};
const uint16_t PROGMEM homerow[] = {TL_2, TR_2, COMBO_END};

const uint16_t PROGMEM warp_click[]     = {TL_3, TR_3, COMBO_END};

const uint16_t PROGMEM osm_a[] = {TL_1, BASE_L, COMBO_END};
const uint16_t PROGMEM osm_ac[] = {TL_1, BASE_P, COMBO_END};
const uint16_t PROGMEM osm_acm[] = {TL_1, BASE_Y, COMBO_END};
const uint16_t PROGMEM osm_am[] = {TL_1, BASE_M, COMBO_END};
const uint16_t PROGMEM osm_ams[] = {TL_1, BASE_N, COMBO_END};
const uint16_t PROGMEM osm_as[] = {TL_1, BASE_DOT, COMBO_END};
const uint16_t PROGMEM osm_c[] = {TL_1, BASE_SCLN, COMBO_END};
const uint16_t PROGMEM osm_cm[] = {TL_1, BASE_U, COMBO_END};
const uint16_t PROGMEM osm_cms[] = {TL_1, BASE_H, COMBO_END};
const uint16_t PROGMEM osm_cs[] = {TL_1, BASE_SLASH, COMBO_END};
const uint16_t PROGMEM osm_hyp[] = {TL_1, BASE_O, COMBO_END};
const uint16_t PROGMEM osm_m[] = {TL_1, BASE_K, COMBO_END};
const uint16_t PROGMEM osm_meh[] = {TL_1, BASE_I, COMBO_END};
const uint16_t PROGMEM osm_ms[] = {TL_1, BASE_COMMA, COMBO_END};
const uint16_t PROGMEM osm_s[] = {TL_1, BASE_J, COMBO_END};

const uint16_t PROGMEM warp_hint[] = {TL_2, BASE_X, COMBO_END};
const uint16_t PROGMEM warp_grid[] = {TL_2, BASE_G, COMBO_END};
const uint16_t PROGMEM warp_hist[] = {TL_2, BASE_H, COMBO_END};
const uint16_t PROGMEM warp_screen[] = {TL_2, BASE_S, COMBO_END};
const uint16_t PROGMEM warp_hint_one[] = {TL_2, BASE_L, COMBO_END};

const uint16_t PROGMEM warp_hint2[] = {TL_2, TR_1, BASE_X, COMBO_END};
const uint16_t PROGMEM warp_hint2_one[] = {TL_2, TR_1, BASE_X, COMBO_END};

const uint16_t PROGMEM raycast_windows[] = {BASE_W, TR_2, COMBO_END};

combo_t key_combos[] = {
    COMBO(homerow, MEH(KC_R)),
    COMBO(raycast, LALT(KC_SPACE)),
    COMBO(launcher, MEH(KC_A)),
    COMBO(osm_a, OSM_A),
    COMBO(osm_ac, OSM_AC),
    COMBO(osm_acm, OSM_ACM),
    COMBO(osm_am, OSM_AM),
    COMBO(osm_ams, OSM_AMS),
    COMBO(osm_as, OSM_AS),
    COMBO(osm_c, OSM_C),
    COMBO(osm_cm, OSM_CM),
    COMBO(osm_cms, OSM_CMS),
    COMBO(osm_cs, OSM_CS),
    COMBO(osm_hyp, OSM_HYP),
    COMBO(osm_m, OSM_M),
    COMBO(osm_meh, OSM_MEH),
    COMBO(osm_ms, OSM_MS),
    COMBO(osm_s, OSM_S),
    COMBO(warp, WARP_ON),
    COMBO(warp_click, WARP_CLICK),
    COMBO(warp_hint, WARP_HINT),
    COMBO(warp_grid, WARP_GRID),
    COMBO(warp_hist, WARP_HIST),
    COMBO(warp_screen, WARP_SCREEN),
    COMBO(warp_hint_one, WARP_HINT_ONE),
    COMBO(warp_hint2, WARP_HINT2),
    COMBO(warp_hint2_one, WARP_HINT2_ONE),
    COMBO(raycast_windows, C(G(S(KC_W)))),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case WARP_ON:
            if (record->event.pressed) {
                layer_on(WARP);
                SEND_STRING(SS_LGUI(SS_LALT("c")));
            }
            break;

        case WARP_HINT:
            if (record->event.pressed) {
                layer_on(WARP);
                SEND_STRING(SS_LGUI(SS_LALT("x")));
            }
            break;

        case WARP_HINT2:
            if (record->event.pressed) {
                layer_on(WARP);
                SEND_STRING(SS_LGUI(SS_LALT(SS_LSFT("x"))));
            }
            break;

        case WARP_GRID:
            if (record->event.pressed) {
                layer_on(WARP);
                SEND_STRING(SS_LGUI(SS_LALT("g")));
            }
            break;

        case WARP_HIST:
            if (record->event.pressed) {
                layer_on(WARP);
                SEND_STRING(SS_LGUI(SS_LALT("h")));
            }
            break;

        case WARP_SCREEN:
            if (record->event.pressed) {
                layer_on(WARP);
                SEND_STRING(SS_LGUI(SS_LALT("s")));
            }
            break;

        case WARP_HINT_ONE:
            if (record->event.pressed) {
                SEND_STRING(SS_LGUI(SS_LALT("l")));
            }
            break;

        case WARP_HINT2_ONE:
            if (record->event.pressed) {
                SEND_STRING(SS_LGUI(SS_LALT(SS_LSFT("l"))));
            }
            break;

        case WARP_CLICK:
            if (record->event.pressed) {
                SEND_STRING(SS_LGUI(SS_LALT("c")));
                tap_code(KC_M);
                tap_code(KC_ESC);
            }
            break;

        case WARP_OFF:
            if (record->event.pressed) {
                layer_off(WARP);
                tap_code(KC_ESC);
            }
            break;

        case WARP_ENTER:
            if (record->event.pressed) {
                // key down, is held
                if (record->tap.count == 0) {
                    layer_on(WARP);
                    SEND_STRING(SS_LGUI(SS_LALT("c")));
                    // stop further processing
                    return false;
                }
            } else {
                // key up, was held
                if (record->tap.count == 0) {
                    layer_off(WARP);
                    tap_code(KC_ESC);
                }
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
