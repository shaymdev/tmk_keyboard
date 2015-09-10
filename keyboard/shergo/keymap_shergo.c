#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	    /***** Layer 0 - dvorak ******
		logically:
		KEYMAP(	ESC,	QUOT,	COMM,	DOT,	P,		Y,		F,		G,		C,		R,		L,		SLSH, \
				GRV,	A,		O,		E,		U,		I,		D,		H,		T,		N,		S,		MINS, \
				EQL,	SCLN,	Q,		J,		K,		X,		B,		M,		W,		V,		Z,		BSLS, \
				LGUI,	FN3,	FN2,	LSFT,	LCTL,	SPC,	BSPC,	DEL,	FN3,	RGUI \
		),*/
	    KEYMAP(	FN25,	GRV,	X,		I,		Y,		F,		D,		B, \
				ESC,	QUOT,	COMM,	DOT,	P,		G,		C,		R,		L,		SLSH, \
				TAB,	A,		O,		E,		U,		H,		T,		N,		S,		MINS, \
				EQL,	SCLN,	Q,		J,		K,		M,		W,		V,		Z,		BSLS, \
				LGUI,	FN3,	FN2,	LSFT,	LCTL,	BSPC,	SPC,	FN3,	FN27,	RGUI \
		),

	    /***** Layer 1 - qwerty ******///TODO: see if when dvorak is default the backslash/minus thing is correct. Not sure how to handle TRNS
	    KEYMAP(	FN25,	GRV,	B,		G,		T,		Y,		H,		N, \
				ESC,	Q,		W,		E,		R,		U,		I,		O,		P,		SLSH, \
				TAB,	A,		S,		D,		F,		J,		K,		L,		SCLN,	QUOT, \
				EQL,	Z,		X,		C,		V,		M,		COMM,	DOT,	BSLS,	MINS, \
				LGUI,	FN3,	FN2,	LSFT,	LCTL,	BSPC,	SPC,	FN23,	DEL,	RGUI \
		),


	    /***** Layer 2 - numbers and symbols ******/
	    KEYMAP(	TRNS,	TRNS,	TRNS,	FN18,	FN17,	TRNS,	TRNS,	TRNS, \
				TRNS,	FN11,	FN12,	FN21,	FN22,	P7,		P8,		P9,		PMNS,	TRNS, \
				FN26,	FN13,	FN14,	FN19,	FN10,	P4,		P5,		P6,		PPLS,	TRNS, \
				TRNS,	FN15,	FN16,	LBRC,	RBRC,	P1,		P2,		P3,		PENT,	TRNS, \
				TRNS,	FN4,	TRNS,	TRNS,	TRNS,	TRNS,	TRNS,	P0,		TRNS,	PDOT \
		),

	    /***** Layer 3 - nav and f-keys ******/
	    KEYMAP(	TRNS,	TRNS,	TRNS,	PGDN,	PGUP,	VOLU,	VOLD,	MUTE, \
				TRNS,	TRNS,	HOME,	UP,		END,	F7,		F8,		F9,		F10,	TRNS, \
				CAPS,	TRNS,	LEFT,	DOWN,	RGHT,	F4,		F5,		F6,		F11,	TRNS, \
				FN8,	NLCK,	TRNS,	TRNS,	TRNS,	F1,		F2,		F3,		F12,	FN9, \
				TRNS,	TRNS,	FN5,	TRNS,	TRNS,	TRNS,	TRNS,	TRNS,	TRNS,	TRNS \
		)

};

const uint16_t PROGMEM fn_actions[] = {
	[2] = ACTION_LAYER_MOMENTARY(2),
	[3] = ACTION_LAYER_MOMENTARY(3),
	[4] = ACTION_LAYER_TOGGLE(2),
	[5] = ACTION_LAYER_TOGGLE(3),

	[8] = ACTION_DEFAULT_LAYER_SET(0), //default as dvorak
	[9] = ACTION_DEFAULT_LAYER_SET(1), //default as qwerty


	[10] = ACTION_MODS_KEY(MOD_LSFT, KC_0), //)
	[11] = ACTION_MODS_KEY(MOD_LSFT, KC_1), //!
	[12] = ACTION_MODS_KEY(MOD_LSFT, KC_2), //@
	[13] = ACTION_MODS_KEY(MOD_LSFT, KC_3), //#
	[14] = ACTION_MODS_KEY(MOD_LSFT, KC_4), //$
	[15] = ACTION_MODS_KEY(MOD_LSFT, KC_5), //%
	[16] = ACTION_MODS_KEY(MOD_LSFT, KC_6), //^
	[17] = ACTION_MODS_KEY(MOD_LSFT, KC_7), //&
	[18] = ACTION_MODS_KEY(MOD_LSFT, KC_8), //*
	[19] = ACTION_MODS_KEY(MOD_LSFT, KC_9), //(

	[21] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC), //{
	[22] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC), //}

	[25] = ACTION_MODS_TAP_KEY(MOD_LALT, KC_ENT), 
	[26] = ACTION_MODS_KEY(MOD_LALT | MOD_SCTL, KC_TAB), 
	[27] = ACTION_MODS_TAP_KEY(MOD_RALT, KC_DEL), 

};
