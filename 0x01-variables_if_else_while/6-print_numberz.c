#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0-9 using putchar
 *              while using int variable
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	/*for loop that print 0-9*/
	for (i = 0; i <= 9; i++)
	{
		/*don't understand how it works*/
		putchar(i + '0');
	}

	putchar('\n');

	return (0);
}
