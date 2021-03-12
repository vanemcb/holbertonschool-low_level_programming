#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - program that multiplies two numbers
 * @argc: number of input arguments
 * @argv: input arguments array
 * Return: 0
 */

int main(int argc, char **argv)
{
	int result;
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	operator = get_op_func(argv[2]);

	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = operator(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", result);

	return (0);
}
