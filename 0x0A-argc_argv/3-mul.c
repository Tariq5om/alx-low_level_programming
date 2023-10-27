#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Print product of two nums
 *
 * @argc: void
 * @argv: the numbers
 * Return: 0 if Success, 1 if there are not two nums
 */
int main(int argc, char *argv[])
{
	if (argv[1] == NULL || argv[2] == NULL)/*The two nums not applied*/
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));/*Convert strin*/
	(void) argc;/*The avoiding*/
	return (0);
}
