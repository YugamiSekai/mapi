#ifndef	__SETTINGS_H
#define	__SETTINGS_H

class Settings
{
	int MAX_CHARS;
	float CHARTIME;
	char LOGFILE[256];

	char TGA_FILE[256];

	int TGA_ID;
	int TGA_PALETTE;
	int TGA_IMG_TYPE;
	int TGA_PALETTE_START;
	int TGA_PALETTE_END;
	int TGA_PALETTE_SIZE;
	int TGA_ORIGIN_X;
	int TGA_ORIGIN_Y;
	int TGA_WIDTH;
	int TGA_HEIGHT;
	int TGA_BITS_PER_PIXEL;
	int TGA_ATTR;

public:
	Settings();
	bool setMAX_CHARS(int char_count);
	int getMAX_CHARS();

	bool setCHARTIME(float time);
	float getCHARTIME();

	bool setLOGFILE(char file[256]);
	void getLOGFILE(char &ret);

	bool setTGA_FILE(char file[256]);
	void getTGA_FILE(char &ret);

	int getTGA_ID();
	int getTGA_PALETTE();
	int getTGA_IMG_TYPE();
	int getTGA_PALETTE_START();
	int getTGA_PALETTE_END();
	int getTGA_PALETTE_SITE();
	int getTGA_ORIGIN_X();
	int getTGA_ORIGIN_Y();
	int getTGA_WIDTH();
	int getTGA_HEIGHT();
	int getTGA_BIST_PER_PIXEL();
	int getTGA_ATTR();
};

#endif
