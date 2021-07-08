#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
*/

int main(void)
{
	char *s = "hello, world";
	char *p = "helloIhello";
	char *f = "oleh";
	unsigned int n, z;

	n = _strspn(s, f);
	z = _strspn(p, f);
	printf("%u\n", n);
	printf("%u\n", z);
	return (0);
}
