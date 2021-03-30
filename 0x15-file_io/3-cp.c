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
	char *file_from = argv[1], *file_to = argv[2], *buf[1024];
	int fd_from, fd_to, rd_from, wr_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp %s %s\n", file_from, file_to);
		exit(97);
	}

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd_to = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", file_to);
		exit(99);
	}

	rd_from = read(fd_from, buf, 1024);
	if (rd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	wr_to = write(fd_to, buf, rd_from);
	if (wr_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", file_to);
		exit(99);
	}
	return (0);
}
