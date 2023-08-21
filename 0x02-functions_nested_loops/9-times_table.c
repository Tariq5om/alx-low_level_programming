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
			putchar((p / 10) + '0');
			else
			putchar(' ');
			putchar((p % 10) + '0');
			if (m != 9)
			{
			putchar(',');
			putchar(' ');
			}
		}
		if (!(n == 9 && m == 10))
		putchar('\n');
	}
}
