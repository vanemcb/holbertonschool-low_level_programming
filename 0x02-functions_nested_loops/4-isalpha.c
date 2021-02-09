#include "holberton.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: keyboard letter
 * Return: 0 or 1
 */


int _isalpha(int c)
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
	for (i = 'A'; i <= 'Z'; i++)
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
