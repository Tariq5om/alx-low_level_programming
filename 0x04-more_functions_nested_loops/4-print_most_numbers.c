#include "main.h"

/**
 * print_numbers - is a funtuon that print number from 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; (i >= 0 && i <= 9); i++)
	{
		if (i == 2 || i == 4)
			i++;
		_putchar(i + '0');
	}
	_putchar('\n');
}
