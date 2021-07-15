#include <stdlib.h>
#include <string.h>

/**
 * _calloc - a function that allocates
 *           memory for an array using malloc
 *
 * @nmemb: size of array
 * @size: size of each element
 *
 * Return: pointer with new allocated memory
 *         or NULL if it fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	if (p)
		memset(p, 0, nmemb * size);
	return (p);
}
