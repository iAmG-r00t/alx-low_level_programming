#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints the size of various types on the computer it is compiled and run on.
 *
 * Return: Always 0 (Succesful)
*/

int main(void)
{
	int intType;
	float floatType;
	long int longIntType;
	long long int llongIntType;
	char charType;

	/* sizeof evaluates the size of a variable */
	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(llongIntType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

	return (0);

}
