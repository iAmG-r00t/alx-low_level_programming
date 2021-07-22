#include <stddef.h>

#define true 1
#define false 0

typedef enum {FALSE, TRUE} bool;

/**
 * int_index - a function that searches for an integer
 *
 * @array: pointer to array
 * @size: size of @array
 * @int: pointer to function to call
 *
 * Return: Always 0 (Success)
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;
	bool y;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (index = 0; index < size; index++)
		{
			y = cmp(array[index]);
			if(y == TRUE)
				return (index);
		}
	}

	return (-1);

}
