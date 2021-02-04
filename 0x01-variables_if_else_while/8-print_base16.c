#include <stdio.h>

/**
 * main - Program that prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	for (num = 97; num <= 102; num++)
	{
		putchar(num);
	}
	putchar(10);
return (0);
}

