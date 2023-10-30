#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array
 *
 * @size: the size
 * @c: the character
 * Return: A pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
	free(s);
}
