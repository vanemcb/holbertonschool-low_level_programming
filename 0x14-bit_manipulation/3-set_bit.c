#include "holberton.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer to the input decimal number
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int n2, decimal = 0, n3;
	unsigned int x = 0, x2, i;
	int bit, bin[256];

	n3 = *n;
	if (*n == 0)
	{
		for (i = 0; i <= index; i++)
		{
			bin[i] = 0;
			x++;
		}
	}

	while (*n)
	{
		n2 = *n;
		*n = *n >> 1;
		bit = n2 - (*n * 2);
		bin[x] = bit;
		x++;
	}

	if (index > (x - 1) || n3 == 18446744073709551615)
	{
		*n = n3;
		return (-1);
	}

	bin[index] = 1;

	for (x2 = 0; x2 < x; x2++)
		decimal += bin[x2] << x2;
	*n = decimal;
	return (1);
}
