#include "holberton.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to print
 */

void print_binary(unsigned long int n)
{
	int bin;

	if (n >= 2)
		print_binary(n >> 1);

	bin = n & 1;
	_putchar(bin + '0');
}
