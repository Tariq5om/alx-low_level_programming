#include "variadic_functions.h"

/**
 * sum_them_all - summ
 *
 * @n: the last argument
 * Return: the sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list s;
	unsigned int i, sum;

	if (n == 0)
		return (0);
	va_start(s, n);
	for (i = 1, sum = 0; i <= n; i++)
	{
		sum += va_arg(s, const unsigned int);
	}
	va_end(s);
	return (sum);
}

int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);    
    return (0);
}
