/**
 * _pow_recursion - int _pow_recursion(int x, int y)
 * @x: base
 * @y: power
 * Return: x to the power of y;
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 1)
		return (x);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, --y));
}
