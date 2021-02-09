#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 */

void jack_bauer(void)
{
	int hora;
	int min;

	for (hora = 0; hora < 24; hora++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar(hora / 10 + '0');
			_putchar(hora % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');
		}
	}
}
