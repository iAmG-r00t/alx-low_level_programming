#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0-9 in hex
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	/*for loop that print 0-9*/

	/**
	 * we are using 48 because
	 * it is the ascii representation
	 * of zero.
	*/
	for (i = 48; i <= 102; i++)
	{
		putchar(i);

		/**
		 * if we reach 9 jump till
		 * ` which is 96 ascii value
		 * then we continue to
		 * print all ASCII values
		 * from 97 - 102
		*/
		if (i == 57)
		{
			i += 39;
		}
	}

	putchar('\n');
	return (0);
}
