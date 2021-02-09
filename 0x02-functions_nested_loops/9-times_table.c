#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */


void times_table(void)
{
	int i;
	int a;
	int b;
	int num;

	i = 1;
	while (i <= 9)
	{
		for (a = 0; a <= 9; a++)
		{
			for (b = 0; b <= 9; b++)
			{
				num = a * b;
				if (num < 10)
				{
					_putchar(num + '0');
				}
				else
				{
					_putchar(num / 10 + '0');
					_putchar(num % 10 + '0');
				}
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
		i++;
	}
}
