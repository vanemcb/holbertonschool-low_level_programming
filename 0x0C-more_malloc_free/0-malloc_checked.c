#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: amount of memory to allocate
 */

void *malloc_checked(unsigned int b)
{
	void *array = malloc(b);

	if (array == NULL)
		exit (98);

	return (array);
}
