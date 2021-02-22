/**
 * _strspn - function that gets the length of a prefix substring
 * @s: input string
 * @accept: bytes supported
 * Return: n (number of bytes)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, x = 0, n = 0;

	while (s[i] != ',')
	{
		while (accept[x] != '\0')
		{
			if (s[i] == accept[x])
				n++;
			x++;
		}
		x = 0;
		i++;
	}
	return (n);
}
