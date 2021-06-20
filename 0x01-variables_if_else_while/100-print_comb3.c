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
	int i;
	int j = 0;

	while (j < 10)
	{
		i = 0;
		while (i < 10)
		{
			putchar(j + '0');
			putchar(i + '0');

			if (j + i != 18)
			{
				putchar(',');
				putchar(' ');
			}

			i++;
		}

		j++;
	}

	putchar('\n');

	return ('0');
}
