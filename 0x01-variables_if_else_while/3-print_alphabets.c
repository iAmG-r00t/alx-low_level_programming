#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char alpha;

	/*for loop that prints a-z*/
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}

	/*for loop that print A-Z*/
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		putchar(alpha);
	}


	putchar('\n');

	return (0);
}
