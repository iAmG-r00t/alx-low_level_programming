#include "holberton.h"

/**
 * print_rev - print strings in reverse
 *          followed by a new line
 *
 * @s: pointer to input
 *
 * Return: Always 0 (Success)
*/

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] >= 0; i++)
	{
		if (s[i] == '\0')
			break;
	}

	for (i--; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
