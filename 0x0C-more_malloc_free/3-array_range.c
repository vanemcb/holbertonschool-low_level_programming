#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int i, x = 0, *array, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	array = malloc(len * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		array[x] = i;
		x++;
	}

	return (array);
}
