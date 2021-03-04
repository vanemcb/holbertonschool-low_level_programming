#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: number of input argumrnts
 * @av: arguments array
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	char *str_final = av[0];
	int i;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 1; i <= ac; i++)
		str_final = str_concat(str_final, av[i]);
	return (str_final);
}

/**
 * str_concat - unction that concatenates two strings
 * @s1: input string 1
 * @s2: input string 2
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *final_str;
	int len1 = 0, len2 = 0, x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	final_str = malloc(sizeof(char) * (len1 + len2 + 3));

	if (final_str == NULL)
		return (NULL);

	for (x = 0; x < len1; x++)
		final_str[x] = s1[x];
	final_str[len1] = '\n';

	for (x = 0; x <= len2; x++)
		final_str[len1 + x + 1] = s2[x];

	return (final_str);
}
