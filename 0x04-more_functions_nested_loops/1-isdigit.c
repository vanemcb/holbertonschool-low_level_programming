#include "holberton.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: The character to check
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	int i;
	int sum = 0;

	for (i = 48; i <= 57; i++)
	{
		if (c == i)
		{
			sum = sum + 1;
		}
	}
	if (sum == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
