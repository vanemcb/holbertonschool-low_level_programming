#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to
 * a 2 dimensional array of integers
 * @width: input width
 * @height: input height
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **array_2d;
	int i, x, f;

	if (width <= 0 || height <= 0)
		return (NULL);

	array_2d = malloc(sizeof(int *) * height);
	if (array_2d == NULL)
	{	
		free(array_2d); 
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array_2d[i] = malloc(sizeof(int) * width);
		if (array_2d[i] == NULL)
		{
			for (f = 0; f <= i; f++)
				free(array_2d[f]);
			free(array_2d);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (x = 0; x < width; x++)
			array_2d[i][x] = 0;
	}
	return (array_2d);
}
