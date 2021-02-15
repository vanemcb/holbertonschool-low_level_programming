/**
 * swap_int - swaps the values of two integers
 * @a: pointer integer 1
 * @b: pointer integer 2
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
