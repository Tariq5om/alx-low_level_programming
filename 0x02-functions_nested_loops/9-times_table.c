#include "main.h"

/**
* times_table - this function print the 9 times table
*
*/
void times_table(void)
{
	int n, m, p;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			p = n * m;
			if ((p / 10) != 0)
			_putchar((p / 10) + '0');
			else
			_putchar(' ');
			_putchar((p % 10) + '0');
			if (m != 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
    		_putchar('\n');
	}
}
