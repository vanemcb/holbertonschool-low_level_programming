/**
 * _strncpy - function that copies a string
 * @src: source string
 * @dest: destunation string
 * @n: n bytes from src
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int n2 = 0, i;

	while (src[n2] != '\0')
		n2++;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		if (src[i] != '\0')
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}
	return (dest);
}
