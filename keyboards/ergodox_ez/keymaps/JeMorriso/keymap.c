#include QMK_KEYBOARD_H
#include "version.h"

#define BASE 0
#define NAV 1
#define WARP 2
#define MEDIA 3
#define NUM 4
#define SYM 5
#define FUN 6
/* #define ONESHOT 7 */

#define XXX KC_NO
#define ___ KC_TRNS

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

#define WARP_TAB LT(0, KC_TAB)

// left thumb
#define TL_1 LT(NAV, KC_SPACE)
#define TL_2 LT(0, KC_TAB)
#define TL_3 LT(MEDIA, KC_ESC)

// right thumb
#define TR_1 LT(NUM, KC_BACKSPACE)
#define TR_2 LT(SYM, KC_ENTER)
#define TR_3 LT(FUN, KC_DELETE)

/* #define COMBO_THUMB_BASE_LEFT LT(NAV, KC_SPACE) */
/* #define COMBO_THUMB_BASE_RIGHT LT(NUM, KC_BACKSPACE) */
/* #define COMBO_THUMB_NAV LT(NAV, KC_SPACE) */
/* #define COMBO_THUMB_MEDIA LT(NAV, KC_SPACE) */
/* #define COMBO_THUMB_NUM LT(SYM, KC_ENTER) */
/* #define COMBO_THUMB_FUN LT(FUN, KC_DELETE) */

// for combos
#define BASE_A CTL_T(KC_A)
#define BASE_B KC_B
#define BASE_C KC_C
#define BASE_D KC_D
#define BASE_E CMD_T(KC_E)
#define BASE_F MEH_T(KC_F)
#define BASE_G KC_G
#define BASE_H KC_H
#define BASE_I OPT_T(KC_I)
#define BASE_J KC_J
#define BASE_K KC_K
#define BASE_L KC_L
#define BASE_M KC_M
#define BASE_N SFT_T(KC_N)
#define BASE_O CTL_T(KC_O)
#define BASE_P KC_P
#define BASE_Q KC_Q
#define BASE_R OPT_T(KC_R)
#define BASE_S CMD_T(KC_S)
#define BASE_T SFT_T(KC_T)
#define BASE_U MEH_T(KC_U)
#define BASE_V KC_V
#define BASE_W HYPR_T(KC_W)
#define BASE_X KC_X
#define BASE_Y HYPR_T(KC_Y)
#define BASE_Z KC_Z
#define BASE_QUOTE KC_QUOTE
#define BASE_COMMA KC_COMMA
#define BASE_DOT KC_DOT
#define BASE_SLASH KC_SLASH
#define BASE_ENTER LT(SYM, KC_ENTER)
#define BASE_SPACE LT(NAV, KC_SPACE)
#define BASE_ESC LT(MEDIA, KC_ESC)
#define BASE_TAB LT(0, KC_TAB)
#define BASE_BACKSPACE LT(NUM, KC_BACKSPACE)
#define BASE_DELETE LT(FUN, KC_DELETE)

enum custom_keycodes {
    RGB_SLD = SAFE_RANGE,
    WARP_ON,
    WARP_OFF,
    WARP_HINT,
    WARP_HINT2,
    WARP_GRID,
    WARP_HIST,
    WARP_SCREEN,
    WARP_HINT_ONE,
    WARP_HINT2_ONE,
    WARP_CLICK,
    OS_FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_ergodox_pretty(
    ___,            KC_Q,           HYPR_T(KC_W),   MEH_T(KC_F),    KC_P,           KC_B,           ___,                                            ___,            KC_J,           KC_L,           MEH_T(KC_U),    HYPR_T(KC_Y),   KC_QUOTE,       ___,
    ___,            CTL_T(KC_A),    OPT_T(KC_R),    CMD_T(KC_S),    SFT_T(KC_T),    KC_G,           ___,                                            ___,            KC_M,           SFT_T(KC_N),    CMD_T(KC_E),    OPT_T(KC_I),    CTL_T(KC_O),    ___,
    ___,            KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_SLASH,       ___,
    ___,            ___,            ___,            ___,     LT(MEDIA, KC_ESC), LT(NAV, KC_SPACE), LT(0, KC_TAB),                       LT(SYM, KC_ENTER), LT(NUM, KC_BACKSPACE), LT(FUN, KC_DELETE), ___,          ___,            ___,            ___,
    ___,            ___,            ___,            ___,            ___,                                                                                                            ___,            ___,            ___,            ___,            ___,
                                                                                                    ___,            ___,            ___,            ___,
                                                                                                                    ___,            ___,
                                                                                    ___,            ___,            ___,            ___,            ___,            ___
  ),
  [NAV] = LAYOUT_ergodox_pretty(
    ___,            XXX,            KC_HYPR,        KC_MEH,         XXX,            XXX,            ___,                                            ___,            XXX,            LSFT(KC_INSERT),LCTL(KC_INSERT),LSFT(KC_DELETE),XXX,            ___,
    ___,            KC_LCTL,        KC_LALT,        KC_LGUI,        KC_LSFT,        XXX,            ___,                                            ___,            KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_CAPS_LOCK,   ___,
    ___,            XXX,            XXX,            XXX,            XXX,            XXX,                                                                            KC_HOME,        KC_PGDN,        KC_PGUP,        KC_END,         KC_INSERT,      ___,
    ___,            ___,            ___,            ___,            XXX,            XXX,            XXX,                                            XXX,            XXX,            XXX,            ___,            ___,            ___,            ___,
    ___,            ___,            ___,            ___,            ___,                                                                                                            ___,            ___,            ___,            ___,            ___,
                                                                                                    ___,            ___,            ___,            ___,
                                                                                                                    ___,            ___,
                                                                                    ___,            ___,            ___,            ___,            ___,            ___
  ),
  [WARP] = LAYOUT_ergodox_pretty(
    ___,            ___,            ___,            ___,            ___,            ___,            ___,                                            ___,            ___,            ___,            ___,            ___,            ___,            ___,
    ___,            ___,            ___,            ___,            ___,            ___,            ___,                                            ___,            ___,            KC_N,           KC_E,           KC_I,           ___,            ___,
    ___,            ___,            ___,            ___,            ___,            ___,                                                                            ___,            ___,            ___,            ___,            ___,            ___,
    ___,            ___,            ___,            ___,            WARP_OFF,       KC_SPACE,       ___,                                            KC_KP_ENTER,    KC_BACKSPACE,   KC_DELETE,      ___,            ___,            ___,            ___,
    ___,            ___,            ___,            ___,            ___,                                                                                                            ___,            ___,            ___,            ___,            ___,
                                                                                                    ___,            ___,            ___,            ___,
                                                                                                                    ___,            ___,
                                                                                    ___,            ___,            ___,            ___,            ___,            ___
  ),
  [MEDIA] = LAYOUT_ergodox_pretty(
    ___,            XXX,            KC_HYPR,        KC_MEH,         XXX,            XXX,            ___,                                            ___,            XXX,            XXX,            XXX,            XXX,            XXX,            ___,
    ___,            KC_LCTL,        KC_LALT,        KC_LGUI,        KC_LSFT,        XXX,            ___,                                            ___,            KC_MPRV,        KC_VOLD,        KC_VOLU,        KC_MNXT,        XXX,            ___,
    ___,            XXX,            XXX,            XXX,            XXX,            XXX,                                                                            XXX,            XXX,            XXX,            XXX,            XXX,            ___,
    ___,            ___,            ___,            ___,            XXX,            XXX,            XXX,                                         KC_MEDIA_STOP, KC_MEDIA_PLAY_PAUSE, KC_AUDIO_MUTE, ___,            ___,            ___,            ___,
    ___,            ___,            ___,            ___,            ___,                                                                                                            ___,            ___,            ___,            ___,            ___,
                                                                                                    ___,            ___,            ___,            ___,
                                                                                                                    ___,            ___,
                                                                                    ___,            ___,            ___,            ___,            ___,            ___
  ),
  [NUM] = LAYOUT_ergodox_pretty(
    ___,            KC_LBRC,        KC_7,           KC_8,           KC_9,           KC_RBRC,        ___,                                            ___,            XXX,            XXX,            KC_MEH,         KC_HYPR,        XXX,            ___,
    ___,            KC_SCLN,        KC_4,           KC_5,           KC_6,           KC_EQUAL,       ___,                                            ___,            XXX,            KC_LSFT,        KC_LGUI,        KC_LALT,        KC_LCTL,        ___,
    ___,            KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_BACKSLASH,                                                                   XXX,            XXX,            XXX,            XXX,            XXX,            ___,
    ___,            ___,            ___,            ___,            KC_DOT,         KC_0,           KC_MINUS,                                       XXX,            XXX,            XXX,            ___,            ___,            ___,            ___,
    ___,            ___,            ___,            ___,            ___,                                                                                                            ___,            ___,            ___,            ___,            ___,
                                                                                                    ___,            ___,            ___,            ___,
                                                                                                                    ___,            ___,
                                                                                    ___,            ___,            ___,            ___,            ___,            ___
  ),
  [SYM] = LAYOUT_ergodox_pretty(
    ___,            KC_LCBR,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RCBR,        ___,                                            ___,            XXX,            XXX,            KC_MEH,         KC_HYPR,        XXX,            ___,
    ___,            KC_COLN,         KC_DLR,         KC_PERC,        KC_CIRC,        KC_PLUS,        ___,                                            ___,            XXX,            KC_LSFT,        KC_LGUI,        KC_LALT,        KC_LCTL,        ___,
    ___,            KC_TILD,        KC_EXLM,        KC_AT,          KC_HASH,        KC_PIPE,                                                                        XXX,            XXX,            XXX,            XXX,            XXX,           ___,
    ___,            ___,            ___,            ___,            KC_LPRN,        KC_RPRN,        KC_UNDS,                                        XXX,            XXX,            XXX,            ___,            ___,            ___,            ___,
    ___,            ___,            ___,            ___,            ___,                                                                                                            ___,            ___,            ___,            ___,            ___,
                                                                                                    ___,            ___,            ___,            ___,
                                                                                                                    ___,            ___,
                                                                                    ___,            ___,            ___,            ___,            ___,            ___
  ),
  [FUN] = LAYOUT_ergodox_pretty(
    ___,            KC_F12,         KC_F7,          KC_F8,          KC_F9,          ___,            ___,                                            ___,            XXX,            XXX,            KC_MEH,         KC_HYPR,        XXX,            ___,
    ___,            KC_F11,         KC_F4,          KC_F5,          KC_F6,          ___,            ___,                                            ___,            XXX,            KC_LSFT,        KC_LGUI,        KC_LALT,        KC_LCTL,        ___,
    ___,            KC_F10,         KC_F1,          KC_F2,          KC_F3,          ___,                                                                            XXX,            XXX,            XXX,            XXX,            XXX,            ___,
    ___,            XXX,            XXX,            XXX,            XXX,            XXX,            XXX,                                            XXX,            XXX,            XXX,            ___,            ___,            ___,            ___,
    ___,            ___,            ___,            ___,            ___,                                                                                                            ___,            ___,            ___,            ___,            ___,
                                                                                                    ___,            ___,            ___,            ___,
                                                                                                                    ___,            ___,
                                                                                    ___,            ___,            ___,            ___,            ___,            ___
  ),
  /* [ONESHOT] = LAYOUT_ergodox_pretty( */
  /*   ___,            ___,            ___,            ___,            ___,            ___,            ___,                                            ___,            ___,            ___,            ___,            ___,            ___,            ___,     */
  /*   ___,            OSM_AC,         OSM_HYP,        OSM_MEH,        OSM_CM,         OSM_ACM,        ___,                                            ___,            OSM_ACM,        OSM_CM,         OSM_MEH,        OSM_HYP,        OSM_AC,         ___,     */
  /*   ___,            OSM_C,          OSM_A,          OSM_M,          OSM_S,          OSM_CMS,                                                                        OSM_CMS,        OSM_S,          OSM_M,          OSM_A,          OSM_C,          ___,     */
  /*   ___,            OSM_CS,         OSM_AS,         OSM_MS,         OSM_AM,         OSM_AMS,        ___,                                            ___,            OSM_AMS,        OSM_AM,         OSM_MS,         OSM_AS,         OSM_CS,         ___,     */
  /*   ___,            ___,            ___,            ___,            ___,                                                                                                            ___,            ___,            ___,            ___,            ___,     */
  /*                                                                                                   ___,            ___,            ___,            ___,     */
  /*                                                                                                                   ___,            ___,     */
  /*                                                                                   ___,            ___,            ___,            ___,            ___,            _______ */
  /* ), */
};

/* enum combos { */
/*     ne_open_bracket, */
/*     ei_close_bracket, */
/* } */

/* const uint16_t PROGMEM esc[] = {KC_Q, HYPR_T(KC_W), COMBO_END}; */
/* const uint16_t PROGMEM semicolon[] = {HYPR_T(KC_Y), KC_QUOTE, COMBO_END}; */
/* const uint16_t PROGMEM colon[] = {SFT_T(KC_F), HYPR_T(KC_O), KC_P, COMBO_END}; */

// thumbs
const uint16_t PROGMEM launcher[] = {TL_1, TR_1, COMBO_END};
const uint16_t PROGMEM raycast[] = {TL_1, TR_2, COMBO_END};
const uint16_t PROGMEM warp[]     = {TL_2, TR_1, COMBO_END};
const uint16_t PROGMEM homerow[] = {TL_2, TR_2, COMBO_END};

/* const uint16_t PROGMEM warp_click[]     = {TL_3, TR_3, COMBO_END}; */
const uint16_t PROGMEM caps_word[]     = {TL_3, TR_1, COMBO_END};

/* const uint16_t PROGMEM osm_a[] = {TL_1, BASE_L, COMBO_END}; */
/* const uint16_t PROGMEM osm_ac[] = {TL_1, BASE_P, COMBO_END}; */
/* const uint16_t PROGMEM osm_acm[] = {TL_1, BASE_Y, COMBO_END}; */
/* const uint16_t PROGMEM osm_am[] = {TL_1, BASE_M, COMBO_END}; */
/* const uint16_t PROGMEM osm_ams[] = {TL_1, BASE_N, COMBO_END}; */
/* const uint16_t PROGMEM osm_as[] = {TL_1, BASE_DOT, COMBO_END}; */
/* const uint16_t PROGMEM osm_c[] = {TL_1, BASE_SCLN, COMBO_END}; */
/* const uint16_t PROGMEM osm_cm[] = {TL_1, BASE_U, COMBO_END}; */
/* const uint16_t PROGMEM osm_cms[] = {TL_1, BASE_H, COMBO_END}; */
/* const uint16_t PROGMEM osm_cs[] = {TL_1, BASE_SLASH, COMBO_END}; */
/* const uint16_t PROGMEM osm_hyp[] = {TL_1, BASE_O, COMBO_END}; */
/* const uint16_t PROGMEM osm_m[] = {TL_1, BASE_K, COMBO_END}; */
/* const uint16_t PROGMEM osm_meh[] = {TL_1, BASE_I, COMBO_END}; */
/* const uint16_t PROGMEM osm_ms[] = {TL_1, BASE_COMMA, COMBO_END}; */
/* const uint16_t PROGMEM osm_s[] = {TL_1, BASE_J, COMBO_END}; */

const uint16_t PROGMEM warp_hint[] = {TL_2, BASE_X, COMBO_END};
const uint16_t PROGMEM warp_grid[] = {TL_2, BASE_G, COMBO_END};
const uint16_t PROGMEM warp_hist[] = {TL_2, BASE_H, COMBO_END};
const uint16_t PROGMEM warp_screen[] = {TL_2, BASE_S, COMBO_END};
const uint16_t PROGMEM warp_hint_one[] = {TL_2, BASE_L, COMBO_END};

const uint16_t PROGMEM warp_hint2[] = {TL_2, TR_1, BASE_X, COMBO_END};
const uint16_t PROGMEM warp_hint2_one[] = {TL_2, TR_1, BASE_L, COMBO_END};

const uint16_t PROGMEM raycast_windows[] = {BASE_W, TR_2, COMBO_END};

/* top row + middle row single finger combos */
const uint16_t PROGMEM bang[] = {BASE_Q, BASE_A, COMBO_END};
const uint16_t PROGMEM at_symbol[] = {BASE_W, BASE_R, COMBO_END};
const uint16_t PROGMEM hash[] = {BASE_F, BASE_S, COMBO_END};
const uint16_t PROGMEM dollar[] = {BASE_P, BASE_T, COMBO_END};
const uint16_t PROGMEM percent[] = {BASE_B, BASE_G, COMBO_END};
const uint16_t PROGMEM caret[] = {BASE_J, BASE_M, COMBO_END};
const uint16_t PROGMEM ampersand[] = {BASE_L, BASE_N, COMBO_END};
const uint16_t PROGMEM star[] = {BASE_U, BASE_E, COMBO_END};
const uint16_t PROGMEM colon[] = {BASE_Y, BASE_I, COMBO_END};
const uint16_t PROGMEM semicolon[] = {BASE_QUOTE, BASE_O, COMBO_END};

/* middle row + bottom row single finger combos */
const uint16_t PROGMEM tilde[] = {BASE_A, BASE_Z, COMBO_END};
const uint16_t PROGMEM grave[] = {BASE_R, BASE_X, COMBO_END};
const uint16_t PROGMEM plus[] = {BASE_S, BASE_C, COMBO_END};
const uint16_t PROGMEM equal[] = {BASE_T, BASE_D, COMBO_END};
/* const uint16_t PROGMEM what[] = {BASE_G, BASE_V, COMBO_END}; */
/* const uint16_t PROGMEM what[] = {BASE_M, BASE_K, COMBO_END}; */
const uint16_t PROGMEM dash[] = {BASE_N, BASE_H, COMBO_END};
const uint16_t PROGMEM underscore[] = {BASE_E, BASE_COMMA, COMBO_END};
const uint16_t PROGMEM backslash[] = {BASE_I, BASE_DOT, COMBO_END};
const uint16_t PROGMEM pipe[] = {BASE_O, BASE_SLASH, COMBO_END};

/* left hand ring finger + middle finger combos */
/* const uint16_t PROGMEM what[] = {BASE_W, BASE_F, COMBO_END}; */
/* const uint16_t PROGMEM what[] = {BASE_R, BASE_S, COMBO_END}; */
/* const uint16_t PROGMEM what[] = {BASE_X, BASE_C, COMBO_END}; */

/* left hand middle finger + index finger combos */
/* const uint16_t PROGMEM what[] = {BASE_F, BASE_P, COMBO_END}; */
/* const uint16_t PROGMEM what[] = {BASE_S, BASE_T, COMBO_END}; */
/* const uint16_t PROGMEM what[] = {BASE_C, BASE_D, COMBO_END}; */

/* right hand ring finger + middle finger combos */
const uint16_t PROGMEM close_paren[] = {BASE_Y, BASE_U, COMBO_END};
const uint16_t PROGMEM close_bracket[] = {BASE_I, BASE_E, COMBO_END};
const uint16_t PROGMEM close_brace[] = {BASE_DOT, BASE_COMMA, COMBO_END};

/* right hand middle finger + index finger combos */
const uint16_t PROGMEM open_paren[] = {BASE_U, BASE_L, COMBO_END};
const uint16_t PROGMEM open_bracket[] = {BASE_E, BASE_N, COMBO_END};
const uint16_t PROGMEM open_brace[] = {BASE_COMMA, BASE_H, COMBO_END};

/* const uint16_t PROGMEM next_window[] = {BASE_U, BASE_I, BASE_O, COMBO_END}; */
/* const uint16_t PROGMEM prev_window[] = {KC_7, KC_8, KC_9, COMBO_END}; */
/* const uint16_t PROGMEM next_window_app[] = {BASE_I, BASE_O, BASE_P, COMBO_END}; */
/* const uint16_t PROGMEM prev_window_app[] = {KC_8, KC_9, KC_0, COMBO_END}; */



combo_t key_combos[] = {
    /* COMBO(esc, KC_ESC), */
    /* COMBO(semicolon, KC_SCLN), */
    /* COMBO(apostrophe, KC_QUOTE), */
    /* COMBO(double_quote, KC_DQUO), */
    COMBO(homerow, MEH(KC_R)),
    COMBO(raycast, LALT(KC_SPACE)),
    COMBO(launcher, KC_RCMD),
    COMBO(caps_word, CW_TOGG),
    /* COMBO(osm_a, OSM_A), */
    /* COMBO(osm_ac, OSM_AC), */
    /* COMBO(osm_acm, OSM_ACM), */
    /* COMBO(osm_am, OSM_AM), */
    /* COMBO(osm_ams, OSM_AMS), */
    /* COMBO(osm_as, OSM_AS), */
    /* COMBO(osm_c, OSM_C), */
    /* COMBO(osm_cm, OSM_CM), */
    /* COMBO(osm_cms, OSM_CMS), */
    /* COMBO(osm_cs, OSM_CS), */
    /* COMBO(osm_hyp, OSM_HYP), */
    /* COMBO(osm_m, OSM_M), */
    /* COMBO(osm_meh, OSM_MEH), */
    /* COMBO(osm_ms, OSM_MS), */
    /* COMBO(osm_s, OSM_S), */
    COMBO(warp, WARP_ON),
    /* COMBO(warp_click, WARP_CLICK), */
    COMBO(warp_hint, WARP_HINT),
    COMBO(warp_grid, WARP_GRID),
    COMBO(warp_hist, WARP_HIST),
    COMBO(warp_screen, WARP_SCREEN),
    COMBO(warp_hint_one, WARP_HINT_ONE),
    COMBO(warp_hint2, WARP_HINT2),
    COMBO(warp_hint2_one, WARP_HINT2_ONE),
    COMBO(raycast_windows, C(G(S(KC_W)))),
    /* COMBO(next_window, MEH(KC_N)), */
    /* COMBO(prev_window, MEH(KC_P)), */
    /* COMBO(next_window_app, HYPR(KC_N)), */
    /* COMBO(prev_window_app, HYPR(KC_P)), */

    COMBO(bang, KC_EXLM),
    COMBO(at_symbol, KC_AT),
    COMBO(hash, KC_HASH),
    COMBO(dollar, KC_DLR),
    COMBO(percent, KC_PERC),
    COMBO(caret, KC_CIRC),
    COMBO(ampersand, KC_AMPR),
    COMBO(star, KC_ASTR),
    COMBO(colon, KC_COLN),
    COMBO(semicolon, KC_SCLN),
    COMBO(tilde, KC_TILD),
    COMBO(grave, KC_GRAVE),
    COMBO(plus, KC_PLUS),
    COMBO(equal, KC_EQUAL),
    COMBO(dash, KC_MINUS),
    COMBO(underscore, KC_UNDS),
    COMBO(backslash, KC_BACKSLASH),
    COMBO(pipe, KC_PIPE),
    COMBO(open_paren, KC_LPRN),
    COMBO(open_bracket, KC_LBRC),
    COMBO(open_brace, KC_LCBR),
    COMBO(close_paren, KC_RPRN),
    COMBO(close_bracket, KC_RBRC),
    COMBO(close_brace, KC_RCBR),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RGB_SLD:
            if (record->event.pressed) {
                rgblight_mode(1);
            }
            return false;
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

        /* case WARP_CLICK: */
        /*     if (record->event.pressed) { */
        /*         SEND_STRING(SS_LGUI(SS_LALT("c"))); */
        /*         tap_code(KC_M); */
        /*         tap_code(KC_ESC); */
        /*     } */
        /*     break; */

        case WARP_OFF:
            if (record->event.pressed) {
                tap_code(KC_ESC);
                layer_off(WARP);
            }
            break;

        case WARP_TAB:
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

bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // TODO update for colemak?
        /* case SFT_T(KC_F): */
        /* case SFT_T(KC_J): */
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



bool get_combo_must_tap(uint16_t index, combo_t *combo) {
    // If you want all combos to be tap-only, just uncomment the next line
    /* return true; */

    /* switch (combo->keycode) { */
    /*     case BASE_E: */
    /*         return true; */
    /**/
    /*     case BASE_N: */
    /*         return true; */
    /* } */
// If you want *all* combos, that have Mod-Tap/Layer-Tap/Momentary keys in its chord, to be tap-only, this is for you:
    uint16_t key;
    uint8_t idx = 0;
    while ((key = pgm_read_word(&combo->keys[idx])) != COMBO_END) {
        switch (key) {
            case QK_MOD_TAP...QK_MOD_TAP_MAX:
            /* case QK_LAYER_TAP...QK_LAYER_TAP_MAX: */
            /* case QK_MOMENTARY...QK_MOMENTARY_MAX: */
                return true;
        }
        idx += 1;
    }
    return false;
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][50][3] = {
    [0] = { {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255} },

    [1] = { {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255} },

    [2] = { {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245} },

    [3] = { {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255} },

    [4] = { {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234}, {25,250,234} },

    [5] = { {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222}, {139,217,222} },

    [6] = { {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < 50; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }

  return true;
}
