#include "holberton.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to the binary number
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, decimal = 0, i2 = 0, bit;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	i = i - 1;
	while (b[i2] != '\0')
	{
		if (b[i2] == '0')
			bit = 0;
		else
			bit = 1;

		decimal += bit << i;
		i2++;
		i--;
	}
	return (decimal);
}
