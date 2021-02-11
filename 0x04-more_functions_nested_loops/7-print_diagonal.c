#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: size of the diagonal
 */

void print_diagonal(int n)
{
	int i, z, esp;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			if (i != 1)
			{
				esp = i - 1;
				for (z = 1; z <= esp; z++)
					_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
