#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Insertion operation array.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int LA[] = {1,3,5,7,8};
	int new_element = 10, index_3 = 3, array_size = 5;
	int index, remap = array_size;

	printf("The original array elements are:\n");

	for (index = 0; index < array_size; index++)
		printf("\t\t\t\t\tLA[%d] = %d \n", index, LA[index]);

	/* set a new array size */
	array_size += 1;

	/**
	 * remap index elements where
	 * we take the null byte '\0' and place it
	 * from index 5 to 6, then element 8 from
	 * index 4 to 5, then element 7 from index
	 * 3 to 4.
	*/
	while (remap >= index_3)
	{
		LA[index_3 + 1] = LA[index_3];
		remap -= 1;
	}

	/* because index_3 is now empty we insert a new element */
	LA[index_3] = new_element;

	printf("The array elements after insertion :\n");

	for (index = 0; index < array_size; index++)
		printf("\t\t\t\t\tLA[%d] = %d \n", index, LA[index]);

	return (0);
}
