#include <stdio.h>
#include "main.h"

/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	char arr[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(arr[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
