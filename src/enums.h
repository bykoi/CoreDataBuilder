#pragma once

/* cloth types enum */
enum {
	CLOTH_TYPE_HAIR,
	CLOTH_TYPE_SHIRT,
	CLOTH_TYPE_PANTS,
	CLOTH_TYPE_SHOES,
	CLOTH_TYPE_FACE,
	CLOTH_TYPE_HAND,
	CLOTH_TYPE_BACK,
	CLOTH_TYPE_HAT,
	CLOTH_TYPE_NECK,
	CLOTH_TYPE_ANCES
};

/* item types enum */
enum { // not all existing types there, you can add the rest by yourself
	ITEM_TYPE_FIST,
	ITEM_TYPE_WRENCH,
	ITEM_TYPE_FOREGROUND_NO_ANIM = 17,
	ITEM_TYPE_BACKGROUND,
	ITEM_TYPE_SEED,
	ITEM_TYPE_CLOTH = 20,
	ITEM_TYPE_ARTIFACT = 107
};