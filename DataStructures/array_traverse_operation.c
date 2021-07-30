#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program from tutorials point while reading about
 *              array data structures.
 *
 * Return: Always 0 (success)
*/

int main (void)
{
	int LA[] = {1,3,5,7,8};
	int index = 0, array_size = 5;

	printf("The original array elements are:\n");

	while (index < array_size)
	{
		printf("\t\t\t\tLA[%d] = %d \n", index, LA[index]);
		index++;
	}

	return (0);
}
