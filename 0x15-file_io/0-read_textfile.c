#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints it
 * @filename: name of text file to be read
 * @letters: number of characters to be read from the file
 *
 * Return: number of characters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);

	t = read(fd, buff, letters);

	w = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(fd);

	return (w);
}
