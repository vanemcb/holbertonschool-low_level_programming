#include "holberton.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: integer
 */

void print_times_table(int n)
{
	int a, b, c, num;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				num = a * b;
				if (b == 0)
					_putchar(num + '0');
				else if (num < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(num + '0');
				}
				else if (num < 100)
				{
					_putchar(' ');
					_putchar(num / 10 + '0');
					_putchar(num % 10 + '0');
				}
				else
				{
					_putchar(num / 100 + '0');
					c = (num / 10) % 10;
					_putchar(c + '0');
					_putchar(num % 10 + '0');
				}
				if (b != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
