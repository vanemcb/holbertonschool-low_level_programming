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
	unsigned int x;
	int bin;

	if (n == 0 && index != 0)
		return (-1);
	else if (n == 0 && index == 0)
		return (0);

	for (x = 0; x <= index; x++)
	{
		if (n != 0)
		{
			n2 = n;
			n = n >> 1;
			bin = n2 - (n * 2);
		}
		else
			return (-1);
	}
	return (bin);
}
