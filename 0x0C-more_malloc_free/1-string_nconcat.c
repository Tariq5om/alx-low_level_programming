#include "main.h"

/**
 * _strlen - Calculate the length of the two  array
 *
 * @s: One of the two string
 * Return: Size
*/
unsigned int _strlen(char *s)
{
	unsigned int j;

	for (j = 0; s[j] != '\0'; j++)
		;
	return (j);
}
/**
 * string_nconcat -conect two strings
 *
 * @s1: first one
 * @s2: second one
 * @n: the n-th of s2
 * Return:  the string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, n1, n2;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	n1 = _strlen(s1);
	n2 = _strlen(s2);
	if (n >= n2)
		n = n2;
	s = malloc(sizeof(char) * (n1 + n + 1));/*Reseve the right amount sp*/
	if (s == NULL)
		return (NULL);
	for (i = 0; i < n1; i++)/*Fill the blanks*/
		*(s + i) = *(s1 + i);
	for (j = 0; j < n; j++, i++)
		*(s + i) = *(s2 + j);
	*(s + i) = '\0';/*Fill the last element*/
	return (s);
}
