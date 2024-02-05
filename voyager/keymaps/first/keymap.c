#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_0_255_255,
  HSV_74_255_255,
  HSV_169_255_255,
  MOVE_AND_SWITCH_0,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    DE_CIRC,        KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           DE_SS,
    DE_LESS,        KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           DE_PLUS,
    KC_ESCAPE,      MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LSFT, KC_D),MT(MOD_LCTL, KC_F),KC_G,                                           KC_H,           MT(MOD_RCTL, KC_J),MT(MOD_RSFT, KC_K),MT(MOD_RALT, KC_L),MT(MOD_RGUI, DE_OE),DE_HASH,
    DE_ACUT,        KC_Z,           LT(4,KC_X),     LT(3,KC_C),     LT(6,KC_V),     KC_B,                                           MT(MOD_RALT, KC_N),KC_M,           KC_COMMA,       KC_DOT,         DE_MINS,        LT(2,KC_CAPS),
                                                                    LT(1,KC_SPC),   LT(2,KC_TAB),                                   KC_BSPC,  LT(1,KC_ENTER)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_TRANSPARENT, DE_AT,          DE_LESS,        DE_LCBR,        DE_RCBR,        DE_BSLS,                                        DE_SLSH,        KC_7,           KC_8,           KC_9,           DE_MINS,        KC_F12,
    DE_PERC,        DE_EXLM,        DE_EQL,         DE_LPRN,        DE_RPRN,        DE_PIPE,                                        DE_ASTR,        KC_4,           KC_5,           KC_6,           DE_PLUS,        KC_TRANSPARENT,
    DE_DLR,         DE_TILD,        DE_MORE,        DE_LBRC,        DE_RBRC,        DE_AMPR,                                        KC_0,           KC_1,           KC_2,           KC_3,           KC_DOT,         KC_TRANSPARENT,
                                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    RGB_TOG,        TOGGLE_LAYER_COLOR,RGB_MODE_FORWARD,RGB_SLD,        RGB_VAD,        RGB_VAI,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,
    RGB_SPD,        RGB_SPI,        KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,RGB_HUD,        RGB_HUI,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE,KC_TRANSPARENT,                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, HSV_0_255_255,  HSV_74_255_255, HSV_169_255_255,                                KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_TRANSPARENT, KC_TRANSPARENT,
                                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LGUI(KC_KP_7),  LGUI(KC_KP_8),  LGUI(KC_KP_9),  KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LGUI(KC_KP_4),  LGUI(KC_KP_5),  LGUI(KC_KP_6),  KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, MO(5),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 LGUI(KC_KP_0),  LGUI(KC_KP_1),  LGUI(KC_KP_2),  LGUI(KC_KP_3),  KC_TRANSPARENT, KC_TRANSPARENT,
                                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LGUI(LSFT(KC_KP_7)),LGUI(LSFT(KC_KP_8)),LGUI(LSFT(KC_KP_9)),KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LGUI(LSFT(KC_KP_4)),LGUI(LSFT(KC_KP_5)),LGUI(LSFT(KC_KP_6)),KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MO(5),          KC_TRANSPARENT, KC_TRANSPARENT,                                 LGUI(LSFT(KC_KP_0)),LGUI(LSFT(KC_KP_1)),LGUI(LSFT(KC_KP_2)),LGUI(LSFT(KC_KP_3)),KC_TRANSPARENT, KC_TRANSPARENT,
                                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LGUI(LSFT(KC_KP_7)),LGUI(LSFT(KC_KP_8)),LGUI(LSFT(KC_KP_9)),KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LGUI(LSFT(KC_KP_4)),LGUI(LSFT(KC_KP_5)),LGUI(LSFT(KC_KP_6)),KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 MOVE_AND_SWITCH_0,LGUI(LSFT(KC_KP_1)),LGUI(LSFT(KC_KP_2)),LGUI(LSFT(KC_KP_3)),KC_TRANSPARENT, KC_TRANSPARENT,
                                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_MEDIA_PLAY_PAUSE,KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};



extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

#define DEGREE(x) (int) (x * 255. / 360.)

#define OFF         { 0,            0,              0}
#define WHITE       { 0,            0,              255}

#define BASE_BLUE   { DEGREE(235),  DEGREE(270),    DEGREE(270)}
#define DEEP_BLUE   { DEGREE(245),  255,            255}

#define VIOLET      { DEGREE(270),  255,            255}
#define RED         { DEGREE(  0),  255,            255}
#define ORANGE      { DEGREE( 30),  255,            255}

#define GREEN       { DEGREE(120),  255,            255}
#define LIME        { DEGREE( 90),  255,            255}

#define NUMPAD      VIOLET
#define BRACKETS    GREEN
#define TO_WSP      GREEN
#define MV_WSP      ORANGE
#define BOTH_WSP    LIME
#define ARROWS      GREEN
#define POSITION    LIME
#define PLAY        ORANGE
#define VOLUME      GREEN
#define SKIP        ORANGE

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = {
        BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,
        BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,
        RED,            DEEP_BLUE,      DEEP_BLUE,      DEEP_BLUE,      DEEP_BLUE,      BASE_BLUE,
        BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,
                                                                        DEEP_BLUE,      DEEP_BLUE,

        BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,
        BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,
        BASE_BLUE,      DEEP_BLUE,      DEEP_BLUE,      DEEP_BLUE,      DEEP_BLUE,      BASE_BLUE,
        BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,
        DEEP_BLUE,      DEEP_BLUE
    },

    [1] = {
        BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,
        BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BRACKETS,       BRACKETS,       BASE_BLUE,
        BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BRACKETS,       BRACKETS,       BASE_BLUE,
        BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BRACKETS,       BRACKETS,       BASE_BLUE,
                                                                        WHITE,          BASE_BLUE,

        BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,
        BASE_BLUE,      NUMPAD,         NUMPAD,         NUMPAD,         BASE_BLUE,      BASE_BLUE,
        BASE_BLUE,      NUMPAD,         NUMPAD,         NUMPAD,         BASE_BLUE,      BASE_BLUE,
        NUMPAD,         NUMPAD,         NUMPAD,         NUMPAD,         BASE_BLUE,      BASE_BLUE,
        BASE_BLUE,      WHITE
    },

    [2] = {
        BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,
        BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,
        BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,
        BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,
                                                                        BASE_BLUE,      WHITE,

        BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      RED,
        BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,      BASE_BLUE,
        ARROWS,         ARROWS,         ARROWS,         ARROWS,         BASE_BLUE,      BASE_BLUE,
        POSITION,       POSITION,       POSITION,       POSITION,       BASE_BLUE,      WHITE,
        BASE_BLUE,      BASE_BLUE
    },

    [3] = {
        OFF,            OFF,            OFF,            OFF,            OFF,            OFF,
        OFF,            OFF,            OFF,            OFF,            OFF,            OFF,
        OFF,            OFF,            OFF,            OFF,            OFF,            OFF,
        OFF,            OFF,            OFF,            WHITE,          OFF,            OFF,
                                                                        OFF,            OFF,

        OFF,            OFF,            OFF,            OFF,            OFF,            OFF,
        OFF,            TO_WSP,         TO_WSP,         TO_WSP,         OFF,            OFF,
        OFF,            TO_WSP,         TO_WSP,         TO_WSP,         OFF,            OFF,
        TO_WSP,         TO_WSP,         TO_WSP,         TO_WSP,         OFF,            OFF,
        OFF,            OFF
    },

    [4] = {
        OFF,            OFF,            OFF,            OFF,            OFF,            OFF,
        OFF,            OFF,            OFF,            OFF,            OFF,            OFF,
        OFF,            OFF,            OFF,            OFF,            OFF,            OFF,
        OFF,            OFF,            WHITE,          OFF,            OFF,            OFF,
                                                                        OFF,            OFF,

        OFF,            OFF,            OFF,            OFF,            OFF,            OFF,
        OFF,            MV_WSP,         MV_WSP,         MV_WSP,         OFF,            OFF,
        OFF,            MV_WSP,         MV_WSP,         MV_WSP,         OFF,            OFF,
        MV_WSP,         MV_WSP,         MV_WSP,         MV_WSP,         OFF,            OFF,
        OFF,            OFF
    },

    [5] = {
        OFF,            OFF,            OFF,            OFF,            OFF,            OFF,
        OFF,            OFF,            OFF,            OFF,            OFF,            OFF,
        OFF,            OFF,            OFF,            OFF,            OFF,            OFF,
        OFF,            OFF,            WHITE,          OFF,            OFF,            OFF,
                                                                        OFF,            OFF,

        OFF,            OFF,            OFF,            OFF,            OFF,            OFF,
        OFF,            BOTH_WSP,       BOTH_WSP,       BOTH_WSP,       OFF,            OFF,
        OFF,            BOTH_WSP,       BOTH_WSP,       BOTH_WSP,       OFF,            OFF,
        BOTH_WSP,       BOTH_WSP,       BOTH_WSP,       BOTH_WSP,       OFF,            OFF,
        OFF,            OFF
    },

    [6] = {
        OFF,            OFF,            OFF,            OFF,            OFF,            OFF,
        OFF,            OFF,            OFF,            OFF,            OFF,            OFF,
        OFF,            OFF,            OFF,            OFF,            OFF,            OFF,
        OFF,            OFF,            OFF,            OFF,            WHITE,          OFF,
                                                                        OFF,            OFF,

        OFF,            OFF,            OFF,            OFF,            OFF,            OFF,
        OFF,            OFF,            OFF,            OFF,            OFF,            OFF,
        OFF,            VOLUME,         VOLUME,         PLAY,           OFF,            OFF,
        OFF,            SKIP,           SKIP,           OFF,            OFF,            OFF,
        OFF,            OFF
    },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
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
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
    case HSV_74_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(74,255,255);
      }
      return false;
    case HSV_169_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(169,255,255);
      }
      return false;
    // Move and switch to workspace
    case MOVE_AND_SWITCH_0:
      if (record->event.pressed) {
        register_code(KC_LGUI);
        register_code(KC_LSFT);
        SEND_STRING("0");
        unregister_code(KC_LSFT);
        SEND_STRING("0");
        unregister_code(KC_LGUI);
      }
      return false;
  }
  return true;
}

