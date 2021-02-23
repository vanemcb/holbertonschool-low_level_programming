/**
 * _strstr - function that locates a substring
 * @haystack: input string
 * @needle: substring
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, x, c = 0;

	if (needle[0] == '\0')
		return (0);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (x = 1; needle[x] != '\0'; x++)
			{
				if (haystack[i + x] == needle[x])
					c++;
			}
			if (c == x - 1)
				return (haystack + i);
		}
	}
	return (0);
}
