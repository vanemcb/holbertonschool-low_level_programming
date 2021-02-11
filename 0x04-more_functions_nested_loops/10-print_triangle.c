#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int i, z, y, esp;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			esp = size - i;
			for (z = 1; z <= esp; z++)
				_putchar(' ');
			for (y = 1; y <= i; y++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
