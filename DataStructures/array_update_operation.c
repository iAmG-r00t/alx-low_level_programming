#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Update operation
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int LA[] = {1,3,5,7,8};
	int index_3 = 3, array_size = 5, element = 10;
	int index;

	printf("The original array elements are:\n");

	for (index = 0; index < array_size; index++)
		printf("\t\t\t\t\tLA[%d] = %d \n", index, LA[index]);

	/*update index 2*/
	LA[index_3 - 1] = element;

	printf("The array elements after updating :\n");

	for (index = 0; index < array_size; index++)
		printf("\t\t\t\t\tLA[%d] = %d \n", index, LA[index]);

	return (0);
}
