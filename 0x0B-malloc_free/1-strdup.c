#include "main.h"
#include <stdlib.h>

/**
 * _strlen - the lenght
 *
 * @s: oldstring
 * Return: the_length_ofit
 */
int _strlen(char *s)
{
	int j;

	j = 0;
	for (; *(s + j) != '\0'; j++)
		;
	return (j);
}
/**
 * _strdup - copy a string to new location
 *
 * @str: old string
 * Return: the new string
 */
char *_strdup(char *str)
{
	int l, k;
	char *g;/*the string*/

	if (str == NULL)
		return (NULL);
	k = _strlen(str);
	g = malloc(sizeof(char) * (k + 1));
	if (g == NULL)
		return (NULL);
	for (l = 0; l != k; l++)
		g[l] = str[l];
	return (g);
}
