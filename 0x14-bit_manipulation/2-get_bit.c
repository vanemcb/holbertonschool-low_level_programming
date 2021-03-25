#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: input decimal number
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: the value of a bit at a given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int n2;
	unsigned int x = 0;
	int bit, bin[256];

	if (n == 0)
	{
		bin[0] = 0;
		x++;
	}

	while (n)
	{
		n2 = n;
		n = n >> 1;
		bit = n2 - (n * 2);
		bin[x] = bit;
		x++;
	}

	if (index > (x - 1))
		return (-1);

	return (bin[index]);
}
