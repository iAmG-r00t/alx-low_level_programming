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
	char alpha;

	/*for loop that prints z-a*/
	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}

	putchar('\n');

	return (0);
}
