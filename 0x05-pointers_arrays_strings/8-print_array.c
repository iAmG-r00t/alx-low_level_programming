#include <stdio.h>

/**
 * print_array - prints elements of an array of integers
 *
 * @a: pointer to integer
 * @n: variable
 *
 * Return: nothing
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", a[i]);
		}
		else if (i != (n - 1))
		{
			printf("%d", a[i]);
			printf(", ");
		}
	}
	printf("\n");
}
