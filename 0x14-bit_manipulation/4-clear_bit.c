#include "holberton.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer to the input decimal number
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int one;

	if (index > 63)
		return (-1);

	one = 1 << index;
	if (*n & one)
		*n = *n ^ one;

	return (1);
}
