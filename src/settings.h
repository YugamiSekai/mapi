#ifndef	__SETTINGS_H
#define	__SETTINGS_H

class Settings
{
	int MAX_CHARS;
	float CHARTIME;
	char LOGFILE[256];

	char TGA_FILE[256];

	char TGA_ID;
	char TGA_PALETTE;
	char TGA_IMG_TYPE;
	char TGA_PALETTE_START[2];
	char TGA_PALETTE_END[2];
	char TGA_PALETTE_SIZE;
	char TGA_ORIGIN_X[2];
	char TGA_ORIGIN_Y[2];
	char TGA_WIDTH[2];
	char TGA_HEIGHT[2];
	char TGA_BITS_PER_PXIXEL;
	char TGA_ATTR;
};

#endif
