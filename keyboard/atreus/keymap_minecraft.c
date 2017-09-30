#include "keymap_common.h"

/* The default Atreus layout. First layer is normal keys, second
   (momentary fn layer) is numbers, most punctuation, and
   arrows. Third (modal, persistent) layer is function keys and other
   rarely-used keys. */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* 0: mostly letters */
  KEYMAP(KC_NO, KC_Q, KC_W, KC_E, KC_R,                             KC_FN2, KC_NO, KC_FN2, KC_NO, KC_NO, \
         KC_LSFT, KC_A, KC_S, KC_D, KC_F,                           KC_FN3, KC_FN4, KC_FN3, KC_FN5, KC_FN12, \
         KC_Z, KC_X, KC_C, KC_V, KC_B,                              KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
         KC_ESC, KC_TAB, KC_LALT, KC_FN0, KC_SPC, KC_LCTL, KC_FN10, KC_FN17, KC_NO, KC_FN16, KC_FN15, KC_NO),

  /* 1: punctuation and numbers */
  KEYMAP(KC_NO, KC_9, KC_8, KC_7, KC_NO,                            KC_FN2, KC_NO, KC_FN2, KC_NO, KC_NO, \
         KC_NO, KC_6, KC_5, KC_4, KC_NO,                            KC_FN3, KC_FN4, KC_FN3, KC_FN5, KC_FN12, \
         KC_NO, KC_3, KC_2, KC_1, KC_FN1,                           KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
         KC_ESC, KC_TAB, KC_LALT, KC_FN0, KC_SPC, KC_LCTL, KC_FN10, KC_FN17, KC_NO, KC_FN16, KC_FN15, KC_NO)
};

const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
  [1] = ACTION_FUNCTION(BOOTLOADER),

  [2] = ACTION_MOUSEKEY(KC_MS_U), // mouse movement
  [3] = ACTION_MOUSEKEY(KC_MS_D),
  [4] = ACTION_MOUSEKEY(KC_MS_L),
  [5] = ACTION_MOUSEKEY(KC_MS_R),
  [6] = ACTION_MOUSEKEY(KC_WH_U), // wheel
  [7] = ACTION_MOUSEKEY(KC_WH_D),
  [8] = ACTION_MOUSEKEY(KC_WH_L),
  [9] = ACTION_MOUSEKEY(KC_WH_R),
  [10] = ACTION_MOUSEKEY(KC_BTN1), // clicks
  [11] = ACTION_MOUSEKEY(KC_BTN2),
  [12] = ACTION_MOUSEKEY(KC_BTN3),
  [13] = ACTION_MOUSEKEY(KC_BTN4),
  [14] = ACTION_MOUSEKEY(KC_BTN5),
  [15] = ACTION_MOUSEKEY(KC_ACL0), // acceleration settings
  [16] = ACTION_MOUSEKEY(KC_ACL1),
  [17] = ACTION_MOUSEKEY(KC_ACL2),
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  if (id == BOOTLOADER) {
    bootloader();
  }
}
