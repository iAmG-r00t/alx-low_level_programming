#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print a-z in reverse
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char alpha = 'z';

	/*while loop that prints z-a*/
	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}

	putchar('\n');

	return (0);
}
