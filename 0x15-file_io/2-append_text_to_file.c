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
	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
 * append_text_to_file - append a file
 *
 * @filename: the name
 * @text_content: the text
 * Return: 1, -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int n, fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		n = write(fd, text_content, len);
		if (n == -1)
		{
			close(fd);
			return (-1);
		}
	}
	if (close(fd) == -1)
		return (-1);
	return (1);
}
