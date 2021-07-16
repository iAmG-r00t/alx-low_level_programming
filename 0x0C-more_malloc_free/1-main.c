#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
*/

int main(void)
{
	char *concat, *concat2;

	concat = string_nconcat("Holberton ", "School !!!", 6);
	concat2 = string_nconcat("Hello", NULL, 12); string_nconcat(NULL, "Hello", 0); string_nconcat(NULL, NULL, 10);
	printf("%s\n", concat);
	printf("%s\n: ", concat2);
	free(concat);
	return (0);
}
