#include "main.h"

/**
 * _strlen - length of the string
 *
 * @s: the string
 * Return: the length
 */
unsigned int _strlen(const char *s)
{
	unsigned int i;

	if (!s)
		return (0);
	if (*s == '\0')
		return (1);
	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * create_file - create a file
 *
 * @filename: the name
 * @text_content: the text
 * Return: 1, -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n;
	size_t i;

	if (!filename)
		return (-1);
	fd = open(filename, inf);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		n = write(fd, text_content, len);
		i = n;
		if (n == -1 || i != len)
		{
			close(fd);
			return (-1);
		}
	}
	if (close(fd) == -1)
		return (-1);
	return (1);
}
