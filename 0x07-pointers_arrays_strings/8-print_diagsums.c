#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: input array
 * @size: array size
 */

void print_diagsums(int *a, int size)
{
	int d1, d2, sum1 = 0, sum2 = 0, n = size * size;

	for (d1 = 0 ; d1 < n; d1 = d1 + (size + 1))
		sum1 = sum1 + a[d1];
	for (d2 = size - 1; d2 <= n - size; d2 = d2 + (size - 1))
		sum2 = sum2 + a[d2];
	printf("%d, %d\n", sum1, sum2);
}
