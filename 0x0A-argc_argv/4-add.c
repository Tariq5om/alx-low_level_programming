#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Print the result of addition
 *
 * @argc: numbers of digits
 * @argv: array of digits
 * Return: 0 Success, 1 if it faults
 */
int main(int argc, char **argv)
{
	int i, j, sum;
	char *pn;

	sum = 0;/*To make sure it will work*/
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		pn = argv[i];
		for (j = 0; pn[j] != '\0'; j++)
		{
			if (isdigit(pn[j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(pn);
	}
	printf("%d\n", sum);
	return (0);
}
