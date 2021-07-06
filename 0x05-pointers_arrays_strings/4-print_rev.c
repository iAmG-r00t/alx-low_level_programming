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

	/* get string array size of string without the null character*/
	for (i = 0; s[i] >= 0; i++)
	{
		if (s[i] == '\0')
			break;
	}

	/**
	 * knowing the string array we print
	 * each character from last array character.
	*/
	for (i--; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
