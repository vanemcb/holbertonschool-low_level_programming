#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: input string 1
 * @s2: input string 2
 * @n: first n bytes of s2
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str_concat;
	unsigned int len1, len2, len3, x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		n = len2;

	len3 = len1 + n;

	str_concat = malloc(len3 * sizeof(char) + 1);

	if (str_concat == NULL)
		return (NULL);

	for (x = 0; x < len1; x++)
		str_concat[x] = s1[x];

	for (x = 0; x < n; x++)
		str_concat[len1 + x] = s2[x];

	str_concat[len1 + x] = '\0';

	return (str_concat);
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: string length
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}
