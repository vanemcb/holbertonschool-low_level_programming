#include "holberton.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string
 */

void print_rev(char *s)
{
	int x;

	for (x = _strlen(s); x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
