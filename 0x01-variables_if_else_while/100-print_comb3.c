
#include <stdio.h>

/**
 * main - Program that prints the numbers from 00 to 99
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1;
	int num2;
	int i = 49;

	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = i; num2 <= 57; num2++)
		{
			putchar(num1);
			putchar(num2);

			if (num1 == 56)
			{
				putchar(10);
			}
			else
			{
				putchar(44);
				putchar(32);
			}
		}
		i++;
	}
return (0);
}

