#include "function_pointers.h"

/**
 * print - print name
 *
 * @name: The name
*/
void print_name_as_is(char *name)
{
	int i, j;

	for (i = 0; i < name[i]; i++)
		;
	for (j = 0; j < i; j++)
		_putchar(name[j]);
}
/**
 * print_name - call a function
 *
 * @name: the name
 * @f:the fp
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	f = &print_name_as_is;
	f(name);
}
