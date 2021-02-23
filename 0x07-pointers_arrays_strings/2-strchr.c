#include <stdio.h>
#include "holberton.h"
/**
 * _strchr - function that locates a character in a string
 * @s: input string
 * @c: character
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i = 0, x;
	char *s2 = NULL;

	while (s[i] != '\0')
		i++;
	for (x = 0; x <= i; x++)
	{
		if (s[x] == c)
		{
			s2 = s + x;
			break;
		}
	}
	return (s2);
}
