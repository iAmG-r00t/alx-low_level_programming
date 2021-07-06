#include "holberton.h"

/**
 * puts_half - print half of a string
 *
 * @str: string input pointer
 *
 * Return: nothing
*/

void puts_half(char *str)
{
	int i, c = 0;

	/* find the length of array - null character*/
	while (c >= 0)
	{
		if (str[c] == '\0')
			break;
		c++;
	}

	/*check if length is even or not*/
	if (c % 2 == 1)
		/**
		 * if length is even,
		 * i is half the length
		*/
		i = c / 2;
	else
		/**
		 * if length is odd,
		 * i is half of length - 1
		*/
		i = (c - 1) / 2;

	for (i++; i < c; i++)
		_putchar(str[i]);
	_putchar('\n');
}
