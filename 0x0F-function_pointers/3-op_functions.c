#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Fuction that adds two numbers
 * @a: number 1
 * @b: number 2
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Fuction that subtracts two numbers
 * @a: number 1
 * @b: number 2
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Fuction that multiplies two numbers
 * @a: number 1
 * @b: number 2
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Fuction that divides two numbers
 * @a: number 1
 * @b: number 2
 * Return: result of the division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Fuction that calculates the module of two numbers
 * @a: number 1
 * @b: number 2
 * Return: emainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
