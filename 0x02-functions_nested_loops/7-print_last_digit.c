#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: number
 * Return: last_digit
 */


int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	return (last_digit);
}
