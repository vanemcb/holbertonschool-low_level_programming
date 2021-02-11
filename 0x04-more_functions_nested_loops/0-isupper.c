#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 * @c: The character to check
 * Return: 1 if c is uppercas, 0 otherwise
 */

int _isupper(int c)
{
	char i;
	int sum = 0;

	for (i = 65; i <= 90; i++)
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
