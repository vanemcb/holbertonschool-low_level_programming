#include <stdio.h>

/**
 * main - Program that prints the alphabet in lowercase in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 122; letter >= 97; letter--)
	{
		putchar(letter);
	}
	putchar(10);
return (0);
}

