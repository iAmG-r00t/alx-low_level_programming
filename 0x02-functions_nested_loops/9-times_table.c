#include"holberton.h"

/**
 * times_table - prints the 9 times table
 *
 * Example Table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 *
 * Return: Always 0 (Success)
*/

void times_table(void)
{
	int a, b, result;

	/*first character*/
	for (a = 0; a <= 9; a++)
	{
		/*second character*/
		for (b = 0; b <= 9; b++)
		{
			/*print 0 for the first column*/
			if (b == 0)
			{
				_putchar('0');
				continue;
			}

			/*multiply a and b*/
			result = a * b;
			_putchar(',');
			_putchar(' ');

			/**
			 * if result is more and equal to 10
			 * we will be forced to get the first
			 * digit and second digit of product
			 * and print them out respectively
			*/
			if (result >= 10)
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(result + '0');
			}
		}
		_putchar('\n');
	}
}
