#include "holberton.h"

/**
 * print_sign - prints the sign of a number.
 * @n: keyboard input
 * Return: positive, negative or zero
 */


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
