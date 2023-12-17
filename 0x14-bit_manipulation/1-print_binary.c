#include "main.h"

/**
 * print_binary - print binary
 *
 * @n: the number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int j;
	int i;

	if (n == 0)
	{
		putchar(0 + '0');
		return;
	}
	for (i = -1, j = n; j != 0; i++)
		j = j >> 1;
	for (; i >= 0; i--)
		putchar(((n >> i) & 1) + '0');
}
