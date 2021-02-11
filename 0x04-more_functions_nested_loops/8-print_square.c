#include "holberton.h"

/**
 * print_square - prints a square
 * @size: size of the square
 */

void print_square(int size)
{
	int i, z;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (z = 1; z <= size; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
