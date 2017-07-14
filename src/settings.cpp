#include	"allinc.h"

Settings::Settings()
{
	// initialisize with defaults
	strcpy(&MODE, "b");
	MAX_CHARS = DEFAULT_MAX_CHARS;
	CHARTIME = DEFAULT_CHARTIME;
	strcpy(LOGFILE, DEFAULT_LOGFILE);

	TGA_ID = DEFAULT_TGA_ID;
	TGA_PALETTE = DEFAULT_TGA_PALETTE;
	TGA_IMG_TYPE = DEFAULT_TGA_IMG_TYPE;
	TGA_PALETTE_START = DEFAULT_TGA_PALETTE_START;
	TGA_PALETTE_END = DEFAULT_TGA_PALETTE_END;
	TGA_PALETTE_SIZE = DEFAULT_TGA_PALETTE_SIZE;
	TGA_ORIGIN_X = DEFAULT_TGA_ORIGIN_X;
	TGA_ORIGIN_Y = DEFAULT_TGA_ORIGIN_Y;
	TGA_WIDTH = DEFAULT_TGA_WIDTH;
	TGA_HEIGHT = DEFAULT_TGA_HEIGHT;
	TGA_BITS_PER_PIXEL = DEFAULT_TGA_BITS_PER_PIXEL;
	TGA_ATTR = DEFAULT_TGA_ATTR;
}

bool Settings::setMAX_CHARS(int char_count)
{
	if(char_count > 0)
	{
		MAX_CHARS = char_count;
		return true;
	}
	MAX_CHARS = DEFAULT_MAX_CHARS;
	return false;
}

char Settings::getMODE()
{
	return MODE;
}

int Settings::getMAX_CHARS()
{
	return MAX_CHARS;
}

bool Settings::setCHARTIME(float time)
{
	if(time > 0)
	{
		CHARTIME = time;
		return true;
	}
	CHARTIME = DEFAULT_CHARTIME;
	return false;
}

float Settings::getCHARTIME()
{
	return CHARTIME;
}

bool Settings::setLOGFILE(char file[])
{
	strcpy(LOGFILE, file);
	return true;
}

void Settings::getLOGFILE(char* ret)
{
	strcpy(ret, LOGFILE);
}

void Settings::getTGA_HEADER(char* header)
{
}

bool Settings::setTGA_WIDTH(int width)
{
	if(width > 0)
	{
		TGA_WIDTH = width;
		return true;
	}
	TGA_WIDTH = DEFAULT_TGA_WIDTH;
	return false;
}

int Settings::getTGA_WIDTH()
{
	return TGA_WIDTH;
}

bool Settings::setTGA_HEIGHT(int height)
{
	if(height > 0)
	{
		TGA_HEIGHT = height;
		return true;
	}
	TGA_HEIGHT = DEFAULT_TGA_HEIGHT;
	return false;
}

int Settings::getTGA_HEIGHT()
{
	return TGA_HEIGHT;
}
