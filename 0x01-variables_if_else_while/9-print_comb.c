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
	int num2;

	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = 48; num2 <= 57; num2++)
			putchar(num1);
			putchar(num2);
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
return (0);
}

