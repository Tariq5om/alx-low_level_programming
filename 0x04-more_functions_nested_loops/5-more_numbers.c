#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times
 *
 */
void more_numbers(void)
{
	int l1, l2, num, rev, dig;

	for (l1 = 1; (l1 >= 1 && l1 <= 10); l1++)
	{
		for (l2 = 0; (l2 >= 0 && l2 <= 14); l2++)
		{
			num = l2;
			while (num > 0)
			{
				dig = num % 10;
				rev = rev * 10 + dig;
				num = num / 10;
			}
			while (rev > 0)
			{
				dig = rev % 10;
				_putchar(dig + '0');
				rev = rev / 10;
			}
		}
		_putchar('\n');
	}
}
