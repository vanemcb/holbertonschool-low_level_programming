/**
 * _strpbrk - unction that searches a string for any of a set of bytes
 * @s: input string
 * @accept: bytes supported
 * Return: n (number of bytes)
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, x, n = 0;

	while (accept[n] != '\0')
		n++;
	for (i = 0; i <= n; i++)
	{
		for (x = 0; x <= n; x++)
		{
			if (s[i] == accept[x])
				break;
		}
		if (s[i] == accept[x])
			break;
	}
	return (s + i);
}
