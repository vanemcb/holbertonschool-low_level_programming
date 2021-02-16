#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	int n = 0, x, izq, der;
	char letter;

	while (s[n] != '\0')
		n++;
	izq = 0;
	der = n - 1;
	for (x = 0; x <= n / 2; x++)
	{
		letter = s[izq];
		s[izq] = s[der];
		s[der] = letter;
		izq++;
		der--;
	}
}
