#include <stdio.h>

/**
 * main - Program that prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 97; letter <= 122; letter++)
	{
		putchar(letter);
	}
	for (letter = 65; letter <= 90; letter++)
	{
		putchar(letter);
	}
	putchar(10);
return (0);
}

