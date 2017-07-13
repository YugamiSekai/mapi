#ifndef	__DEFINES_H
#define	__DEFINES_H

#define		DEFAULT_MAX_CHARS			10
#define 	DEFAULT_CHARTIME			1
#define		DEFAULT_LOGFILE				"file.txt"


/* tga header spec
tga head:
val	sice(B)		desc
00	1		id
00	1		no pallete
02	1		img type -> rgb (24Bit)
0000	2		pallete start
0000	2		pallete length
00	1		pallete entry size
0000	2		x-0 point
0000	2		y-0 point
XXXX	2		img width
XXXX	2		img height
18	1		bits per pixel
20	1		attr

	Bit	val	desc
	0-3	0010	attr per pixle
	4	0	horizontal 0 point -> left
	5	0	vertical 0 point -> bottom
	6-7	00	-
*/

#define		DEFAULT_TGA_FILE		"image.tga"

// tga header information
#define		DEFAULT_TGA_ID			0x00
#define		DEFAULT_TGA_PALETTE		0x00
#define		DEFAULT_TGA_IMG_TYPE		0x02
#define		DEFAULT_TGA_PALETTE_START	0x0000
#define		DEFAULT_TGA_PALETTE_END		0x0000
#define		DEFAULT_TGA_PALETTE_SIZE	0x00
#define		DEFAULT_TGA_ORIGIN_X		0x0000
#define		DEFAULT_TGA_ORIGIN_Y		0x0000
#define		DEFAULT_TGA_WIDTH		0x0004
#define		DEFAULT_TGA_HEIGHT		0x0004
#define		DEFAULT_TGA_BITS_PER_PIXEL	0x18
#define		DEFAULT_TGA_ATTR		0x20

#endif
