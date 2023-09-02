#include "main.h"

/**
 * print_square - is a function
 *
 * @size: the size of square
 */
void print_square(int size)
{
	int l1, l2;

	for (l1 = 1; l1 <= size; l1++)
	{
		for (l2 = 1; l2 <= size; l2++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
