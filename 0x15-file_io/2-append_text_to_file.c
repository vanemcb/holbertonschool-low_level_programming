#include "holberton.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_write, i = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!text_content)
		return (1);

	while (text_content[i] != '\0')
		i++;

	bytes_write = write(fd, text_content, i);
	if (bytes_write == -1)
		return (-1);

	close(fd);
	return (1);
}
