/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: s
 */

char *rot13(char *s)
{
	char letter1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLM\
abcdefghijklmnopqrstuvwxyzabcdefghijklm";

	int i = 0, x = 0;

	while (s[i] != '\0')
	{
		for (x = 0; x < 78; x++)
		{
			if (s[i] == letter1[x])
			{
				s[i] = letter1[x + 13];
				break;
			}
		}
		i++;
	}
	return (s);
}
