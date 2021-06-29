#include <stdio.h>
#include "pointers.h"

/**
 * main - Illustrating the array type decay
 *
 * Return: Always 0.
*/

int main(void)
{
	int *p;
	int t[10];

	p = t; /* This works because of the auto implicit conversion to (int *) */
	printf("t: %p\n", t);
	printf("&t[0]: %p\n", &t[0]);
	printf("p: %p\n", p);
	f(t);
	return (0);
}
