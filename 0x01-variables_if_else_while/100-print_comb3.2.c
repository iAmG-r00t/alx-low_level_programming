#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different
 *           combinations of two digits.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int a = 0;
	int b;

	/*print the first digit*/
	while (a < 10)
	{
		/**
		 * we have to initialize
		 * the second digit here
		*/
		b = 0;

		/*print the second digit*/
		while (b < 10)
		{
			/**
			 * never print two digits that are the same
			 * and make sure the first digit is less
			 * that the second digit.
			*/
			if (a != b && a < b)
			{
				putchar(a + '0');
				putchar(b + '0');

				/*don't place a comma and space after 89*/
				if (a + b != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			b++;
		}

		a++;
	}


	putchar('\n');

	return (0);
}
