#include "holberton.h"
#include <stdio.h>

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{

	int fd, bytes_write;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	bytes_write = write(fd, text_content, 1024);
	if (bytes_write == -1)
		return (-1);

	close(fd);
	return (1);
}
