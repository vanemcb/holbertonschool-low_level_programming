#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: string
 */

void puts_half(char *str)
{
	int i = 0, x, n;

	while (str[i] != '\0')
		i++;

	if (i % 2 == 0)
	{
		for (x = i / 2; x < i; x++)
			_putchar(str[x]);
	}
	else
	{
		n = (i - 1) / 2;
		for (x = i - n; x < i; x++)
			_putchar(str[x]);
	}
	_putchar('\n');
}
