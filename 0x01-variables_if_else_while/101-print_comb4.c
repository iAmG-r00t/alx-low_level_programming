#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different
 *            combinations of two digits.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int a;
	int b;
	int c;

	/*print first digit*/
	for (a = 0; a < 10; a++)
	{
		/*print second digit*/
		for (b = 0; b < 10; b++)
		{
			/*print third digit*/
			for (c = 0; c < 10; c++)
			{
				/**
				 * don't print three matching digits and
				 * make sure first digit is less than
				 * the second digit and the second digit is
				 * less than the third digit.
				*/
				if (a != b && a < b && b != c && b < c)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');

					/* dont place a comma and space after 789*/
					if (a + b + c != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
