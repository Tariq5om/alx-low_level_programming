#include "variadic_functions.h"

/**
 * print_numbers - Print numbers
 *
 * @separator: The separator
 * @n: The numbers of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i, num;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(arg, int);
		printf("%d", num);
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
