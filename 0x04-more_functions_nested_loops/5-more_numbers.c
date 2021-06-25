#include "holberton.h"

/**
 * more_numbers - print 0 - 14 ten times
 *              and you can only use
 *              _putchar three times
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int i, s, t;

	t = 1;
	while (t <= 10)
	{
		for (s = 0; s <= 1; s++)
		{
			for (i = 0; i <= 9; i++)
			{
				if (!(s == 1 && i >= 5))
				{
					if(s)
						_putchar(s + 48);
					_putchar(i + 48);
				}
			}
		}

		_putchar('\n');
		t++;
	}
}
