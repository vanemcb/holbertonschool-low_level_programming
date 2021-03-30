#include "holberton.h"
#include <stdio.h>

/**
 * main - program that copies the content of a file to another file
 * @argc: number of input arguments
 * @argv: input arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *file_from = argv[1], *file_to = argv[2], buf[1024];
	int fd_from, fd_to, rd_from, wr_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		e98(file_from);

	fd_to = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd_from == -1)
		e99(file_to);

	rd_from = read(fd_from, buf, 1024);
	if (rd_from == -1)
		e98(file_from);

	wr_to = write(fd_to, buf, rd_from);
	if (wr_to == -1)
		e99(file_to);

	if (close(fd_from) == -1)
		e100(fd_from);

	if (close(fd_to) == -1)
		e100(fd_to);

	return (0);
}

/**
 * e98 - Function that prints error 98
 * @file: file error
 */
void e98(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * e99 - Function that prints error 99
 * @file: file error
 */
void e99(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", file);
	exit(99);
}

/**
 * e100 - Function that prints error 100
 * @fd: file descriptor
 */
void e100(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
