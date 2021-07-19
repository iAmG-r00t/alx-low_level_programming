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
	while (str[i] != '\0')
		i++;

	p = malloc((i + 1) * sizeof(*p));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	while (n < (i + 1))
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
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->name = _strdup(name);
	if ((*dog).name == NULL)
		return (NULL);

	dog->owner = _strdup(owner);
	if ((*dog).owner == NULL)
		return (NULL);

	dog->age = age;

	return (dog);
}
