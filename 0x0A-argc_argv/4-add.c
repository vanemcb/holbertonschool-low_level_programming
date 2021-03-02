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
	int i, x, sum;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (x = 0; argv[i][x] != '\0'; x++)
			{
				if (argv[i][x] < '0' || argv[i][x] > '9')
				{
					printf("Error\n");
					return (0);
				}
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
