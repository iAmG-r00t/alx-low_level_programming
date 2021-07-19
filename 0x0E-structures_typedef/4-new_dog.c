#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - a function that returns a pointer to a copy of a string
 *
 * @str: pointer to the string
 *
 * Return: Address to string
*/

char *_strdup(char *str)
{
	char *p;
	unsigned int i = 0, n = 0;

	if (str == NULL)
		return (NULL);

	/*get str length*/
	while (str[i])
		i++;

	p = malloc((i + 1) * sizeof(*p));
	if (p == NULL)
		return (NULL);

	while (n < i)
	{
		p[n] = str[n];
		n++;
	}
	p[n] = '\0';

	return (p);
}

/**
 * new_dog - a function that creates a new dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 *
 * Return: NULL if function fails
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}

	d->name = _strdup(name);
	if ((*d).name == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->owner = _strdup(owner);
	if ((*d).owner == NULL)
	{
		free(d->owner);
		free(d);
		return (NULL);
	}

	d->age = age;

	return (d);
}
