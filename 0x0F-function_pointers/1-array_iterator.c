#include <stddef.h>

/**
 * array_iterator - a function that executes a given function
 *                  as a parameter on each element of an array
 *
 * @array - array to iterate
 * @size: size of array
 * @action: function to print element
 *
 * Return: empty if @array and @action is NULL
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array && action)
		for (index = 0; index < size; index++)
			action(array[index]);
}
