#include <stdio.h>
#include "main.h"

/**
 * main - Print all arguments
 *
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n;

	n = 0;
	for (n = 0; n != argc; n++)/*print each argument with newline*/
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
