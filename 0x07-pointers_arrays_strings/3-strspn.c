/**
 * _strspn - function that gets the length of a prefix substring
 * @s: input string
 * @accept: bytes supported
 * Return: n (number of bytes)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, x, n = 0, c;

	while (accept[n] != '\0')
		n++;
	for (i = 0; i <= n; i++)
	{
		for (x = 0; x <= n; x++)
		{
			if (s[i] == accept[x])
				c++;
		}
	}
	return (c);
}
