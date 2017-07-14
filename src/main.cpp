#include	"allinc.h"


int main( int argc, char* argv[] )
{
	#ifdef DEBUG
	int j;
	for(j = 0; j < argc; j++)
	{
		printf("\n%i", j);
		printf(argv[j]);
	}
	#endif

	Settings set;

	if(set.getMODE() == 'c')
	{
		// we do this here to increase performance cause else getCHARTIME would be called a few thousand times a second
		int chartime = set.getCHARTIME();

		char rand_char;
		int counts[128];
		int max_val;
		int max_index;
		int charcount = 0;
		int start, end;
		int i;

		char file[256];
		set.getLOGFILE(file);

		FILE* f = fopen(file, "w");
		if (f != NULL)
		{
			fprintf(f, "Char mode:\n");
		}
    
		for(; charcount < set.getMAX_CHARS(); charcount++)
		{
			start = end = clock();
			while(chartime > (end - start) / CLOCKS_PER_SEC)
			{
				srand(time(NULL));
				rand_char = rand() % 128;
				counts[(int)rand_char] += 1;
				end = clock();
			}
			
			//reset max vars
			max_val = 0;
			max_index = -1;
			for(i = 0; i < 128; i++)
			{
				if(counts[i] > max_val)
				{
					max_val = counts[i];
					max_index = i;
				}
				counts[i] = 0;
			}
			printf("%c\n", max_index);
			if (f != NULL)
			{
				fprintf(f, "%c\n", max_index);
			}
		}
		fclose(f);
	}
	else if(set.getMODE() == 'i')
	{
		// we do this here to increase performance cause else getCHARTIME would be called a few thousand times a second
		int chartime = set.getCHARTIME();

		int rand_color;
		int counts[2 ^ 24];
		int max_val;
		int max_index;
		int pix_count = 0;
		int pix_sum = set.getTGA_WIDTH() * set.getTGA_HEIGHT();
		int start, end;
		int i;
		FILE* f = fopen(DEFAULT_TGA_FILE, "w");
		if(f != NULL)
		{
			// write tga header to file
			fprintf(f, "%c", DEFAULT_TGA_ID);
			fprintf(f, "%c", DEFAULT_TGA_PALETTE);
			fprintf(f, "%c", DEFAULT_TGA_IMG_TYPE);
			fprintf(f, "%c%c", DEFAULT_TGA_PALETTE_START);
			fprintf(f, "%c%c", DEFAULT_TGA_PALETTE_END);
			fprintf(f, "%c", DEFAULT_TGA_PALETTE_SIZE);
			fprintf(f, "%c%c", DEFAULT_TGA_ORIGIN_X);
			fprintf(f, "%c%c", DEFAULT_TGA_ORIGIN_Y);
			fprintf(f, "%c%c", DEFAULT_TGA_WIDTH);
			fprintf(f, "%c%c", DEFAULT_TGA_HEIGHT);
			fprintf(f, "%c", DEFAULT_TGA_BITS_PER_PIXEL);
			fprintf(f, "%c", DEFAULT_TGA_ATTR);
		}
		for(; pix_count < pix_sum; pix_count++)
		{
			start = end = clock();
			while(chartime > (end - start) / CLOCKS_PER_SEC)
			{
				srand(time(NULL));
				rand_color = rand() % (2 ^ 24);
				counts[rand_color] += 1;
				end = clock();
			}

			//reset max vars
			max_val = 0;
			max_index = -1;

			for(i = 0; i < (2 ^ 24); i++)
			{
				if(counts[i] > max_val)
				{
					max_val = counts[i];
					max_index = i;
				}
				counts[i] = 0;
			}
			printf("Generated %i out of %i pixels\n", pix_count + 1, pix_sum);
			if(f != NULL)
			{
				max_index = ~max_index;
				fprintf(f, "%c", max_index);
				max_index = max_index >> 8;
				fprintf(f, "%c", max_index);
				max_index = max_index >> 8;
				fprintf(f, "%c", max_index);
			}
		}
		fclose(f);
	}
	else
	{
		// we do this here to increase performance cause else getCHARTIME would be called a few thousand times a second
		int chartime = set.getCHARTIME();

		bool rand_bool;
		int counts[2];
		int boolcount = 0;
		int start, end;
		int i;

		char file[256];
		set.getLOGFILE(file);

		FILE* f = fopen(file, "w");
		if (f != NULL)
		{
		    fprintf(f, "Bool mode:\n");
		}

	        for(; boolcount < set.getMAX_CHARS(); boolcount++)
		{
			start = end = clock();
			while(chartime > (end - start) / CLOCKS_PER_SEC)
			{
				srand(time(NULL));
				rand_bool = (bool)(rand() % 2);
				counts[(int)rand_bool] += 1;
				end = clock();
			}
			if(counts[0] > counts[1])
			{
				printf("false\n");
				if (f != NULL)
				{
					fprintf(f, "false\n");
				}
			}
			else
			{
				printf("true\n");
				if (f != NULL)
				{
					fprintf(f, "true\n");
				}
			}
			counts[0] = counts[1] = 0;
		}
	}
	return 0;
}
