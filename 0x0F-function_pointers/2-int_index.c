#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: input array
 * @size: array size
 * @cmp: pointer to the function to be used to compare values
 * Return: index of the first element for which the cmp function
 * does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, value;

	if (size <= 0)
		return (-1);

	if (cmp != NULL && array != NULL)
		for (i = 0; i < size; i++)
		{
			value = cmp(array[i]);
			if (value == 1)
				break;
		}
	if (i == size && value == 0)
		return (-1);
	return (i);
}
