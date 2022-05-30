#include QMK_KEYBOARD_H
#include "version.h"

enum custom_keycodes {
  ST_MACRO_0,
  ST_MACRO_1,
  CLEAR_MODS,
};

enum tap_dance_codes {
  DANCE_0,
};

enum layers {
    BASE,
    SYM,
    NUM_FUNC,
    NUM,
    MED_NAV,
    MOUSE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, OSL(MED_NAV), TG(MED_NAV), TG(NUM), OSL(NUM), TG(SYM), KC_TRANSPARENT,                                 A(KC_F4), KC_TRANSPARENT, KC_TRANSPARENT, TG(MOUSE), KC_TRANSPARENT, TG(SYM), KC_F11,
    OSL(SYM),       KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           TG(NUM_FUNC),                                          KC_TRANSPARENT,          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           OSL(SYM),
    KC_ESC,         KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,
    OSM(MOD_LSFT),  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_LEAD,                                          KC_LEAD,          KC_N,            KC_M, KC_COMMA, KC_DOT, KC_SLASH,OSM(MOD_LSFT),
    KC_TRANSPARENT, OSM(MOD_LGUI),  OSM(MOD_MEH),   OSM(MOD_LALT),  KC_LEAD,                                                                                               OSM(MOD_LCTL),  OSM(MOD_LALT),           OSM(MOD_MEH),      OSM(MOD_LGUI),       CLEAR_MODS,
                                                                                                    OSL(NUM_FUNC), KC_TRANSPARENT, KC_TRANSPARENT, KC_DELETE,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_SPACE,       KC_BACKSPACE,   KC_TRANSPARENT, KC_TAB,         LSFT(KC_TAB),   KC_ENTER
  ),
  [SYM] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TILD,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_AMPR,        KC_LPRN,        KC_RPRN,        KC_TRANSPARENT, KC_TRANSPARENT,
    TO(BASE),          KC_EXLM,        KC_UNDS,        KC_MINUS,       KC_EQUAL,       KC_PLUS,                                                                     KC_ASTR,        KC_LBRACKET,    KC_LCBR,        KC_RCBR,        KC_RBRACKET,    KC_GRAVE,
    KC_TRANSPARENT, ST_MACRO_0,     KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_1,     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_CIRC,        KC_PIPE,        KC_BSLASH,      KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [NUM_FUNC] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F10,         KC_F7,          KC_F8,          KC_F9,          KC_TRANSPARENT, KC_TRANSPARENT,
    TO(BASE),       KC_TRANSPARENT, KC_4,           KC_5,           KC_6,           KC_TRANSPARENT,                                                                 KC_F11,         KC_F4,          KC_F5,          KC_F6,          KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_TRANSPARENT, KC_TRANSPARENT,                                        KC_TRANSPARENT, KC_F12,         KC_F1,          KC_F2,          KC_F3,          KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_0,                                                                                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [NUM] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SLASH, KC_ASTR, KC_MINUS, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT,         KC_7,          KC_8,          KC_9,          KC_PLUS, KC_TRANSPARENT,
    TO(BASE),       KC_TRANSPARENT, KC_4,           KC_5,           KC_6,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT,         KC_4,          KC_5,          KC_6,          KC_PLUS, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_TRANSPARENT, KC_TRANSPARENT,                                        KC_TRANSPARENT, KC_TRANSPARENT,         KC_1,          KC_2,          KC_3,          KC_ENTER, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_0,                                                                                                                   KC_0, KC_0, KC_DOT, KC_ENTER, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [MED_NAV] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT,                         KC_TRANSPARENT, RCTL(KC_TRANSPARENT), KC_BSPACE,      KC_DELETE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    TO(BASE),       KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_TRANSPARENT,                                                               KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE,KC_TRANSPARENT, KC_TRANSPARENT,                                    KC_TRANSPARENT,   KC_HOME,        KC_PGDOWN,      KC_PGUP,        KC_END,         KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [MOUSE] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_UP,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    TO(BASE),          KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_RIGHT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                          KC_TRANSPARENT,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_MS_BTN3,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_MS_BTN5,     KC_TRANSPARENT,
                                                                                    KC_MS_BTN1,     KC_MS_BTN2,     KC_MS_BTN4,     KC_MS_ACCEL2,   KC_MS_ACCEL1,   KC_MS_ACCEL0
  ),
};

extern rgb_config_t rgb_matrix_config;

// Runs just one time when the keyboard initializes.
void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

// bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
//     switch (keycode) {
//         case sft_t(kc_z):
//             // immediately select the hold action when another key is tapped.
//             return true;
//         case sft_t(kc_slash):
//             // immediately select the hold action when another key is tapped.
//             return true;
//         default:
//             // do not select the hold action when another key is tapped.
//             return false;
//     }
// }

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77} },

    [1] = { {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255} },

    [2] = { {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199} },

    [3] = { {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193}, {41,137,193} },

    [4] = { {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222}, {3,159,222} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
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

void rgb_matrix_indicators_user(void) {
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
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_KP_1)) SS_DELAY(100) SS_TAP(X_EQUAL));

    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_EQUAL) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)));

    }
    break;
    case CLEAR_MODS:
    if (record->event.pressed) {
        clear_oneshot_mods();
        clear_mods();
    }
    break;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {

  uint8_t layer = biton32(state);

  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[1];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(qk_tap_dance_state_t *state, void *user_data);
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_Q);
        tap_code16(KC_Q);
        tap_code16(KC_Q);
    }
    if(state->count > 3) {
        tap_code16(KC_Q);
    }
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_Q); break;
        case DOUBLE_TAP: register_code16(LALT(KC_F4)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_Q); register_code16(KC_Q);
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_Q); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_F4)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_Q); break;
    }
    dance_state[0].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
};

LEADER_EXTERNS();

void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    leading = false;

    SEQ_ONE_KEY(KC_A) {
      register_code16(G(C(A(KC_A))));
      unregister_code16(G(C(A(KC_A))));
    }
    SEQ_ONE_KEY(KC_N) {
      register_code16(G(C(A(KC_N))));
      unregister_code16(G(C(A(KC_N))));
    }
    SEQ_ONE_KEY(KC_K) {
      register_code16(G(C(A(KC_K))));
      unregister_code16(G(C(A(KC_K))));
    }
    SEQ_ONE_KEY(KC_T) {
      register_code16(G(C(A(KC_T))));
      unregister_code16(G(C(A(KC_T))));
    }
    SEQ_ONE_KEY(KC_V) {
      register_code16(G(C(A(KC_V))));
      unregister_code16(G(C(A(KC_V))));
    }
    SEQ_ONE_KEY(KC_S) {
      register_code16(G(C(A(KC_S))));
      unregister_code16(G(C(A(KC_S))));
    }
    SEQ_ONE_KEY(KC_Q) {
      register_code16(G(C(A(KC_Q))));
      unregister_code16(G(C(A(KC_Q))));
    }
    SEQ_ONE_KEY(KC_G) {
      register_code16(G(C(A(KC_G))));
      unregister_code16(G(C(A(KC_G))));
    }
    SEQ_ONE_KEY(KC_W) {
      register_code16(G(C(A(KC_W))));
      unregister_code16(G(C(A(KC_W))));
    }
    SEQ_ONE_KEY(KC_R) {
      register_code16(G(C(A(KC_R))));
      unregister_code16(G(C(A(KC_R))));
    }
    SEQ_ONE_KEY(KC_C) {
      register_code16(G(C(A(KC_C))));
      unregister_code16(G(C(A(KC_C))));
    }

    SEQ_TWO_KEYS(KC_N, KC_D) {
      register_code16(G(C(A(KC_DOT))));
      unregister_code16(G(C(A(KC_DOT))));
    }
    SEQ_TWO_KEYS(KC_K, KC_J) {
      register_code16(G(C(A(KC_J))));
      unregister_code16(G(C(A(KC_J))));
    }
    SEQ_TWO_KEYS(KC_N, KC_N) {
      register_code16(G(C(A(KC_O))));
      unregister_code16(G(C(A(KC_O))));
    }
    SEQ_TWO_KEYS(KC_K, KC_K) {
      register_code16(G(C(A(S(KC_K)))));
      unregister_code16(G(C(A(S(KC_K)))));
    }

    // I like this idea
    SEQ_TWO_KEYS(KC_D, KC_D) {
      SEND_STRING(SS_LCTL("a") SS_LCTL("c"));
    }

    leader_end();
  }
}
