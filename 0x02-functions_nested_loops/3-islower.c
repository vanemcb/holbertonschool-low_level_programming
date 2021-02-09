#include "holberton.h"

/**
 * _islower - checks for lowercase character.
 * @c: keyboard letter
 * Return: 0 or 1
 */


int _islower(int c)
{
	int i;
	int cont = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			cont = 1;
		}
	}
	if (cont == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
