/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: s
 */

char *rot13(char *s)
{
	char letter1[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
			  'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
			  'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd',
			  'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'A',
			  'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
			  'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
			  'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E',
			  'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};

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
