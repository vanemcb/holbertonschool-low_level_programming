#include "holberton.h"
#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 * Return: 0 or 1
 */

int main(void)
{
	int i;
	unsigned long int fibo, fibo1 = 1, fibo2 = 2;

	printf("%d, %d, ", 1, 2);
	for (i = 1; i <= 96; i++)
	{
		fibo = fibo1 + fibo2;
		fibo1 = fibo2;
		fibo2 = fibo;
		if (i < 96)
		{
			printf("%lu, ", fibo);
		}
		else
		{
			printf("%lu", fibo);
		}
	}
	printf("\n");
	return (0);
}
