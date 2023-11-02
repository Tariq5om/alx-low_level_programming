#include "main.h"

/**
 * malloc_checked - Allocates new space of memory
 *
 * @b: The total size
 * Return: pointer to the space
*/
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == 0)
		exit(98);
	else
		return (s);
}
