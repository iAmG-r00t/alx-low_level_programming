#include <stdlib.h>
#include "dog.h"

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
	char *c_name, *c_owner;

	c_name = name;
	c_owner = owner;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->name = c_name;
	dog->age = age;
	dog->owner = c_owner;

	return (dog);
}
