#include "holberton.h"
#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 * Return: 0 or 1
 */

int main(void)
{
	int i;
	long int sum = 2, fibo, fibo1 = 1, fibo2 = 2;

	for (i = 1; i <= 48; i++)
	{
		fibo = fibo1 + fibo2;
		fibo1 = fibo2;
		fibo2 = fibo;
		if (fibo <= 4000000 && fibo % 2 == 0)
		{
			sum = sum + fibo;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
