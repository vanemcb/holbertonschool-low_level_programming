/**
 * _strpbrk - unction that searches a string for any of a set of bytes
 * @s: input string
 * @accept: bytes supported
 * Return: n (number of bytes)
 */

char *_strpbrk(char *s, char *accept)
{
	int i, x;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
				return (s + i);
		}
	}
	return (0);
}
