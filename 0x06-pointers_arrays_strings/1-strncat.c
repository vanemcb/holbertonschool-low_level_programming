/**
 * _strncat - concatenates two strings
 * @src: string 1
 * @dest: string 2
 * @n: n bytes from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int n1 = 0, n2 = 0, i, i2 = 0;

	while (dest[n1] != '\0')
		n1++;
	while (src[n2] != '\0')
		n2++;

	for (i = n1; i < n1 + n; i++)
	{
		dest[i] = src[i2];
		i2++;
	}
	return (dest);
}
