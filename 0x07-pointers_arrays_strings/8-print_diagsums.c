#include <stdio.h>

/**
 * print_diagsums - print the sum of the two
 *                 diagonals of a square matrix
 *                 of integers.
 * @a: input pointer
 * @size: size of the matrix
 *
 * Return: nothing
*/

void print_diagsums(int *a, int size)
{
	int i, S1, S2;

	S1 = 0;
	S2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			S1 += a[i];
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			S2 += a[i];
	}
	printf("%d, %d\n", S1, S2);
}
