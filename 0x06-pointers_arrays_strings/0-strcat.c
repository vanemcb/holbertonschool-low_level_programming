/**
 * _strcat - concatenates two strings
 * @src: string 1
 * @dest: string 2
 * Return: pointer with the string concatenated
 */

char *_strcat(char *dest, char *src)
{
	int n = 0, n2 = 0, i, i2 = 0;

	while (dest[n] != '\0')
		n++;
	while (src[n2] != '\0')
		n2++;

	for (i = n; i <= n + n2; i++)
	{
		dest[i] = src[i2];
		i2++;
	}
	return (dest);
}
