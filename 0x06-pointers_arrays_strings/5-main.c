#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
*/

int main(void)
{
	char str[] = "Holberton School!\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
