/**
 * _pow_recursion - a function that returns the power of @x by @y x^y
 *
 * @x: integer x
 * @y: integer y
 *
 * Return: the power of @x by @y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)		/*if y is a negative number, return -1*/
		return (-1);
	else if (y == 0)	/*x to the power of 0 is 1*/
		return (1);
	else			/*get the pow of x by y*/
		return (x * _pow_recursion(x, y - 1));
}
