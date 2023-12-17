#include "main.h"


/**
 * str_len - length of string
 *
 * @b: the string
 * Return: the length
 */
unsigned int str_len(const char *b)
{
	unsigned int i;

	for (i = 0; b[i] != '\0'; i++)
		;
	return (i);
}
/**
 * pow_2 - return 2 power j
 *
 * @j: power of j
 * Return: the number
 */
unsigned int pow_2(unsigned int j)
{
	unsigned int i;

	if (j == 0)
		return (1);
	for (i = 1; j > 0; j--)
		i *= 2;
	return (i);
}
/**
 * check_b - check if
 *
 * @b: the string
 * Return: 1 Success, 0 false
 */
unsigned int check_b(const char *b)
{
	for (; *b != '\0'; b++)
		if (*b != '1' && *b != '0')
			return (0);
	return (1);
}
/**
 * binary_to_uint - b to d
 *
 * @b: the binary number
 * Return: the decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int j, r;
	int i;

	if (!b || check_b(b) == 0)
		return (0);
	i = str_len(b) - 1;
	for (r = j = 0; i >= 0; i--, j++)
		r += pow_2(j) * (b[i] - '0');
	return (r);
}
