#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	    /***** Layer 0 - dvorak ******
		logically:
		KEYMAP(	ESC,	QUOT,	COMM,	DOT,	P,		Y,		F,		G,		C,		R,		L,		SLSH, \
				GRV,	A,		O,		E,		U,		I,		D,		H,		T,		N,		S,		MINS, \
				EQL,	SCLN,	Q,		J,		K,		X,		B,		M,		W,		V,		Z,		BSLS, \
				LGUI,	FN1,	FN0,	LSFT,	LCTL,	SPC,	BSPC,	DEL,	FN1,	RGUI \
		),*/
	    KEYMAP(	TAB,	FN25,	X,		I,		Y,		F,		D,		B, \
				ESC,	QUOT,	COMM,	DOT,	P,		G,		C,		R,		L,		SLSH, \
				GRV,	A,		O,		E,		U,		H,		T,		N,		S,		MINS, \
				EQL,	SCLN,	Q,		J,		K,		M,		W,		V,		Z,		BSLS, \
				LGUI,	FN1,	FN0,	LSFT,	LCTL,	SPC,	BSPC,	DEL,	FN1,	RGUI \
		)

	    /***** Layer 1 - numbers and symbols ******/
	    KEYMAP(	TRNS,	TRNS,	TRNS,	FN18,	FN17,	TRNS,	TRNS,	TRNS, \
				TRNS,	FN11,	FN12,	FN21,	FN22,	P7,		P8,		P9,		PMNS,	TRNS, \
				TRNS,	FN13,	FN14,	FN19,	FN10,	P4,		P5,		P6,		PPLS,	TRNS, \
				TRNS,	FN15,	FN16,	LBRC,	RBRC,	P1,		P2,		P3,		PENT,	TRNS, \
				TRNS,	TRNS,	TRNS,	TRNS,	TRNS,	TRNS,	TRNS,	P0,		TRNS,	PDOT \
		)

	    /***** Layer 2 - nav and f-keys ******/
	    KEYMAP(	TRNS,	TRNS,	TRNS,	PGDN,	PGUP,	TRNS,	TRNS,	TRNS, \
				TRNS,	TRNS,	HOME,	UP,		END,	F7,		F8,		F9,		F10,	TRNS, \
				TRNS,	TRNS,	LEFT,	DOWN,	RGHT,	F4,		F5,		F6,		F11,	TRNS, \
				TRNS,	TRNS,	TRNS,	TRNS,	TRNS,	F1,		F2,		F3,		F12,	TRNS, \
				TRNS,	TRNS,	TRNS,	TRNS,	TRNS,	TRNS,	TRNS,	TRNS,	TRNS,	TRNS \
		)

	    /***** Layer 3 - qwerty ******/
	    KEYMAP(	TAB,	FN25,	B,		G,		T,		Y,		H,		N, \
				ESC,	Q,		W,		E,		R,		U,		I,		O,		P,		SLSH, \
				GRV,	A,		S,		D,		F,		J,		K,		L,		SCLN,	MINS, \
				EQL,	Z,		X,		C,		V,		M,		COMM,	DOT,	BSLS,	RSHIFT, \
				LGUI,	FN1,	FN0,	LSFT,	LCTL,	SPC,	BSPC,	DEL,	FN1,	RGUI \
		)

};

const uint16_t PROGMEM fn_actions[] = {
	[0] = ACTION_LAYER_MOMENTARY(1), //activate layer 1
	[1] = ACTION_LAYER_MOMENTARY(2), //activate layer 2

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

	[25] = ACTION_MODS_TAP_KEY(MOD_ALT, KC_ENT), //}

};
