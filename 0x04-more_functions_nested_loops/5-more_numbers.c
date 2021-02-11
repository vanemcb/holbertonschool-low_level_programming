#include "holberton.h"

/**
 * more_numbers - rints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int i, u;

	for (u = 0; u <= 9; u++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
