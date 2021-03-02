#include <stdio.h>
#include <stdlib.h>

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

	if (s1 == '\0' && s2 == '\0')
		return (NULL);

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (len1 == 1)
		len1 = 0;
	if (len2 == 1)
		len2 = 0;

	final_str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (final_str == NULL)
		return (NULL);

	for (x = 0; x < len1; x++)
		final_str[x] = s1[x];

	for (x = 0; x <= len2; x++)
		final_str[len1 + x] = s2[x];

	return (final_str);
}
