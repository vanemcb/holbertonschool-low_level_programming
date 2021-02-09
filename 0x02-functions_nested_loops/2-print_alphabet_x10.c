#include "holberton.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 *
 */


void print_alphabet_x10(void)
{
	int i;
	int u;

	for (i = 1; i <= 10; i++)
	{
		for (u = 'a'; u <= 'z'; u++)
		{
			_putchar(u);
		}
		_putchar('\n');
	}
}
