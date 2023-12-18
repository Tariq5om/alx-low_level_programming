#include "main.h"
#include <limits.h>

/**
 * clear_bit - set a bit to 0
 *
 * @n: pointer to int
 * @index: the in
 * Return: 1, or -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;
	unsigned int i;

	for (i = -1, j = ULONG_MAX; j != 0; i++)
		j = j >> 1;
	if (index > i)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
