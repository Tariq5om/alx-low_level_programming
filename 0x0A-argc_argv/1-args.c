#include <stdio.h>
#include "main.h"

/**
 * main - Print the number of arguments
 *
 * @argc: count of arguments
 * @argv: the array of arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);/*Print number*/
	(void) argv;/*Avoiding the array*/
	return (0);
}
