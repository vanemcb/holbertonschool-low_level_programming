#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: input decimal number
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: the value of a bit at a given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x, x2 = 0, bit;
	unsigned long int n2;

	n2 = n;
	while (n2 > 1)
	{
		n2 = n2 >> 1;
		x2++;
	}

	if (index > x2 && n != 0)
		return (-1);

	for (x = 0; x < index; x++)
		n = n >> 1;

	bit = n & 1;
	return (bit);
}
