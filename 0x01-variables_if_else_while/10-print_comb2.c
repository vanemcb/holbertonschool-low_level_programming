#include <stdio.h>

/**
 * main - Program that prints the numbers from 00 to 99
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char num1;
	char num2;

	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = 48; num2 <= 57; num2++)
		{
			putchar(num1);
			putchar(num2);
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
return (0);
}

