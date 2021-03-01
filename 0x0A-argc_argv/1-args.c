#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it
 * @argc: number of input arguments
 * @argv: input arguments array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argv[0] != '\0')
		printf("%d\n", argc - 1);
	return (0);
}
