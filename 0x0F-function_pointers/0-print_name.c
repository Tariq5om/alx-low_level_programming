#include "function_pointers.h"

/**
 * print_name - call a function
 *
 * @name: the name
 * @f:the fp
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
