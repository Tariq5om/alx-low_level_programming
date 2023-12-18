#include "main.h"
#include <limits.h>

/**
 * set_bit - set the bit of binary
 *
 * @n: the number
 * @index: the index of the binary num
 * Return: 1, or -1 false
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;
	unsigned int i;

	for (i = -1, j = ULONG_MAX; j != 0; i++)
		j = j >> 1;
	if (index > i)
		return (-1);
	*n = *n | 1 << index;
	return (1);
}
