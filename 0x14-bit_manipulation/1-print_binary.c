#include "holberton.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to print
 */

void print_binary(unsigned long int n)
{
	unsigned long int n2;
	int bin;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	n2 = n;
	n = n >> 1;
	bin = n2 - (n * 2);
	if (n != 0)
		print_binary(n);
	_putchar(bin + '0');
}
