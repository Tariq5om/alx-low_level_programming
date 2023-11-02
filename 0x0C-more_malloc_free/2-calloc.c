#include "main.h"

/**
 * _calloc - Allocate memory
 *
 * @nmemb: The number of elements
 * @size: The size of each element
 * Return: void
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		s[i] = 0;
	return (s);
}
