/**
 * _memcpy - function that copies memory area
 * @dest: target array
 * @src: source array
 * @n: bytes to copy
 * Return: dest (copied array)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
