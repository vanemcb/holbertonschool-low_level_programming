#include "search_algos.h"

/**
 * print_array - prints an array from pos floor to top
 * @array: is a pointer to the first element of the array to search in
 * @floor: starting printing position
 * @top: ending printing position
 */

void print_array(int *array, size_t floor, size_t top)
{
	size_t i = floor;

	printf("Searching in array: ");
	while (i <= top)
	{
		printf("%d", array[i]);
		if (i != top)
			printf(", ");
		i++;
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in an array of
 * integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: first index where value is found or -1 if
 * not found or if array is Null
 */

int binary_search(int *array, size_t size, int value)
{
	size_t floor, top, middle;

	if (array != NULL && size > 0)
	{
		floor = 0;
		top = size - 1;
		print_array(array, floor, top);
		while (floor < top)
		{
			middle = (floor + top) / 2;
			/**
			 * If value greater, ignore left half
			*/
			if (array[middle] < value)
				floor = middle + 1;
			/**
			 *  If value is smaller, ignore right half
			*/
			else if (array[middle] > value)
				top = middle - 1;
			/**
			 *  Check if value is present at mid
			*/
			else
			{
				return (middle);
			}
			print_array(array, floor, top);
		}
	}
	return (-1);
}
