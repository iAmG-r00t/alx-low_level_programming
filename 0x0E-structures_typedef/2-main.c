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

	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Bob";
	print_dog(&my_dog);
	return (0);
}
