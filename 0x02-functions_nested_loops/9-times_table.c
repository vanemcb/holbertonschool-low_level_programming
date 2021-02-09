#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */


void times_table(void)
{
	int a;
	int b;
	int num;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			num = a * b;
			if (b == 0)
			{
				_putchar(num + '0');
			}
			else if (num < 10)
			{
				_putchar(' ');
				_putchar(num + '0');
			}
			else
			{
				_putchar(num / 10 + '0');
				_putchar(num % 10 + '0');
			}
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
