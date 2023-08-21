#include "main.h"

/**
* jack_bauer - this a function that print every minute in a day
*
*/
void jack_bauer(void)
{
	int f, t, w, o;

	for (f = 0; f < 3; f++)
	{
		for (t = 0; t < 4; t++)
		{
			for (w = 0; w < 6; w++)
			{
				for (o = 0; o < 10; o++)
				{
					putchar(f + '0');
					putchar(t + '0');
					putchar(':');
					putchar(w + '0');
					putchar(o + '0');
					putchar('\n');
				}
				o = 0;
			}
			o = 0;
			w = 0;
		}
		o = 0;
		w = 0;
		t = 0;
	}
}
