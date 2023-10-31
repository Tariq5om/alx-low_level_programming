#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strlena - calculate the whole length
 *
 * @ac: number of arguments
 * @s: the strings
 * Return: the length of arguments
 */
int strlena(int ac, char **s)
{
	int i, j, n;

	n = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; s[i][j] != '\0'; j++)
			n++;
		n++;
	}
	return (n);
}
/**
 * argstostr - concatenates tge argument
 *
 * @ac: number of arguments
 * @av: the strings
 * Return: whole string
 */
char *argstostr(int ac, char **av)
{
	int i, j, n;
	char *s;

	n = 0;
	s = malloc(sizeof(char) * strlena(ac, av) + 1);
	if (s == NULL || av == NULL || ac == 0)
		return (NULL);
	for (i = 0; i < ac; i++, n++)
	{
		for (j = 0; av[i][j] != '\0'; j++, n++)
			s[n] = av[i][j];
		s[n] = '\n';
	}
	s[n] = '\0';
	return (s);
}
