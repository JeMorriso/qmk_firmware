#include QMK_KEYBOARD_H
#include "version.h"

#define BASE 0
#define NAV 1
#define WARP 2
#define MEDIA 3
#define NUM 4
#define SYM 5
#define FUN 6
#define ONESHOT 7
#define MOUSE 8

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
#define TL_1 LT(NAV, KC_SPACE)
#define TL_2 LT(0, KC_ENTER)
#define TL_3 LT(MEDIA, KC_ESC)

// right thumb
#define TR_1 LT(NUM, KC_BACKSPACE)
#define TR_2 LT(SYM, KC_TAB)
#define TR_3 LT(FUN, KC_DELETE)

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
    _______,        _______,        _______,        _______,        _______,        _______,        _______,                                        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,        KC_Q,           HYPR_T(KC_W),   MEH_T(KC_E),    KC_R,           KC_T,           _______,                                        _______,        KC_Y,           KC_U,           MEH_T(KC_I),    HYPR_T(KC_O),   KC_P,           _______,
    _______,        CTL_T(KC_A),    OPT_T(KC_S),    CMD_T(KC_D),    SFT_T(KC_F),    KC_G,                                                                           KC_H,           SFT_T(KC_J),    CMD_T(KC_K),    OPT_T(KC_L),    CTL_T(KC_SCLN), _______,
    _______,        KC_Z,           KC_X,           KC_C,           KC_V,           LT(MOUSE,KC_B), _______,                                        _______,        KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       _______,
    _______,        _______,        _______,        _______,        LT(MEDIA, KC_ESC),                                                                                          LT(FUN, KC_DELETE), _______,        _______,        _______,        _______,
                                                                                                    _______,        _______,        _______,        _______,
                                                                                                                    _______,        _______,
                                                                          LT(NAV, KC_SPACE),       LT(0, KC_ENTER), _______,        _______,        LT(SYM, KC_TAB),  LT(NUM, KC_BACKSPACE)
  ),
  [NAV] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, _______,        KC_HYPR,        KC_MEH,         KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          LSFT(KC_INSERT),LCTL(KC_INSERT),LSFT(KC_DELETE),_______,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_LCTL,        KC_LALT,        KC_LGUI,        KC_LSFT,        KC_NO,                                                                          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_CAPS_LOCK,   KC_TRANSPARENT,
    KC_TRANSPARENT, KC_NO,          KC_RALT,        KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_HOME,        KC_PGDN,        KC_PGUP,        KC_END,         KC_INSERT,      KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                                                                                          KC_DELETE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TAB,         KC_BACKSPACE
  ),
  [WARP] = LAYOUT_ergodox_pretty(
    _______,        _______,        _______,        _______,        _______,        _______,        _______,                                        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,        _______,        KC_W,           KC_E,           _______,        _______,        _______,                                        _______,        _______,        _______,        KC_I,           KC_O,           _______,        _______,
    _______,        KC_A,           KC_S,           KC_D,           KC_F,           _______,                                                                        KC_H,           KC_J,           KC_K,           KC_L,           _______,        _______,
    _______,        _______,        _______,        _______,        _______,        KC_B,           _______,                                        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,        _______,        _______,        _______,        WARP_OFF,                                                                                                    LT(FUN, KC_COMMA), _______,        _______,        _______,        _______,
                                                                                                    _______,        _______,        _______,        _______,
                                                                                                                    _______,        _______,
                                                                                    MO(MOUSE),      _______,        _______,        _______,        LT(SYM, KC_DOT), LT(NUM, KC_M)
  ),
  [MEDIA] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, _______,        KC_HYPR,        KC_MEH,         KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, _______,        _______,        _______,        _______,        _______,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_LCTL,        KC_LALT,        KC_LGUI,        KC_LSFT,        KC_NO,                                                                          KC_NO,          KC_MEDIA_PREV_TRACK,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT,
    KC_TRANSPARENT, KC_NO,          KC_RALT,        KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_AUDIO_MUTE,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE
  ),
  [NUM] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_LBRC,        KC_7,           KC_8,           KC_9,           KC_RBRC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_MEH,         KC_HYPR,        _______,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_QUOTE,       KC_4,           KC_5,           KC_6,           KC_EQUAL,                                                                       KC_NO,          KC_LSFT,        KC_LGUI,        KC_LALT,        KC_LCTL,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_BACKSLASH,   KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_RALT,        KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_DOT,                                                                                                         KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_0,           KC_MINUS,       KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT
  ),
  [SYM] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_LCBR,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RCBR,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_MEH,         KC_HYPR,        _______,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_DQUO,        KC_DLR,         KC_PERC,        KC_CIRC,        KC_PLUS,                                                                        KC_NO,          KC_LSFT,        KC_LGUI,        KC_LALT,        KC_LCTL,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TILD,        KC_EXLM,        KC_AT,          KC_HASH,        KC_PIPE,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_RALT,        KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LPRN,                                                                                                        KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_RPRN,        KC_UNDS,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO
  ),
  [FUN] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F12,         KC_F7,          KC_F8,          KC_F9,          _______,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_MEH,         KC_HYPR,        _______,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F11,         KC_F4,          KC_F5,          KC_F6,          _______,                                                                        KC_NO,          KC_LSFT,        KC_LGUI,        KC_LALT,        KC_LCTL,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F10,         KC_F1,          KC_F2,          KC_F3,          KC_PAUSE,       KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_RALT,        KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_APPLICATION,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_SPACE,       KC_ENTER,       KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO
  ),
  [ONESHOT] = LAYOUT_ergodox_pretty(
    _______,        _______,        _______,        _______,        _______,        _______,        _______,                                        _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,        OSM_AC,         OSM_HYP,        OSM_MEH,        OSM_CM,         OSM_ACM,        _______,                                        _______,        OSM_ACM,        OSM_CM,         OSM_MEH,        OSM_HYP,        OSM_AC,         _______,
    _______,        OSM_C,          OSM_A,          OSM_M,          OSM_S,          OSM_CMS,                                                                        OSM_CMS,        OSM_S,          OSM_M,          OSM_A,          OSM_C,          _______,
    _______,        OSM_CS,         OSM_AS,         OSM_MS,         OSM_AM,         OSM_AMS,        _______,                                        _______,        OSM_AMS,        OSM_AM,         OSM_MS,         OSM_AS,         OSM_CS,         _______,
    _______,        _______,        _______,        _______,        _______,                                                                                                        _______,        _______,        _______,        _______,        _______,
                                                                                                    _______,        _______,        _______,        _______,
                                                                                                                    _______,        _______,
                                                                                    _______,        _______,        _______,        _______,        _______,        _______
  ),
  [MOUSE] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, _______,        KC_HYPR,        KC_MEH,         KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          LSFT(KC_INSERT),LCTL(KC_INSERT),LSFT(KC_DELETE),_______,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_LCTL,        KC_LALT,        KC_LGUI,        KC_LSFT,        KC_NO,                                                                          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_TRANSPARENT, KC_NO,
    KC_TRANSPARENT, KC_NO,          KC_RALT,        KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_WH_RIGHT, KC_MS_WH_UP,    KC_MS_WH_DOWN,  KC_MS_WH_LEFT,  KC_TRANSPARENT, KC_NO,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                                                                                          KC_MS_BTN3,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN2,     KC_MS_BTN1
  ),
};

const uint16_t PROGMEM esc[] = {KC_Q, HYPR_T(KC_W), COMBO_END};
const uint16_t PROGMEM apostrophe[] = {HYPR_T(KC_O), KC_P, COMBO_END};
const uint16_t PROGMEM double_quote[] = {SFT_T(KC_F), HYPR_T(KC_O), KC_P, COMBO_END};

// thumbs
const uint16_t PROGMEM launcher[] = {TL_1, TR_1, COMBO_END};
const uint16_t PROGMEM raycast[] = {TL_1, TR_2, COMBO_END};
const uint16_t PROGMEM warp[]     = {TL_2, TR_1, COMBO_END};
const uint16_t PROGMEM homerow[] = {TL_2, TR_2, COMBO_END};

const uint16_t PROGMEM warp_click[]     = {TL_3, TR_3, COMBO_END};
const uint16_t PROGMEM caps_word[]     = {TL_3, TR_1, COMBO_END};

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

const uint16_t PROGMEM next_window[] = {BASE_U, BASE_I, BASE_O, COMBO_END};
const uint16_t PROGMEM prev_window[] = {KC_7, KC_8, KC_9, COMBO_END};
const uint16_t PROGMEM next_window_app[] = {BASE_I, BASE_O, BASE_P, COMBO_END};
const uint16_t PROGMEM prev_window_app[] = {KC_8, KC_9, KC_0, COMBO_END};

combo_t key_combos[] = {
    COMBO(esc, KC_ESC),
    COMBO(apostrophe, KC_QUOTE),
    COMBO(double_quote, KC_DQUO),
    COMBO(homerow, MEH(KC_R)),
    COMBO(raycast, LALT(KC_SPACE)),
    COMBO(launcher, MEH(KC_A)),
    COMBO(caps_word, CW_TOGG),
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
    COMBO(next_window, MEH(KC_N)),
    COMBO(prev_window, MEH(KC_P)),
    COMBO(next_window_app, HYPR(KC_N)),
    COMBO(prev_window_app, HYPR(KC_P)),
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

bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SFT_T(KC_F):
        case SFT_T(KC_J):
        case TR_1:
        case TR_2:
        case TL_1:
        case TL_2:
            // Immediately select the hold action when another key is tapped.
            return true;
        default:
            // Do not select the hold action when another key is tapped.
            return false;
    }
}

// not working
/* bool get_combo_must_tap(uint16_t index, combo_t *combo) { */
/*     // If you want all combos to be tap-only, just uncomment the next line */
/*     // return true */
/**/
/*     // If you want *all* combos, that have Mod-Tap/Layer-Tap/Momentary keys in its chord, to be tap-only, this is for you: */
/*     uint16_t key; */
/*     uint8_t idx = 0; */
/*     while ((key = pgm_read_word(&combo->keys[idx])) != COMBO_END) { */
/*         switch (key) { */
/*             case QK_MOD_TAP...QK_MOD_TAP_MAX: */
/*             case QK_LAYER_TAP...QK_LAYER_TAP_MAX: */
/*             case QK_MOMENTARY...QK_MOMENTARY_MAX: */
/*                 return true; */
/*         } */
/*         idx += 1; */
/*     } */
/*     return false; */
/* } */
