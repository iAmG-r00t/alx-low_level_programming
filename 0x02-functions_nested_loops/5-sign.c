#include"main.h"

/**
 * print_sign - print + if n is greater than zero,
 *             0 if n is zero and - if n is less
 *             than zero.
 *
 * @n: takes integer type input for function.
 *
 * Return: 1 if +, 0 if 0 and -1 if -
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43 + 0);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + 48);
		return (0);
	}
	else
	{
		_putchar(45 + 0);
		return (-1);
	}
}
