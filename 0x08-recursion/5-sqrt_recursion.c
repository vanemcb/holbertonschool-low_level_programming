#include "holberton.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: input number
 * Return: sqrt
 */

int _sqrt_recursion(int n)
{
	int sqrt;

	if (n < 0)
		return (-1);
	sqrt = sqrt_value(1, n);
	return (sqrt);
}

/**
 * sqrt_value - evaluate the natural square of the number
 * @c: counter
 * @n: input number
 * Return: natural square root
 */

int sqrt_value(int c, int n)
{
	if (c * c == n)
		return (c);
	if (c * c > n)
		return (-1);
	return (sqrt_value(c + 1, n));
}
