#include "holberton.h"
#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 * Return: 0 or 1
 */

int main(void)
{
	int i;

	long double fibo, fibo1 = 1, fibo2 = 2;

	printf("%d, %d, ", 1, 2);
	for (i = 1; i <= 98; i++)
	{
		fibo = fibo1 + fibo2;
		fibo1 = fibo2;
		fibo2 = fibo;
		if (i < 98)
		{
			printf("%.0Lf, ", fibo);
		}
		else
		{
			printf("%.0Lf", fibo);
		}
	}
	printf("\n");
	return (0);
}
