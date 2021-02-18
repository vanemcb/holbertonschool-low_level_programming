/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i, izq = 0, der = n - 1, num;

	for (i = 0; i < n / 2; i++)
	{
		num = a[izq];
		a[izq] = a[der];
		a[der] = num;
		izq++;
		der--;
	}
}
