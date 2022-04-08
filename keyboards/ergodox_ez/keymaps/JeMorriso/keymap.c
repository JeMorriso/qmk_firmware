#include QMK_KEYBOARD_H
#include "version.h"

enum custom_keycodes {
  ST_MACRO_0,
  ST_MACRO_1,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_DELETE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 LALT(KC_F4),    KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_F11,
    KC_TAB,         KC_Q,           KC_W,           LT(1,KC_E),     KC_R,           KC_T,           OSL(2),                                         TT(3),          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSPACE,
    LT(4,KC_ESCAPE),LT(4,KC_A),     KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,
    OSM(MOD_LSFT),  LT(3,KC_Z),     KC_X,           KC_C,           KC_V,           KC_B,           KC_TRANSPARENT,                                 OSL(4),         KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       OSM(MOD_RSFT),
    OSM(MOD_LGUI),  OSM(MOD_LCTL),  OSM(MOD_MEH),   OSM(MOD_LGUI),  OSM(MOD_LALT),                                                                                                  OSM(MOD_LALT),  OSM(MOD_LGUI),  OSM(MOD_MEH),   OSM(MOD_LCTL),  KC_RCTRL,
                                                                                                    OSM(MOD_LCTL),  KC_HOME,        KC_PGUP,        OSM(MOD_LCTL),
                                                                                                                    KC_END,         KC_PGDOWN,
                                                                                    KC_SPACE,       OSL(1),         KC_TRANSPARENT, KC_TRANSPARENT, OSL(1),         KC_ENTER
  ),
  [1] = LAYOUT_ergodox_pretty(
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,        KC_PIPE,
    KC_TRANSPARENT, KC_TILD,        KC_MINUS,       KC_PLUS,        KC_EQUAL,       KC_UNDS,                                                                        KC_TRANSPARENT, KC_LBRACKET,    KC_RBRACKET,    KC_LCBR,        KC_RCBR,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_GRAVE,       KC_TRANSPARENT, ST_MACRO_0,     ST_MACRO_1,     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LABK,        KC_RABK,        KC_BSLASH,      KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, WEBUSB_PAIR,    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_ergodox_pretty(
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_PGUP,        KC_F10,         KC_F7,          KC_F8,          KC_F9,          KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_F11,         KC_F4,          KC_F5,          KC_F6,          KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_PGDOWN,      KC_F12,         KC_F1,          KC_F2,          KC_F3,          KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME,        KC_END
  ),
  [3] = LAYOUT_ergodox_pretty(
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,       KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,                                KC_MEDIA_STOP,  KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_4,           KC_5,           KC_6,           KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_UP,    KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,                                KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_DOWN,  KC_TRANSPARENT,                                                                                                 KC_0,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_REWIND,KC_MEDIA_FAST_FORWARD,
                                                                                                                    KC_TRANSPARENT, KC_AUDIO_MUTE,
                                                                                    KC_MS_BTN1,     KC_MS_BTN2,     TO(0),          TO(0),          KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP
  ),
  [4] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT,                                                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

// Runs just one time when the keyboard initializes.
void keyboard_post_init_user(void) {
  rgb_matrix_enable();
};

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234}, {139,227,234} },

    [1] = { {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240}, {207,197,240} },

    [2] = { {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255}, {91,171,255} },

    [3] = { {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234}, {2,227,234} },

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
      SEND_STRING(SS_TAP(X_EQUAL) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)));

    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_KP_1)) SS_DELAY(100) SS_TAP(X_EQUAL));

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


