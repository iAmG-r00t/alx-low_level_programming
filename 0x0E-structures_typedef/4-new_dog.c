#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - a function that gets a length of string
 *
 * @str: the string to get the length
 *
 * Return: length of @str
*/

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}

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
	unsigned int length = 0, i;

	if (!str)
		return (NULL);

	length = _strlen(str);

	p = malloc(sizeof(*p) * length + 1);
	if (!p)
		return (NULL);

	for (i = 0; i < length; i++)
		p[i] = str[i];
	p[i] = '\0';

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
	if (!((*d).name))
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->owner = _strdup(owner);
	if (!((*d).owner))
	{
		free(d->owner);
		free(d);
		return (NULL);
	}

	d->age = age;

	return (d);
}
