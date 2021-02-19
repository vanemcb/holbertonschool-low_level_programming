/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 * Return: s
 */

char *cap_string(char *s)
{
	char letter[] = "abcdefghijklmnopqrstuvwxyz";
	char sep[] = {',',';','.','!','?','"','(',')','{','}','\n','\t',' '};

	int i = 0, x, y;

	while (s[i] != '\0')
	{
		for (x = 0; x < 13; x++)
		{
			if (s[i] == sep[x])
			{
				for (y = 0; y < 26; y++)
				{
					if (s[i + 1] == letter[y])
						s[i + 1] = s[i +1 ] - 32;
				}
			}
		}
		i++;
	}
	return (s);
}
