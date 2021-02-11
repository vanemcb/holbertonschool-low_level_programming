#include "holberton.h"

/**
 * more_numbers - rints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	char i;
	int y, u;

	for (u = 0; u <= 9; u++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			_putchar(i);
		}
		for (y = 10; y <= 14; y++)
		{
			_putchar(y / 10 + '0');
			_putchar(y % 10 + '0');
		}
		_putchar('\n');
	}
}
