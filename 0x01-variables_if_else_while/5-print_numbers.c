#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all single digit numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	/*for loop that prints 0-9*/
	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}

	printf("\n");

	return (0);
}
