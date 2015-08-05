#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	    /*logically:
		KEYMAP(	ESC,	QUOT,	COMM,	DOT,	P,		Y,		F,		G,		C,		R,		L,		SLSH, \
				GRV,	A,		O,		E,		U,		I,		D,		H,		T,		N,		S,		MINS, \
				EQL,	SCLN,	Q,		J,		K,		X,		B,		M,		W,		V,		Z,		BSLS, \
				LGUI,	FN1,	FN0,	LSFT,	LCTL,	SPC,	BSPC,	DEL,	FN1,	RGUI \
		),*/
	    KEYMAP(	TAB,	ENT,	X,		I,		Y,		F,		D,		B, \
				ESC,	QUOT,	COMM,	DOT,	P,		G,		C,		R,		L,		SLSH, \
				GRV,	A,		O,		E,		U,		H,		T,		N,		S,		MINS, \
				EQL,	SCLN,	Q,		J,		K,		M,		W,		V,		Z,		BSLS, \
				LGUI,	FN1,	FN0,	LSFT,	LCTL,	SPC,	BSPC,	DEL,	FN1,	RGUI \
		)
};

const uint16_t PROGMEM fn_actions[] = {

};
