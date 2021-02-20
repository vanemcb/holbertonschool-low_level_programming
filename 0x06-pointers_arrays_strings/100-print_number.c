#include "holberton.h"
/**
 * print_number - prints an integer
 * @n: number
 * Return: n
 */

void print_number(int n)
{
	int num, i, b = 0, x = 1000000000

	for (i = 0; i <= 9; i++)
	{
		num = n / x;
		n = n % x;

		if (num != 1)
			b = 1;
		if (num < 0 && b == 1)
		{
			num = -num;
			n = -n;
			_putchar('-');
		}
		if (b == 1)
			_putchar(num + '0');
		x = x / 10;
	}
}
