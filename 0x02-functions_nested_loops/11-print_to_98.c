#include<stdio.h>

/**
 * print_to_98 - print n to 98 counts
 *           separated by comma, followed
 *           by space and number should be
 *           printed in order
 *
 * @n: input
 *
 * Return: Always 0 (Success)
*/

void print_to_98(int n)
{
	/* count 98 cycles*/
	int i;

	/*check if n is lower or equal to 98*/
	if (n <= 98)
	{
		/*if i is lower than 98 print i forwards*/
		for (i = n; i < 98; i++)
		{
			printf("%i, ", i);
		}
	} else /*if n is larger than 98 then*/
	{
		/*if i is larger than 98 print i backwards*/
		for (i = n; i > 98; i--)
		{
			printf("%i, ", i);
		}
	}

	printf("98\n");
}
