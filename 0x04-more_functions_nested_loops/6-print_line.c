#include "main.h"

/**
 * print_line - it's print straight line
 *
 * @n:the long of the straight line
 * Return:void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
