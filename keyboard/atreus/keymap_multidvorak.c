#include "keymap_common.h"

/* This layout is designed to be used on machines where the OS is
   already set to a dvorak layout. It assumes that the dvorak mapping
   will be happening on the PC side and sends "un-dvorakized"
   keycodes. (So it sends qwerty letters, but specially-shuffled
   punctuation.)  This is helpful for laptops where you want to be
   able to use the internal keyboard in dvorak without having to
   change the OS mappings. However, it also includes a pair of layers
   that implement the dvorak mapping in firmware, so you can type in
   dvorak on a machine that is set up for qwerty. */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* 0: qwerty */
  KEYMAP(KC_Q,   KC_W,   KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,    \
         KC_A,   KC_S,   KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,   KC_K,    KC_L,    KC_SCLN, \
         KC_Z,   KC_X,   KC_C,    KC_V,    KC_B,                      KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH, \
         KC_ESC, KC_TAB, KC_LGUI, KC_LSFT, KC_BSPC, KC_LCTL, KC_LALT, KC_SPC,  KC_FN1, KC_QUOT, KC_LBRC, KC_ENT), \
         // KC_MINS and KC_LBRC are inverse-dvorakized


  /* 1: fn with undvorak-ized punctuation */
  KEYMAP(SHIFT(KC_1), SHIFT(KC_2),   SHIFT(KC_MINS), SHIFT(KC_EQUAL), SHIFT(KC_BSLS),                    KC_UP,       KC_7,   KC_8, KC_9,    SHIFT(KC_8),    \
         SHIFT(KC_3), SHIFT(KC_4),   SHIFT(KC_9),    SHIFT(KC_0),     KC_GRAVE,                          KC_DOWN,     KC_4,   KC_5, KC_6,    SHIFT(KC_RBRC), \
         SHIFT(KC_5), SHIFT(KC_6),   KC_MINS,        KC_EQUAL,        SHIFT(KC_GRAVE),                   SHIFT(KC_7), KC_1,   KC_2, KC_3,    KC_BSLS,        \
         KC_FN2,      SHIFT(KC_INS), KC_LGUI,        KC_LSFT,         KC_DEL,          KC_LCTL, KC_LALT, KC_SPC,      KC_FN1, KC_0, KC_RBRC, KC_ENT),        \

  /* 2: arrows and function keys */
  KEYMAP(KC_INS,  KC_HOME,     KC_UP,   KC_END,   KC_PGUP,                   KC_UP,   KC_F7,   KC_F8,  KC_F9,  KC_F10,        \
         KC_DEL,  KC_LEFT,     KC_DOWN, KC_RIGHT, KC_PGDN,                   KC_DOWN, KC_F4,   KC_F5,  KC_F6,  KC_F11,        \
         KC_FN10, KC__VOLUP,   KC_NO,   KC_NO,    KC_FN0,                    KC_FN5,   KC_F1,   KC_F2,  KC_F3,  KC_F12,        \
         KC_FN15, KC__VOLDOWN, KC_LGUI, KC_LSFT,  KC_BSPC, KC_LCTL, KC_LALT, KC_SPC,  KC_FN3, KC_PSCREEN, KC_SLCK, KC_PAUSE), \

  /* 3: hard dvorak */
  KEYMAP(KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,                      KC_F,   KC_G,   KC_C,    KC_R,    KC_L,    \
         KC_A,    KC_O,    KC_E,    KC_U,    KC_I,                      KC_D,   KC_H,   KC_T,    KC_N,    KC_S,    \
         KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,                      KC_B,   KC_M,   KC_W,    KC_V,    KC_Z,    \
         KC_ESC,  KC_TAB,  KC_LGUI, KC_LSFT, KC_BSPC, KC_LCTL, KC_LALT, KC_SPC, KC_FN6, KC_MINS, KC_SLSH, KC_ENT), \

  /* 4: hard dvorak fn */
  KEYMAP(SHIFT(KC_1), SHIFT(KC_2),   SHIFT(KC_LBRC), SHIFT(KC_RBRC), SHIFT(KC_BSLS),                    KC_UP,       KC_7,   KC_8, KC_9,     SHIFT(KC_8),     \
         SHIFT(KC_3), SHIFT(KC_4),   SHIFT(KC_9),    SHIFT(KC_0),    KC_GRAVE,                          KC_DOWN,     KC_4,   KC_5, KC_6,     SHIFT(KC_EQUAL), \
         SHIFT(KC_5), SHIFT(KC_6),   KC_LBRC,        KC_RBRC,        SHIFT(KC_GRAVE),                   SHIFT(KC_7), KC_1,   KC_2, KC_3,     KC_BSLS,         \
         KC_FN7,      SHIFT(KC_INS), KC_LGUI,        KC_LSFT,        KC_DEL,          KC_LCTL, KC_LALT, KC_SPC,      KC_FN6, KC_0, KC_EQUAL, KC_ENT),         \

  /* 5: hard dvorak L2 */
  KEYMAP(KC_INS, KC_HOME,     KC_UP,   KC_END,   KC_PGUP,                   KC_UP,   KC_F7,   KC_F8,  KC_F9,  KC_F10, \
         KC_DEL, KC_LEFT,     KC_DOWN, KC_RIGHT, KC_PGDN,                   KC_DOWN, KC_F4,   KC_F5,  KC_F6,  KC_F11, \
         KC_NO,  KC__VOLUP,   KC_NO,   KC_NO,    KC_NO,                     KC_NO,   KC_F1,   KC_F2,  KC_F3,  KC_F12, \
         KC_NO,  KC__VOLDOWN, KC_LGUI, KC_LSFT,  KC_BSPC, KC_LCTL, KC_LALT, KC_SPC,  KC_FN8,  KC_NO,  KC_NO,  KC_FN10), \

  /* 6: qwerty with Mac modifier swap */
  KEYMAP(KC_Q,   KC_W,   KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    \
         KC_A,   KC_S,   KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, \
         KC_Z,   KC_X,   KC_C,    KC_V,    KC_B,                      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, \
         KC_ESC, KC_TAB, KC_LGUI, KC_LSFT, KC_BSPC, KC_LCTL, KC_LALT, KC_SPC,  KC_FN11, KC_QUOT, KC_LBRC, KC_ENT), \
         // KC_MINS and KC_LBRC are inverse-dvorakized

  /* 7: fn with undvorak-ized punctuation */
  KEYMAP(SHIFT(KC_1), SHIFT(KC_2),   SHIFT(KC_MINS), SHIFT(KC_EQUAL), SHIFT(KC_BSLS),                    KC_UP,       KC_7,    KC_8, KC_9,    SHIFT(KC_8),    \
         SHIFT(KC_3), SHIFT(KC_4),   SHIFT(KC_9),    SHIFT(KC_0),     KC_GRAVE,                          KC_DOWN,     KC_4,    KC_5, KC_6,    SHIFT(KC_RBRC), \
         SHIFT(KC_5), SHIFT(KC_6),   KC_MINS,        KC_EQUAL,        SHIFT(KC_GRAVE),                   SHIFT(KC_7), KC_1,    KC_2, KC_3,    KC_BSLS,        \
         KC_FN12,     SHIFT(KC_INS), KC_LALT,        KC_LSFT,         KC_DEL,          KC_LCTL, KC_LGUI, KC_SPC,      KC_FN11, KC_0, KC_RBRC, KC_ENT), \

  /* 8: arrows and function keys */
  KEYMAP(KC_INS, KC_HOME,     KC_UP,   KC_END,   KC_PGUP,                   KC_UP,   KC_F7,   KC_F8,      KC_F9,   KC_F10,    \
         KC_DEL, KC_LEFT,     KC_DOWN, KC_RIGHT, KC_PGDN,                   KC_DOWN, KC_F4,   KC_F5,      KC_F6,   KC_F11,    \
         KC_NO,  KC__VOLUP,   KC_NO,   KC_NO,    KC_FN3,                    KC_FN14, KC_F1,   KC_F2,      KC_F3,   KC_F12,    \
         KC_NO,  KC__VOLDOWN, KC_LGUI, KC_LSFT,  KC_BSPC, KC_LCTL, KC_LALT, KC_SPC,  KC_FN13, KC_PSCREEN, KC_SLCK, KC_PAUSE), \

  /* 9: hard dvorak - Mac mod swap */
  KEYMAP(KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,                      KC_F,   KC_G,    KC_C,    KC_R,    KC_L,    \
         KC_A,    KC_O,    KC_E,    KC_U,    KC_I,                      KC_D,   KC_H,    KC_T,    KC_N,    KC_S,    \
         KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,                      KC_B,   KC_M,    KC_W,    KC_V,    KC_Z,    \
         KC_ESC,  KC_TAB,  KC_LGUI, KC_LSFT, KC_BSPC, KC_LCTL, KC_LALT, KC_SPC, KC_FN16, KC_MINS, KC_SLSH, KC_ENT), \

  /* 10: hard dvorak fn */
  KEYMAP(SHIFT(KC_1), SHIFT(KC_2),   SHIFT(KC_LBRC), SHIFT(KC_RBRC), SHIFT(KC_BSLS),                    KC_UP,       KC_7,    KC_8, KC_9,     SHIFT(KC_8),     \
         SHIFT(KC_3), SHIFT(KC_4),   SHIFT(KC_9),    SHIFT(KC_0),    KC_GRAVE,                          KC_DOWN,     KC_4,    KC_5, KC_6,     SHIFT(KC_EQUAL), \
         SHIFT(KC_5), SHIFT(KC_6),   KC_LBRC,        KC_RBRC,        SHIFT(KC_GRAVE),                   SHIFT(KC_7), KC_1,    KC_2, KC_3,     KC_BSLS,         \
         KC_FN17,     SHIFT(KC_INS), KC_LGUI,        KC_LSFT,        KC_DEL,          KC_LCTL, KC_LALT, KC_SPC,      KC_FN16, KC_0, KC_EQUAL, KC_ENT),         \

  /* 11: hard dvorak L2 */
  KEYMAP(KC_INS, KC_HOME,     KC_UP,   KC_END,   KC_PGUP,                   KC_UP,   KC_F7,    KC_F8,  KC_F9,  KC_F10,   \
         KC_DEL, KC_LEFT,     KC_DOWN, KC_RIGHT, KC_PGDN,                   KC_DOWN, KC_F4,    KC_F5,  KC_F6,  KC_F11,   \
         KC_NO,  KC__VOLUP,   KC_NO,   KC_NO,    KC_NO,                     KC_FN19,   KC_F1,    KC_F2,  KC_F3,  KC_F12, \
         KC_NO,  KC__VOLDOWN, KC_LGUI, KC_LSFT,  KC_BSPC, KC_LCTL, KC_LALT, KC_SPC,  KC_FN18,  KC_NO,  KC_NO,  KC_FN10)
};

const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_FUNCTION(BOOTLOADER),

  [1] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
  [2] = ACTION_LAYER_ON(2, 1),  // switch to layer 2
  [3] = ACTION_LAYER_OFF(2, 1),  // switch back to layer 0
  [4] = ACTION_LAYER_MOMENTARY(2),  // to Fn overlay

  [5] = ACTION_LAYER_ON(3, 1),  // to hard dvorak
  [6] = ACTION_LAYER_MOMENTARY(4),  // to hard dvorak's fn
  [7] = ACTION_LAYER_ON(5, 1),  // switch to layer 2 hard
  [8] = ACTION_LAYER_OFF(5, 1),  // switch back to layer 0 hard
  [9] = ACTION_LAYER_OFF(3, 1), // back to soft dvorak

  [10] = ACTION_LAYER_ON(6, 1),  // to soft dvorak with Mac modifier swap
  [11] = ACTION_LAYER_MOMENTARY(7), //
  [12] = ACTION_LAYER_ON(8, 1),  // switch to layer 2 hard
  [13] = ACTION_LAYER_OFF(8, 1),  // switch back to layer 0 hard
  [14] = ACTION_LAYER_OFF(6, 1), // back to soft dvorak

  [15] = ACTION_LAYER_ON(9, 1),  // to hard dvorak with Mac modifier swap
  [16] = ACTION_LAYER_MOMENTARY(10), //
  [17] = ACTION_LAYER_ON(11, 1),  // switch to layer 2 hard
  [18] = ACTION_LAYER_OFF(11, 1),  // switch back to layer 0 hard
  [19] = ACTION_LAYER_OFF(9, 1) // back to soft dvorak
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  if (id == BOOTLOADER) {
    bootloader();
  }
}
