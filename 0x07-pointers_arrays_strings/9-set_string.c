/**
 * set_string - function that sets the value of a pointer to a char
 * @s: input string
 * @to: output string
 */

void set_string(char **s, char *to)
{
	*s = &*to;
}
