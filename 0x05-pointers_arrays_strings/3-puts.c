#include "main.h"

/**
 * _puts - print an array
 *
 * @str: is a pointer to first elemnt
 */
void _puts(char *str)
{
	int l;

	for (l = 0; (*(str + l)) != '\0'; l++)
		_putchar((*(str + l)));
	_putchar('\n');
}
