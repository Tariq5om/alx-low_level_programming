#include <stdio.h>
#include "main.h"

/**
 * main - Print the name of tye program
 *
 * @argc: count of the arguments
 * @argv: the array of the arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);/*prints the name with the path*/
	(void) argc;/*a voiding */
	return (0);
}
