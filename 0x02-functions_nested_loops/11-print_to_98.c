#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: input number
 * Return: result
 */


void print_to_98(int n)
{
	if (n > 98)
	{
		for (n = n; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d\n", n);
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else
	{
		for (n = n; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d\n", n);
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
}
