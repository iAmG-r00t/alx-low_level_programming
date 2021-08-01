/**
 * _pow_recursion - a function that returns the power of @x by @y x^y
 *
 * Description: this method is good for speed, check this youtube video
 *   https://youtu.be/wAyrtLAeWvI?list=PL2_aWCzGMAwLz3g66WrxFGSXvSsvyfzCO
 *
 * @x: integer x
 * @y: integer y
 *
 * Return: the power of @x by @y
*/
int _pow_recursion(int x, int y)
{
	int even;

	if (y < 0)		/*if y is a negative number, return -1*/
		return (-1);
	else if (y == 0)	/*x to the power of 0 is 1*/
		return (1);
	else if (y % 2 == 0)	/*if y is an even number*/
	{
		even = _pow_recursion(x, y / 2);
		return (even * even);
	}
	else			/*if y is odd*/
		return (x * _pow_recursion(x, y - 1));
}
