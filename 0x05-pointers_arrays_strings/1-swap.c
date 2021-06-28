#include "holberton.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: first input
 * @b: second input
 *
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
