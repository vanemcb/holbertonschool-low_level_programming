#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that adds positive numbers.
 * @argc: number of input arguments
 * @argv: input arguments array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
			sum = sum + atoi(argv[i]);
		printf("%d\n", sum);
	}
	return (0);
}
