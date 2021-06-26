#include "holberton.h"

/**
 * print_square - print a square using the character #
 *
 * @size: is the size of the square
 *
 * Return: Always 0 (Success)
*/

void print_square(int size)
{
	int c, r;

	if (!(size <= 0))
	{
		for (c = 0; c < size; c++)
		{
			r = 0;
			while (r < size)
			{
				_putchar('#');
				r++;
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
