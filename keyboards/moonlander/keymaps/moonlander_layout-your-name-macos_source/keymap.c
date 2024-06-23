#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_0_255_255,
  HSV_21_255_255,
  HSV_43_255_255,
  HSV_64_255_255,
  HSV_86_255_255,
  HSV_109_255_255,
  HSV_4_255_255,
  HSV_25_255_255,
  HSV_47_255_255,
  HSV_68_255_255,
  HSV_90_255_255,
  HSV_114_255_255,
  HSV_8_255_255,
  HSV_30_255_255,
  HSV_51_255_255,
  HSV_73_255_255,
  HSV_95_255_255,
  HSV_119_255_255,
  HSV_12_255_255,
  HSV_34_255_255,
  HSV_55_255_255,
  HSV_77_255_255,
  HSV_100_255_255,
  HSV_124_255_255,
  HSV_17_255_255,
  HSV_38_255_255,
  HSV_60_255_255,
  HSV_81_255_255,
  HSV_105_255_255,
  HSV_0_0_255,
  HSV_129_255_255,
  HSV_148_255_255,
  HSV_172_255_255,
  HSV_193_255_255,
  HSV_215_255_255,
  HSV_236_255_255,
  HSV_133_255_255,
  HSV_152_255_255,
  HSV_176_255_255,
  HSV_197_255_255,
  HSV_219_255_255,
  HSV_240_255_255,
  HSV_138_255_255,
  HSV_157_255_255,
  HSV_180_255_255,
  HSV_202_255_255,
  HSV_223_255_255,
  HSV_245_255_255,
  HSV_143_255_255,
  HSV_162_255_255,
  HSV_184_255_255,
  HSV_206_255_255,
  HSV_227_255_255,
  HSV_249_255_255,
  HSV_167_255_255,
  HSV_189_255_255,
  HSV_210_255_255,
  HSV_232_255_255,
  HSV_253_255_255,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  MAC_LOCK,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           ST_MACRO_0,                                     KC_ESCAPE,      KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_TAB,         KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,           LCTL(KC_SPACE),                                 KC_RIGHT_GUI,   KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCLN,        KC_DELETE,      
    MT(MOD_LCTL, KC_BSPC),KC_A,           KC_R,           KC_S,           KC_T,           KC_G,           OSL(9),                                                                         LGUI(KC_LEFT_SHIFT),KC_M,           KC_N,           KC_E,           KC_I,           KC_O,           MT(MOD_RCTL, KC_BSPC),
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_SHIFT, 
    MO(4),          KC_LEFT_CTRL,   MO(3),          KC_LEFT_ALT,    KC_LEFT_GUI,    CW_TOGG,                                                                                                        KC_CAPS,        LT(3,KC_LEFT),  KC_DOWN,        KC_UP,          KC_RIGHT,       KC_RIGHT_CTRL,  
    KC_SPACE,       LT(2,KC_ESCAPE),MO(7),                          KC_RIGHT_ALT,   LT(2,KC_RIGHT_GUI),KC_ENTER
  ),
  [1] = LAYOUT_moonlander(
    ST_MACRO_1,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, UA_32,          
    KC_TRANSPARENT, UA_44,          UA_43,          UA_42,          UA_41,          UA_40,          KC_TRANSPARENT,                                 UA_03,          UA_39,          UA_38,          UA_36,          UA_35,          UA_34,          UA_33,          
    MT(MOD_LCTL, KC_BSPC),UA_31,          UA_30,          UA_29,          UA_28,          UA_27,          KC_TRANSPARENT,                                                                 UA_37,          UA_26,          UA_25,          UA_24,          UA_23,          UA_22,          MT(MOD_RCTL, UA_21),
    KC_TRANSPARENT, UA_20,          UA_19,          UA_18,          UA_17,          UA_16,                                          UA_15,          UA_14,          UA_13,          UA_12,          KC_SLASH,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, TG(8),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_AMPR,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PIPE,        KC_TRANSPARENT, KC_PSCR,        KC_F12,         
    KC_TRANSPARENT, KC_EQUAL,       KC_MINUS,       KC_QUOTE,       KC_SCLN,        KC_EXLM,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_LPRN,        KC_LCBR,        KC_RCBR,        KC_RPRN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PLUS,        KC_UNDS,        KC_DQUO,        KC_COLN,        KC_DLR,                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_LBRC,        KC_RBRC,        KC_BSLS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_EQUAL,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_ASTR,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_4,           KC_5,           KC_6,           KC_SLASH,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_MINUS,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_0,           KC_DOT,         KC_PLUS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN3,     KC_MS_UP,       KC_MS_BTN2,     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_UP,    KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_PAGE_UP,     LGUI(LCTL(KC_LEFT)),KC_UP,          LGUI(LCTL(KC_RIGHT)),KC_HOME,        KC_TRANSPARENT, 
    KC_MS_ACCEL0,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_DOWN,                                  KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_END,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_MS_BTN1,     KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    TO(0),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          QK_BOOT,        
    KC_NO,          RGB_MODE_FORWARD,RGB_VAI,        RGB_SPI,        RGB_HUI,        RGB_SAI,        KC_NO,                                          KC_NO,          KC_NO,          TOGGLE_LAYER_COLOR,KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          RGB_SLD,        RGB_VAD,        RGB_SPD,        RGB_HUD,        RGB_SAD,        KC_NO,                                                                          KC_NO,          KC_NO,          RGB_TOG,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          QK_AUDIO_ON,    
    KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          QK_AUDIO_OFF,   
    MO(6),          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
  [6] = LAYOUT_moonlander(
    HSV_0_255_255,  HSV_21_255_255, HSV_43_255_255, HSV_64_255_255, HSV_86_255_255, HSV_109_255_255,KC_NO,                                          HSV_0_0_255,    HSV_129_255_255,HSV_148_255_255,HSV_172_255_255,HSV_193_255_255,HSV_215_255_255,HSV_236_255_255,
    HSV_4_255_255,  HSV_25_255_255, HSV_47_255_255, HSV_68_255_255, HSV_90_255_255, HSV_114_255_255,KC_NO,                                          KC_NO,          HSV_133_255_255,HSV_152_255_255,HSV_176_255_255,HSV_197_255_255,HSV_219_255_255,HSV_240_255_255,
    HSV_8_255_255,  HSV_30_255_255, HSV_51_255_255, HSV_73_255_255, HSV_95_255_255, HSV_119_255_255,KC_NO,                                                                          KC_NO,          HSV_138_255_255,HSV_157_255_255,HSV_180_255_255,HSV_202_255_255,HSV_223_255_255,HSV_245_255_255,
    HSV_12_255_255, HSV_34_255_255, HSV_55_255_255, HSV_77_255_255, HSV_100_255_255,HSV_124_255_255,                                HSV_143_255_255,HSV_162_255_255,HSV_184_255_255,HSV_206_255_255,HSV_227_255_255,HSV_249_255_255,
    HSV_17_255_255, HSV_38_255_255, HSV_60_255_255, HSV_81_255_255, HSV_105_255_255,KC_NO,                                                                                                          KC_NO,          HSV_167_255_255,HSV_189_255_255,HSV_210_255_255,HSV_232_255_255,HSV_253_255_255,
    KC_TRANSPARENT, KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
  [7] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          MAC_LOCK,       
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_NO,          KC_NO,                                                                          KC_NO,          KC_BRIGHTNESS_UP,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  KC_MY_COMPUTER, KC_NO,          
    KC_NO,          KC_NO,          KC_WWW_BACK,    KC_WWW_FORWARD, KC_NO,          KC_NO,                                          KC_BRIGHTNESS_DOWN,KC_NO,          KC_NO,          KC_NO,          KC_CALCULATOR,  KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_TRANSPARENT,                 KC_NO,          KC_NO,          KC_NO
  ),
  [8] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_ENTER,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_MS_BTN1,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_ESCAPE,                                                                      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_CTRL,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_LEFT,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MS_BTN2,     KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [9] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_2,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, LSFT(KC_LEFT),  LSFT(KC_UP),    LSFT(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_3,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_4,     LCTL(KC_UP),    ST_MACRO_5,     KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LCTL(KC_LEFT),  LCTL(KC_DOWN),  LCTL(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, LSFT(KC_DOWN),  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};
const uint16_t PROGMEM combo0[] = { KC_CAPS, LT(2,KC_RIGHT_GUI), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TG(5)),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = { {214,255,255}, {139,255,255}, {139,255,255}, {41,255,255}, {41,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {41,255,255}, {41,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {41,255,255}, {41,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {41,255,255}, {41,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {41,255,255}, {41,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {41,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {41,255,255}, {41,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {41,255,255}, {41,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {41,255,255}, {41,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {41,255,255}, {41,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {41,255,255}, {41,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {41,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {96,218,204}, {0,0,0}, {136,233,217}, {136,233,217}, {0,0,0}, {96,218,204}, {0,0,0}, {136,233,217}, {136,233,217}, {0,0,0}, {96,218,204}, {136,233,217}, {136,233,217}, {136,233,217}, {0,0,0}, {96,218,204}, {0,0,0}, {136,233,217}, {136,233,217}, {0,0,0}, {96,218,204}, {0,0,0}, {136,233,217}, {136,233,217}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {96,218,204}, {96,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {96,218,204}, {241,245,180}, {136,233,217}, {136,233,217}, {0,0,0}, {96,218,204}, {0,0,0}, {136,233,217}, {136,233,217}, {0,0,0}, {96,218,204}, {136,233,217}, {136,233,217}, {136,233,217}, {0,0,0}, {96,218,204}, {0,0,0}, {136,233,217}, {0,0,0}, {0,0,0}, {96,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,231,229}, {31,231,229}, {31,231,229}, {31,231,229}, {31,231,229}, {0,0,0}, {0,227,167}, {0,227,167}, {0,227,167}, {31,231,229}, {0,0,0}, {0,227,167}, {0,227,167}, {0,227,167}, {0,227,167}, {0,0,0}, {0,227,167}, {0,227,167}, {0,227,167}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {116,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {22,218,204}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {22,218,204}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {164,245,254}, {164,245,254}, {0,0,0}, {0,0,0}, {0,0,0}, {22,218,204}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {22,218,204}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {164,245,254}, {164,245,254}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {214,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {135,255,255}, {15,227,230}, {0,0,0}, {0,0,0}, {0,0,0}, {44,255,255}, {44,255,150}, {0,0,0}, {0,0,0}, {0,0,0}, {163,218,204}, {163,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {217,255,255}, {217,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {80,73,219}, {80,73,219}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {130,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {216,226,242}, {139,227,230}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,255,255}, {4,255,255}, {8,255,255}, {12,255,255}, {17,255,255}, {21,255,255}, {25,255,255}, {30,255,255}, {34,255,255}, {38,255,255}, {43,255,255}, {47,255,255}, {51,255,255}, {55,255,255}, {60,255,255}, {64,255,255}, {68,255,255}, {73,255,255}, {77,255,255}, {81,255,255}, {86,255,255}, {90,255,255}, {95,255,255}, {100,255,255}, {105,255,255}, {109,255,255}, {114,255,255}, {119,255,255}, {124,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {236,255,255}, {240,255,255}, {245,255,255}, {249,255,255}, {253,255,255}, {215,255,255}, {219,255,255}, {223,255,255}, {227,255,255}, {232,255,255}, {193,255,255}, {197,255,255}, {202,255,255}, {206,255,255}, {210,255,255}, {172,255,255}, {176,255,255}, {180,255,255}, {184,255,255}, {189,255,255}, {148,255,255}, {152,255,255}, {157,255,255}, {162,255,255}, {167,255,255}, {129,255,255}, {133,255,255}, {138,255,255}, {143,255,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [7] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {45,255,251}, {111,232,241}, {0,0,0}, {0,0,0}, {0,0,0}, {94,245,204}, {111,232,241}, {0,0,0}, {0,0,0}, {0,0,0}, {45,255,251}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,225,206}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {164,245,254}, {26,241,254}, {0,0,0}, {0,0,0}, {0,0,0}, {248,233,235}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {45,255,251}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {45,255,251}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,156,253}, {74,156,116}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [8] = { {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253}, {0,245,253} },

    [9] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {84,244,252}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {84,244,252}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {171,255,129}, {36,232,236}, {111,218,204}, {0,0,0}, {0,0,0}, {171,255,129}, {111,218,204}, {111,218,204}, {171,255,129}, {0,0,0}, {171,255,129}, {0,245,253}, {111,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

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
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
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
    case 7:
      set_layer_color(7);
      break;
    case 8:
      set_layer_color(8);
      break;
    case 9:
      set_layer_color(9);
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
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)));
      layer_invert(1);
    }
    break;
    case ST_MACRO_1:
    if (!record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)));
      layer_invert(1);
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_COMMA));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_A)) SS_DELAY(100) SS_LSFT(SS_TAP(X_4)));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_MINUS));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_BSLS));
    }
    break;
    case MAC_LOCK:
      HCS(0x19E);

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
    case HSV_0_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(0,255,255);
        }
        return false;
    case HSV_21_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(21,255,255);
        }
        return false;
    case HSV_43_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(43,255,255);
        }
        return false;
    case HSV_64_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(64,255,255);
        }
        return false;
    case HSV_86_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(86,255,255);
        }
        return false;
    case HSV_109_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(109,255,255);
        }
        return false;
    case HSV_4_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(4,255,255);
        }
        return false;
    case HSV_25_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(25,255,255);
        }
        return false;
    case HSV_47_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(47,255,255);
        }
        return false;
    case HSV_68_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(68,255,255);
        }
        return false;
    case HSV_90_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(90,255,255);
        }
        return false;
    case HSV_114_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(114,255,255);
        }
        return false;
    case HSV_8_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(8,255,255);
        }
        return false;
    case HSV_30_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(30,255,255);
        }
        return false;
    case HSV_51_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(51,255,255);
        }
        return false;
    case HSV_73_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(73,255,255);
        }
        return false;
    case HSV_95_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(95,255,255);
        }
        return false;
    case HSV_119_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(119,255,255);
        }
        return false;
    case HSV_12_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(12,255,255);
        }
        return false;
    case HSV_34_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(34,255,255);
        }
        return false;
    case HSV_55_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(55,255,255);
        }
        return false;
    case HSV_77_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(77,255,255);
        }
        return false;
    case HSV_100_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(100,255,255);
        }
        return false;
    case HSV_124_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(124,255,255);
        }
        return false;
    case HSV_17_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(17,255,255);
        }
        return false;
    case HSV_38_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(38,255,255);
        }
        return false;
    case HSV_60_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(60,255,255);
        }
        return false;
    case HSV_81_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(81,255,255);
        }
        return false;
    case HSV_105_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(105,255,255);
        }
        return false;
    case HSV_0_0_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(0,0,255);
        }
        return false;
    case HSV_129_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(129,255,255);
        }
        return false;
    case HSV_148_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(148,255,255);
        }
        return false;
    case HSV_172_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(172,255,255);
        }
        return false;
    case HSV_193_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(193,255,255);
        }
        return false;
    case HSV_215_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(215,255,255);
        }
        return false;
    case HSV_236_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(236,255,255);
        }
        return false;
    case HSV_133_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(133,255,255);
        }
        return false;
    case HSV_152_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(152,255,255);
        }
        return false;
    case HSV_176_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(176,255,255);
        }
        return false;
    case HSV_197_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(197,255,255);
        }
        return false;
    case HSV_219_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(219,255,255);
        }
        return false;
    case HSV_240_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(240,255,255);
        }
        return false;
    case HSV_138_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(138,255,255);
        }
        return false;
    case HSV_157_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(157,255,255);
        }
        return false;
    case HSV_180_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(180,255,255);
        }
        return false;
    case HSV_202_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(202,255,255);
        }
        return false;
    case HSV_223_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(223,255,255);
        }
        return false;
    case HSV_245_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(245,255,255);
        }
        return false;
    case HSV_143_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(143,255,255);
        }
        return false;
    case HSV_162_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(162,255,255);
        }
        return false;
    case HSV_184_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(184,255,255);
        }
        return false;
    case HSV_206_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(206,255,255);
        }
        return false;
    case HSV_227_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(227,255,255);
        }
        return false;
    case HSV_249_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(249,255,255);
        }
        return false;
    case HSV_167_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(167,255,255);
        }
        return false;
    case HSV_189_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(189,255,255);
        }
        return false;
    case HSV_210_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(210,255,255);
        }
        return false;
    case HSV_232_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(232,255,255);
        }
        return false;
    case HSV_253_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(253,255,255);
        }
        return false;
  }
  return true;
}



