#include "main.h"

/**
 * _strlen - return the length of an array
 *
 * @s: is a pointer to first elemnt
 * Return: the length of an array
 */
int _strlen(char *s)
{
	int l, g;

	for (l = 0; (*(s + l)) != '\0'; l++)
		g = l;
	if (g != 0)
		g = g + 1;
	return (g);
}
