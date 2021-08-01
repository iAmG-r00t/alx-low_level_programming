#include "holberton.h"

/**
 * _puts_recursion - a function that prints a new line
 *
 * @s: the string
 *
 * Return: nothing
*/

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
