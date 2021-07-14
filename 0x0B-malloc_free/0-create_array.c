#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes
 *                it with a specific char.
 *
 * @size: array size
 * @c: char to initialize array with
 *
 * Return: array @a
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	a = malloc((size + 1) * sizeof(char));
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	a[i] = '\0';
	return (a);
}
