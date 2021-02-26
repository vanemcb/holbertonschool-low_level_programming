#include "holberton.h"
/**
 * is_palindrome - function that look for if a string is a palindrome
 * @s: input string
 * Return: 1 if the string is a palindrome otherwise 0
 */

int is_palindrome(char *s)
{
	int len, n = 0;

	len = _strlen_recursion(s);
	return (aux_is_palindrome(n, len - 1, s));
}

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: input string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(++s));
}

/**
 * aux_is_palindrome - auxiliar function that look for if a string
 * is a palindrome
 * @a: counter
 * @b: length of string
 * @s: input string
 * Return: 1 if the number is prime otherwise return 0
 */

int aux_is_palindrome(int a, int b, char *s)
{
	if (s[a] == s[b] && b > 0)
		return (aux_is_palindrome(a + 1, b - 1, s));
	if (b == 0)
		return (1);
	return (0);
}
