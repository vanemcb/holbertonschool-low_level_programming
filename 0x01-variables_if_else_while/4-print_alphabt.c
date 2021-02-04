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
		if (letter == 101)
		{
			letter = 102;
		}
		else if (letter == 113)
		{
			letter = 114;
		}

		putchar(letter);
	}
	putchar(10);
return (0);
}

