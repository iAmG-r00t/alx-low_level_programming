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

	/*while loop that print 0-9*/
	for (i = 48; i <= 102; i++)
	{
		putchar(i);

		/*to learn why*/
		if (i == 57)
		{
			i += 39;
		}
	}

	putchar('\n');
	return (0);
}
