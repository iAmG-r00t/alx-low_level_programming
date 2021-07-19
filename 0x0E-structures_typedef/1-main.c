#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
*/

int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "Poppy", 3.5, "Bob");
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	return (0);
}
