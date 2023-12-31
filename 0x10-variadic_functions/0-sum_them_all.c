#include "variadic_functions.h"

/**
 * sum_them_all - The sum
 *
 * @n: the last argument go th list
 * Return: the sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i, sum;

	if (n == 0)
		return (0);
	va_start(a, n);
	for (i = 1, sum = 0; i <= n; i++)
	{
		sum += va_arg(a, const unsigned int);
	}
	va_end(a);
	return (sum);
}
