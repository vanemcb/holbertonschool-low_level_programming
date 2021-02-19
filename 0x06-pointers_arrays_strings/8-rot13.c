/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: s
 */

char *rot13(char *s)
{
	char letter1[] = "ABCDEFGHIJKLMabcdefghijklm";
	char letter2[] = "NOPQRSTUVWXYZnopqrstuvwxyz";

	int i = 0, x = 0;

	while (s[i] != '\0')
	{
		for (x = 0; x < 26; x++)
		{
			if (s[i] == letter1[x])
				s[i] = s[i] + 13;
			else if (s[i] == letter2[x])
				s[i] = s[i] - 13;
		}
		i++;
	}
	return (s);
}
