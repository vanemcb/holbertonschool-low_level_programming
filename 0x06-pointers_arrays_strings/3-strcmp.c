/**
 * _strcmp - function that copies a string
 * @s1: string 1
 * @s2: string2
 * Return: 0, positive or negative
 */

int _strcmp(char *s1, char *s2)
{
	int n1 = 0, n2 = 0, r, i;

	while (s1[n1] != '\0')
		n1++;

	while (s2[n2] != '\0')
		n2++;

	for (i = 0; i < n1; i++)
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			break;
		}
		else
			r = 0;
	}
	return (r);
}
