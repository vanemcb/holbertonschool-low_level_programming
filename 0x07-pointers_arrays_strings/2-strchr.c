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
	int i = 0;
	char *s2;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			s2 = &s[i];
			break;
		}
		i++;
	}
	if (s[i] == '\0')
		return (0);
	else
		return (s2);
}
