/**
 * _strspn - function that gets the length of a prefix substring
 * @s: input string
 * @accept: bytes supported
 * Return: n (number of bytes)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, x, c = 0;

	for (i = 0; s[i] != '\0' && s[i] != ' '; i++)
	{
		for (x = 0; accept[x] != '\0' ; x++)
		{
			if (accept[x] == s[i])
			{
				c++;
			}
		}
	}
	return (c);
}
