#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that prints its name
 * @argc: number of input arguments
 * @argv: input arguments array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);
	return (0);
}
