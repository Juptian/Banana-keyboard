// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
/* Copyright 2024 Sebastien Gosselin <sebastien.gosselin04@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

#define BL 0
#define NL 1
#define FL 2
#define ADJ 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     [BL] = LAYOUT(
    // ┌──────────────────────────┬────────┬────────────┬────────┬────────────────┬       ┬───────┬──────────────┬────────┬────────┬────────┐
         MO(NL),                   KC_Q,       KC_W,      KC_E,          KC_R,              
    // 
         MT(KC_LSFT, KC_ESCAPE),   KC_A,       KC_S,      KC_D,         KC_F,              
    // 
         MO(FL),                   KC_Z,       KC_X,      KC_C,         KC_V,              
    // 
                                            KC_SPACE,  MT(KC_LALT, KC_BACKSPACE), KC_DELETE          
    ),
     [NL] = LAYOUT(
    // ┌──────────┬────────┬────────────┬────────┬──────────┬       ┬─────────┬──────────┬────────┬────────┬────────┐
         KC_TRNS,  KC_EQL,  KC_MINUS,    KC_SCLN, KC_NO,            
    // 
         KC_1,     KC_2,    KC_3,        KC_4,    KC_5,              
    // 
         KC_NO,  KC_NO,   KC_NO,         KC_NO,   KC_TAB,            
    // 
                            KC_LGUI,     KC_LSFT, KC_TRNS            
    
    ),

     [FL] = LAYOUT(
    // ┌──────────┬────────┬────────────┬────────┬──────────┬      ┬─────────┬──────────┬────────┬────────┬────────┐
         KC_NO,    KC_NO,   KC_NO,       KC_NO,   KC_NO,            
    // 
         KC_F1,    KC_F2,   KC_F3,       KC_F4,   KC_F5,           
    // 
         KC_TRNS,  KC_NO,   KC_F11,      KC_F12,  KC_TAB,           
    // 
                            KC_LGUI,  KC_TRNS, KC_TRNS                 
    
    ),

     [ADJ] = LAYOUT(
    // ┌──────────┬────────┬────────────┬────────┬──────────┬      ┬─────────┬──────────┬────────────┬────────┬────────┐
         KC_MUTE,    KC_VOLD,   KC_VOLU,   KC_NO,    KC_NO,            
    // 
         KC_MPLY,    KC_MPRV,   KC_MNXT,    KC_NO,    KC_NO,           
    // 
         KC_TRNS,  KC_FIND,   KC_CUT,      KC_COPY,  KC_PSTE,          
    // 
                            KC_SPACE,  KC_TRNS, KC_TRNS                     
    
    )

    /*
     KC_T,      KC_T,                      KC_U,     KC_I,      KC_O,
     KC_G,      KC_H,                      KC_J,     KC_K,      KC_L,
     KC_B,      KC_N,                      KC_M,     KC_LCBR,   KC_P,
     TG(ADJ),   MT(KC_LEFT_CTRL, KC_TAB),  KC_SPACE
     */
    /*
     KC_LBRC,   KC_RBRC,   KC_SCLN,  KC_QUOT,   KC_GRAVE,
     KC_6,      KC_7,      KC_8,     KC_9,      KC_0,
     KC_COMM,   KC_NO,     KC_NO,    KC_RCBR,   KC_NO,
     KC_ENT,   KC_TRNS,  KC_TRNS
    */

    /*
     KC_NO,     KC_NO,     KC_NO,    KC_NO,    KC_NO,
     KC_F6,     KC_F7,     KC_F8,    KC_F9,    KC_F10,
     KC_NO,     KC_NO,     KC_NO,    KC_NO,    KC_NO,
     KC_TRNS,  KC_TRNS,  KC_TRNS 
     */

    /*
     KC_NO,     KC_UP,     KC_NO,    KC_NO,    KC_NO,
     KC_LEFT,   KC_DOWN,   KC_RGHT,  KC_NO,    KC_NO,
     KC_NO,     KC_NO,     KC_NO,    KC_NO,    KC_NO,
     KC_TRNS,  KC_TRNS,  KC_TRNS 
     */
    /**
     * "E6", "D7", "C6", "D4", "D0"
     * "F7", "F6", "B1", "B3"
     */

};
