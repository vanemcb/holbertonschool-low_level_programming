/**
 * leet - encodes a string into 1337
 * @letter: input character
 * Return: letter
 */

char *leet(char *letter)
{
	char l[] = {'A', 'E', 'O', 'T', 'L'};
	char L[] = {'a', 'e', 'o', 't', 'l'};
	char num[] = {'5', '3', '0', '7', '1'};
	int i, x;

	while (letter[i] != '\0')
	{
		for (x = 0; x < 5; x++)
		{
			if (letter[i] == l[x] || letter[i] == L[x])
				letter[i] = num[x];
		}
		i++;
	}
	return (letter);
}
