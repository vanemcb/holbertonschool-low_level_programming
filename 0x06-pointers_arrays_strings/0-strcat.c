/**
 * _strcat - concatenates two strings
 * @src: string 1
 * @dest: string 2
 * Return: pointer with the string concatenated
 */

char *_strcat(char *dest, char *src)
{
	int n = 0, n2 = 0, i, i2;

	while (dest[n] != '\n')
		n++;
	while (dest[n2] != '\n')
		n2++;

	for (i = n; i <= n + n2; i++)
	{
		dest[i] = src[i2];
		i2++;
	}
	return (dest);
}
