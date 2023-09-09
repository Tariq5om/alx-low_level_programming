#include <stdio.h>

/**
 * swap_int - swap between two integers
 *
 * @a: the first num
 * @b: the second num
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
