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
	char *buffer = malloc((sizeof(char) * letters) + 1);
	int fd, sz;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	sz = read(fd, buffer, letters + 1);

	write(1, buffer, letters);

	close(fd);

	return (sz);
}
