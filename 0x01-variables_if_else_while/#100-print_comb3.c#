#include <stdio.h>

/**
* main -Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	int n = 0, m = 0;

	while (n <= 9)
	{
		while (m <= 9)
		{
			if (n > m || n == m)
			{
				m++;
				continue;
			}
			putchar(n + '0');
			putchar(m + '0');
			if (n != 8 || m != 9)
			{
				putchar(',');
				putchar(' ');
			}
			m++;
		}
		n++;
		m = 0;
	}
	putchar('\n');
	return (0);
}
