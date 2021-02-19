/**
 * leet - encodes a string into 1337
 * @s: input character
 * Return: letter
 */

char *leet(char *s)
{
	char l[] = {'A', 'E', 'O', 'T', 'L'};
	char L[] = {'a', 'e', 'o', 't', 'l'};
	char num[] = {'4', '3', '0', '7', '1'};
	int i, x;

	while (s[i] != '\0')
	{
		for (x = 0; x < 5; x++)
		{
			if (s[i] == l[x] || s[i] == L[x])
				s[i] = num[x];
		}
		i++;
	}
	return (s);
}
