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

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
