#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int c;
	int d = 0;

	while (d < 10)
	{
		c = 0;

		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar(d + '0');
				putchar(c + '0');

				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			c++;
		}

		d++;
	}

	putchar('\n');

	return (0);
}
