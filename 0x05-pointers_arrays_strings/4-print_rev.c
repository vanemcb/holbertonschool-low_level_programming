#include "holberton.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string
 */

void print_rev(char *s)
{
	int i = 0, x;

	while (*(s + i) != '\0')
		i++;

	for (x = i-1; x >= 0; x--)
	{
		_putchar(*(s + x));
	}
	_putchar('\n');
}
