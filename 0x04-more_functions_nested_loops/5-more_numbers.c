#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times
 *
 */
void more_numbers(void)
{
	int s, t;

	for (s = 0; s < 10; s++)/*this for lines*/
	{
		for (t = 0; t <= 14; t++)/*this for numbers*/
		{
			if (t >= 10)
				_putchar(t / 10 + '0');
			_putchar(t % 10 + '0');
		}
		_putchar('\n');
	}
}
