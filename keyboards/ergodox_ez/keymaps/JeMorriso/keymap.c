#include QMK_KEYBOARD_H
#include "version.h"

enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_F11,                                         KC_BSLASH,      KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_EQUAL,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           TD(DANCE_0),                                    TD(DANCE_2),    KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_MINUS,
    KC_ESCAPE,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,
    OSM(MOD_LSFT),  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           TD(DANCE_1),                                    TD(DANCE_3),    KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       OSM(MOD_LSFT),
    KC_CAPSLOCK,    OSM(MOD_LCTL),  OSM(MOD_LALT),  KC_UP,          KC_DOWN,                                                                                                        KC_LEFT,        KC_RIGHT,       OSM(MOD_LALT),        OSM(MOD_LCTL),  OSM(MOD_LGUI),
                                                                                                    TT(2),          LALT(KC_F4),    KC_DELETE,      TG(1),
                                                                                                                    KC_HOME,        KC_PGUP,
                                                                                    KC_SPACE,       KC_BSPACE,      KC_END,         KC_PGDOWN,      KC_LEAD,        KC_ENTER
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_LBRACKET,    KC_LPRN,        KC_RPRN,        KC_RBRACKET,    KC_CIRC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_SLASH,       KC_7,           KC_8,           KC_9,           KC_MINUS,       KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F10,         KC_F7,          KC_F8,          KC_F9,          KC_TRANSPARENT, KC_TRANSPARENT,
    TO(0),          KC_ASTR,        KC_4,           KC_5,           KC_6,           KC_PLUS,                                                                        KC_F11,         KC_F4,          KC_F5,          KC_F6,          KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_EXLM,        KC_1,           KC_2,           KC_3,           KC_EQUAL,       KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F12,         KC_F1,          KC_F2,          KC_F3,          KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_DOT,         KC_0,                                                                                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,       KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_STOP,                                  KC_MEDIA_PLAY_PAUSE,KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_UP,    KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_VOL_UP,
    TO(0),          KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_RIGHT, KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,                                KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_MUTE,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_MS_BTN5,     KC_TRANSPARENT,
                                                                                    KC_MS_BTN1,     KC_MS_BTN2,     KC_MS_BTN4,     KC_MS_ACCEL2,   KC_MS_ACCEL1,   KC_MS_ACCEL0
  ),
};

extern rgb_config_t rgb_matrix_config;

// Runs just one time when the keyboard initializes.
void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77}, {139,39,77} },

    [1] = { {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255}, {139,184,255} },

    [2] = { {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199}, {89,146,199} },
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
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
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

static tap dance_state[4];

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
        tap_code16(KC_LCBR);
        tap_code16(KC_LCBR);
        tap_code16(KC_LCBR);
    }
    if(state->count > 3) {
        tap_code16(KC_LCBR);
    }
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_LCBR); break;
        case DOUBLE_TAP: register_code16(KC_LBRACKET); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LCBR); register_code16(KC_LCBR);
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_LCBR); break;
        case DOUBLE_TAP: unregister_code16(KC_LBRACKET); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LCBR); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(qk_tap_dance_state_t *state, void *user_data);
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_1(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LPRN);
        tap_code16(KC_LPRN);
        tap_code16(KC_LPRN);
    }
    if(state->count > 3) {
        tap_code16(KC_LPRN);
    }
}

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_LPRN); break;
        case DOUBLE_TAP: register_code16(KC_LABK); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LPRN); register_code16(KC_LPRN);
    }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_LPRN); break;
        case DOUBLE_TAP: unregister_code16(KC_LABK); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LPRN); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(qk_tap_dance_state_t *state, void *user_data);
void dance_2_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_2_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_2(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_RCBR);
        tap_code16(KC_RCBR);
        tap_code16(KC_RCBR);
    }
    if(state->count > 3) {
        tap_code16(KC_RCBR);
    }
}

void dance_2_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_RCBR); break;
        case DOUBLE_TAP: register_code16(KC_RBRACKET); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_RCBR); register_code16(KC_RCBR);
    }
}

void dance_2_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_RCBR); break;
        case DOUBLE_TAP: unregister_code16(KC_RBRACKET); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_RCBR); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(qk_tap_dance_state_t *state, void *user_data);
void dance_3_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_3_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_3(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_RPRN);
        tap_code16(KC_RPRN);
        tap_code16(KC_RPRN);
    }
    if(state->count > 3) {
        tap_code16(KC_RPRN);
    }
}

void dance_3_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_RPRN); break;
        case DOUBLE_TAP: register_code16(KC_RABK); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_RPRN); register_code16(KC_RPRN);
    }
}

void dance_3_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_RPRN); break;
        case DOUBLE_TAP: unregister_code16(KC_RABK); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_RPRN); break;
    }
    dance_state[3].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
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
    // remmina grab keyboard
    SEQ_ONE_KEY(KC_Z) {
      register_code16(G(KC_R));
      unregister_code16(G(KC_R));
    }
    SEQ_ONE_KEY(KC_C) {
      register_code16(G(C(A(KC_C))));
      unregister_code16(G(C(A(KC_C))));
    }
    SEQ_ONE_KEY(KC_L) {
      register_code16(G(C(A(KC_L))));
      unregister_code16(G(C(A(KC_L))));
    }
    SEQ_ONE_KEY(KC_TAB) {
      register_code16(A(KC_TAB));
      unregister_code16(A(KC_TAB));
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
    SEQ_TWO_KEYS(KC_R, KC_W) {
      register_code16(G(C(A(S(KC_R)))));
      unregister_code16(G(C(A(S(KC_R)))));
    }
    SEQ_TWO_KEYS(KC_R, KC_E) {
      register_code16(G(C(A(KC_E))));
      unregister_code16(G(C(A(KC_E))));
    }

    // I like this idea
    SEQ_TWO_KEYS(KC_D, KC_D) {
      SEND_STRING(SS_LCTL("a") SS_LCTL("c"));
    }

    leader_end();
  }
}
