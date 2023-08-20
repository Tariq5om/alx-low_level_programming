#include "main.h"

/**
* print_last_digit - is a function that give last digit
*
* @p: the parameter
* Return: p % 10 which the last digit of p
*/
int print_last_digit(int p)
{
	int n;

	if (p < 0)
		n = -1 * (p % 10);
	else
		n = p % 10;
	_putchar(n);
	return (n);
}
