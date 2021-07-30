#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Deletion operation
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int LA[] = {1,3,5,7,8};
	int index_3 = 3, array_size = 5;
	int index, remap = index_3;


	printf("The original array elements are:\n");

	for (index = 0; index < array_size; index++)
		printf("\t\t\t\t\tLA[%d] = %d \n", index, LA[index]);

	/**
	 * this time we are going to remove element 5
	 * that was in index 2 originally
	*/
	while (remap < array_size)
	{
		LA[remap - 1] = LA[remap];
		remap += 1;
	}

	/* set a new array size */
	array_size -= 1;

	printf("The array elements after deletion :\n");

	for (index = 0; index < array_size; index++)
		printf("\t\t\t\t\tLA[%d] = %d \n", index, LA[index]);

	return (0);
}
