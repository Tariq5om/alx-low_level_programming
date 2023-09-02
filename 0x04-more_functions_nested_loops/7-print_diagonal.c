#include "main.h"

/**
 * print_diagonal - it is a function.
 *
 * @n: the numbers of diagonals
 */
void print_diagonal(int n)
{
	int l1, l2;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (l1 = 1; l1 <= n; l1++)
		{
			for (l2 = 1; l2 <= (l1 - 1); l2++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
