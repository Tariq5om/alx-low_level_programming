#include "main.h"

/**
* jack_bauer - this a function that print every minute in a day
*
*/
void jack_bauer(void)
{
	int f, t, w, o;

	for (f = 0; f < 10; f++)
	{
		for (t = 0; t < 10; t++)
		{
			if (f == 2 && t == 4)
				break;
			for (w = 0; w < 6; w++)
			{
				for (o = 0; o < 10; o++)
				{
					_putchar(f + '0');
					_putchar(t + '0');
					_putchar(':');
					_putchar(w + '0');
					_putchar(o + '0');
					_putchar('\n');
				}
				o = 0;
			}
			o = 0;
			w = 0;
		}
		if (f == 2 && t == 4)
                        break;
		o = 0;
		w = 0;
		t = 0;
	}
}
