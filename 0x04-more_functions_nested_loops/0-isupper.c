#include "main.h"

/**
 * _isupper - is a function that checks if the character is upper or not
 *
 * @c: the character will check
 * Return: 1 if upper, 0 if else
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
