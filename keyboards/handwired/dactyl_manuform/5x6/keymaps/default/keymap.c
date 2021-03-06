/* A standard layout for the Dactyl Manuform 5x6 Keyboard */ 

#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _WITH_ALT 3

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)
#define WITH_ALT LM(_WITH_ALT, MOD_LALT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_5x6(
     KC_GRV , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_EQL,
     KC_ESC , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_MINS,
     KC_LSFT, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,RSFT_T(KC_QUOT),
     KC_LCTL, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,RCTL_T(KC_BSLASH),
                      KC_LBRC,KC_RBRC,                                                       KC_BSPC, KC_DEL,
                                      KC_SPC,                                         KC_ENT,
                                      KC_HOME, RAISE,                        KC_LALT, KC_END,
                                      WITH_ALT,LOWER,                        KC_LGUI, KC_TAB
  ),

  [_RAISE] = LAYOUT_5x6(

     KC_TILD,KC_EXLM, KC_AT ,KC_HASH,KC_DLR ,KC_PERC,                        KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_PPLS,
     _______,_______,_______,_______,_______,KC_PGUP,                        _______, KC_P7 , KC_P8 , KC_P9 ,KC_NLCK,KC_PMNS,
     _______,_______,KC_MPRV,KC_MPLY,KC_MNXT,KC_PGDN,                        _______, KC_P4 , KC_P5 , KC_P6 ,KC_PAST,_______,
     _______,_______,_______,_______,_______,_______,                        _______, KC_P1 , KC_P2 , KC_P3 ,KC_PSLS,KC_EQL ,
                     _______,_______,                                                         KC_P0 ,KC_PENT,
                                     _______,                                        _______,
                                     _______,_______,                        _______,_______,
                                     _______,_______,                        _______,_______

  ),

  [_LOWER] = LAYOUT_5x6(
     KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                      KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
     _______,_______,_______,_______,_______,KC_PGUP,                      _______,_______,KC_INS ,_______,KC_PSCR,KC_SLCK,
     _______,KC_HOME,KC_PGUP,KC_PGDN,KC_END ,KC_PGDN,                      KC_LEFT,KC_DOWN,KC_UP  ,KC_RGHT,_______,_______,
     _______,_______,_______,_______,_______,_______,                      _______,_______,_______,_______,_______,KC_MUTE,
                     _______,_______,                                                      KC_VOLU,KC_VOLD,
                                     _______,                                      _______,
                                     _______,_______,                      _______,_______,
                                     _______,_______,                      _______,_______
  ),

  [_WITH_ALT] = LAYOUT_5x6(
     KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                      KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
     _______,_______,_______,_______,_______,_______,                      _______,_______,_______,_______,_______,_______,
     _______,_______,_______,_______,_______,_______,                      _______,_______,_______,_______,_______,_______,
     _______,_______,_______,_______,_______,_______,                      _______,_______,_______,_______,_______,_______,
                       KC_UP,KC_DOWN,                                                      KC_LEFT,KC_RGHT,
                                     _______,                                      _______,
                                     _______,_______,                      _______,_______,
                                     _______,_______,                      KC_SPC ,_______
  ),
};


