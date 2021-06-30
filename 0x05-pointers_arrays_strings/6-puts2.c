#include "holberton.h"

/**
 * puts2 - print character of a string
 *      in an array starting from the first
 *      character followed by the rest of the
 *      even index array
 *
 * @str: string input array pointer
 *
 * Return: nothing
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] >= 0; i++)
	{
		if (str[i] == '\0')
			break;

		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
