#include <stdio.h>
#include <limits.h>

/**
 * flip_bits - set a bit to 0
 *
 * @n: pointer to int
 * @m: the in
 * Return: 1, or -1 for error
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int j;
	unsigned int i, k;

	for (i = -1, j = ULONG_MAX; j != 0; i++)
		j = j >> 1;
	for (k = 0; j <= i; j++)
	{
		if (((n >> j) & 1) != ((m >> j) & 1))
			k++;
	}
	return (k);
}
