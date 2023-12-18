#include "main.h"

/**
 * get_bit - git the bit of binary
 *
 * @n: the number
 * @index: the index of the binary num
 * Return: the bit, or -1 false
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int j;
	unsigned int i;

	for (i = -1, j = n; j != 0; i++)
		j = j >> 1;
	if (index > i)
		return (-1);
	return ((n >> index) & 1);
}
