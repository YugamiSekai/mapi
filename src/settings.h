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

	char getTGA_ID();
	char getTGA_PALETTE();
	char getTGA_IMG_TYPE();
	void getTGA_PALETTE_START(char &ret);
	void getTGA_PALETTE_END(char &ret);
	char getTGA_PALETTE_SITE();
	void getTGA_ORIGIN_X(char &ret);
	void getTGA_ORIGIN_Y(char &ret);
	void getTGA_WIDTH(char &ret);
	void getTGA_HEIGHT(char &ret);
	char getTGA_BIST_PER_PIXEL();
	char getTGA_ATTR();
};

#endif
