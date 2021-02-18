/**
 * _strcmp - function that copies a string
 * @s1: string 1
 * @s2: string2
 * Return: 0, positive or negative
 */

int _strcmp(char *s1, char *s2)
{
	int n1 = 0, n2 = 0, r;

	while (s1[n1] != '\0')
		n1++;

	while (s2[n2] != '\0')
		n2++;

	if (s1 < s2)
		r = -15;
	else if (s1 > s2)
		r = 15;
	else
		r = 0;
	return (r);
}
