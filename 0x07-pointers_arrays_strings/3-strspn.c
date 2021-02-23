/**
 * _strspn - function that gets the length of a prefix substring
 * @s: input string
 * @accept: bytes supported
 * Return: n (number of bytes)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, x, n1 = 0, n2 = 0, c;

	while (s[n1] != '\0')
		n1++;
	while (accept[n2] != '\0')
		n2++;
	for (i = 0; i <= n2; i++)
	{
		for (x = 0; x <= n1; x++)
		{
			if (accept[i] == s[x])
			{
				c++;
				break;
			}
		}
	}
	return (c);
}
