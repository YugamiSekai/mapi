#ifndef	__SETTINGS_H
#define	__SETTINGS_H

class Settings
{
	char MODE;
	int MAX_CHARS;
	float CHARTIME;
	char LOGFILE[256];

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
	char getMODE();

	bool setMAX_CHARS(int char_count);
	int getMAX_CHARS();

	bool setCHARTIME(float time);
	float getCHARTIME();

	bool setLOGFILE(char file[]);
	void getLOGFILE(char* ret);

	void getTGA_HEADER(char* header);

	bool setTGA_WIDTH(int width);
	int getTGA_WIDTH();

	bool setTGA_HEIGHT(int height);
	int getTGA_HEIGHT();
};

#endif
