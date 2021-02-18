/**
 * string_toupper - hanges all lowercase letters of a string to uppercase
 * @s: string
 * Return: s
 */

char *string_toupper(char *s)
{
	int i = 0, x;
	char y;

	while (s[i] != '\0')
		i++;

	for (x = 0; x < i; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			if (s[x] == y)
				s[x] = s[x] - 32;
		}
	}
	return (s);
}
