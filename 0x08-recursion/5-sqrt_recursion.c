/**
 * _sqrt_recursion_wrapper - a wrapper that does the recursion bit
 *
 * @n : input number
 * @min: minimum number to guess
 * @max: maximum number to guess
 *
 * Return: square root of @n or -1
*/
int _sqrt_recursion_wrapper(int n, int min, int max)
{
	int guess, guess_squared;

	guess = (min + max) / 2;		/*get guess (g)*/
	guess_squared = guess * guess;		/*square guess (sg)*/

	if (guess_squared == n)			/*if squared guess == n return guess*/
		return (guess);
	else if (min == max)			/*this means n doesn't have a perfect square*/
		return (-1);
	else if (guess_squared < n)		/*overshoot g if sg is less than the n*/
		return (_sqrt_recursion_wrapper(n, guess + 1, max));
	else					/*undershoot g if sg is more than the n*/
		return (_sqrt_recursion_wrapper(n, min, guess - 1));
}

/**
 * _sqrt_recursion - a function that returns the natural
 *                   square root of a number
 *
 * @n: input number
 *
 * Return: square root
*/
int _sqrt_recursion(int n)
{
	if (n == 1)		/*sqrt(1) == 1*/
		return (1);
	else if (n == 0)	/*sqrt(0) == 0*/
		return (0);
	else if (n < 0)		/*sqrt(-n) == -1 (NA)*/
		return (-1);
	else
		return (_sqrt_recursion_wrapper(n, 1, n));
}
