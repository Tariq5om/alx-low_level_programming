#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 *
 * @filename: name of file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i;
	size_t j;
	int fd;
	char *c;

	if (!filename)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	c = calloc(100, sizeof(char));
	if (!c)
	{
		close(fd);
		return (0);
	}
	i = read(fd, c, letters);
	if (i == -1)
	{
		close(fd);
		free(c);
		return (0);
	}
	j = i;
	if (j < letters)
		letters = j;
	i = write(STDOUT_FILENO, c, letters);
	j = i;
	if (i == -1 || j != letters)
	{
		close(fd);
		free(c);
		return (0);
	}
	if (close(fd) == -1)
		return (-1);
	free(c);
	return (i);
}
