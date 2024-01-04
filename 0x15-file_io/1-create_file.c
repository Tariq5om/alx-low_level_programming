#include "main.h"
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
	if (!text_content)
		text_content = "\0";
	n = write(fd, text_content, len);
	i = n;
	if (n == -1 || i != len)
	{
		close(fd);
		return (-1);
	}
	if (close(fd) == -1)
		return (-1);
	return (1);
}
