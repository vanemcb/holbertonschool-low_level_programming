#include "holberton.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * standard output
 * @filename: file name
 * @letters: number of letters it should read and print
 * Return: number of letters or 0 if it fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = malloc(letters);
	int fd, bytes_read, bytes_write;

	if (!buffer)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	bytes_read = read(fd, buffer, letters);
	if (bytes_read < 0)
		return (0);

	bytes_write = write(1, buffer, bytes_read);
	if (bytes_write < 0)
		return (0);

	free(buffer);
	close(fd);
	return (bytes_read);
}
