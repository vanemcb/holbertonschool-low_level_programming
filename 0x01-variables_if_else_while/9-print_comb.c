#include <stdio.h>

/**
 * main - Program that prints all possible combinations
 * of single-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1;

	for (num1 = 48; num1 <= 57; num1++)
	{
		putchar(num1);
		if (num1 < 57)
		{
			putchar(44);
			putchar(32);
		}
		else
		{
			putchar(10);
		}
	}
return (0);
}

