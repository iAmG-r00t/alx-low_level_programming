#include "../main.h"

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
