#include"holberton.h"

/**
 * jack_bauer- prints every minute of the day
 *
 * Return: minute of the day
*/

void jack_bauer(void)
{
	int hr1 = 0;
	int hr2;
	int min1;
	int min2;

	while (hr1 <= 2)
	{
		hr2 = 0;
		while (hr2 <= 3)
		{
			min1 = 0;
			while (min1 <= 5)
			{
				min2 = 0;
				while (min2 <= 9)
				{
					_putchar(hr1 + '0');
					_putchar(hr2 + '0');
					_putchar(':');
					_putchar(min1 + '0');
					_putchar(min2 + '0');
					_putchar('\n');

					min2++;
				}

				min1++;
			}

			hr2++;
		}

		hr1++;
		min1 = 0;
		min2 = 0;
	}
}
