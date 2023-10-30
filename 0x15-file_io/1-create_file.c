#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of file to be created
 * @text_content: array that holds content to be written into new file
 *
 * Return: 1 if success or -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	while (text_content && text_content[len])
		len++;
	write(fd, text_content, len);
	close(fd);
	return (1);
}
