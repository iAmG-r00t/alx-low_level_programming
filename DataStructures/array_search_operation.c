#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Search operation
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int LA[] = {1,3,5,7,8};
	int element = 5, array_size = 5;
	int index;

	printf("The original array elements are:\n");

	for (index = 0; index < array_size; index++)
		printf("\t\t\t\tLA[%d] = %d \n", index, LA[index]);

	/*iterate through array and if we find our element break*/
	for (index = 0; index < array_size; index++)
	{
		if (LA[index] == element)
			break;
	}

	printf("Found element %d at position %d\n", element, index + 1);

	return (0);
}
