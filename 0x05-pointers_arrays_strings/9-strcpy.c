#include "holberton.h"

/**
 * _strcpy - copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest.
 * @src: string
 * @dest: string copied
 * Return: *dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, x;

	while (src[i] != '\0')
		i++;
	for (x = 0; x <= i; x++)
		dest[x] = src[x];
	return (dest);
}
