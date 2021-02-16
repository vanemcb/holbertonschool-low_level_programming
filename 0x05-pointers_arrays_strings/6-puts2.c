#include "holberton.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: string
 */

void puts2(char *str)
{
	int i, x;

	while (str[i] != '\0')
		i++;

	for (x = 0; x <= i; x = x + 2)
	{
		if (x <= i)
			_putchar(str[x]);
	}
	_putchar('\n');
}
