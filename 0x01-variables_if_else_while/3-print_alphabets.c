#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	int n = 97;

	while (n < 123)
	{
		putchar(n);
		n++;
	}
	n = 65;

	while (n < 91)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
