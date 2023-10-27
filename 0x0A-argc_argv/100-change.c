#include "main.h"
#include <stdlib.h>

/**
 * main - Print
 *
 * @argc: arguments
 * @argv: The array
 * Return: 0 Success. 1 fails
*/
int main(int argc, char *argv[])
{
	int cs, cash;

	cs = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cash = atoi(argv[1]);
	if (cash < 0)/*Less than 0*/
	{
		printf("0\n");
		return (0);
	}
	for (; cash >= 25; cs++)/*Check by loops*/
		cash = cash - 25;
	for (; cash >= 10; cs++)
		cash = cash - 10;
	for (; cash >= 5; cs++)
		cash = cash - 5;
	for (; cash >= 2; cs++)
		cash = cash - 2;
	for (; cash >= 1; cs++)
		cash = cash - 1;
	printf("%d", cs);
	printf("\n");
	return (0);
}
