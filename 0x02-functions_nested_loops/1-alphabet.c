#include "main.h"
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

/**
* main - check code
* Return: Always 0
* print_alphabet is a function that print alphabet
*/
int main(void)
{
	/*print_alphabet is a function*/
	print_alphabet();
	return (0);
}
