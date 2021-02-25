#include "holberton.h"
/**
 * is_prime_number - function that recognizes if a number is prime
 * @n: input number
 * Return: 1 if the number is prime otherwise return 0
 */

int is_prime_number(int n)
{
	int p;

	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	if (n == 0)
		return (0);
	p = aux_is_prime(n, 2);
	return (p);
}

/**
 * aux_is_prime - auxiliar function to recognizes if a number is prime
 * @c: counter
 * @n: input number
 * Return: 1 if the number is prime otherwise return 0
 */

int aux_is_prime(int n, int c)
{
	if (n % c == 0 && n == c)
		return (1);
	else if (n % c == 0 && n != c)
		return (0);
	return (aux_is_prime(n, c + 1));
}
