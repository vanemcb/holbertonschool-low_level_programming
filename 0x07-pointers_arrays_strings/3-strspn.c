/**
 * _strspn - function that gets the length of a prefix substring
 * @s: input string
 * @accept: bytes supported
 * Return: n (number of bytes)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, x, c = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (x = 0; s[x] != '\0' && s[x] != ' '; x++)
		{
			if (accept[i] == s[x])
			{
				c++;
				break;
			}
		}
	}
	return (c + 1);
}
