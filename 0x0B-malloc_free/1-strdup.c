#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the
 * string given as a parameter
 * @str: input string
 * Return: pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *str2;
	int i = 0, x;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	str2 = malloc(sizeof(char) * i);

	for (x = 0; x <= i; x++)
		str2[x] = str[x];

	return (str2);
}
