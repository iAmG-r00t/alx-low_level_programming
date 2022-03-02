#include <stdio.h>

/**
 * main - printing the size, in bytes of a pointer
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int *p; /*pointer to an integer*/
	char *ptr2; /*pointer to a char*/

	printf("Size of pointer to an integer is %lu\n", sizeof(p));
	printf("Address of pointer to an integer is %p\n", &p);
	printf("Size of pointer to a char is %lu\n", sizeof(ptr2));
	printf("Address of pointer to a char is %p\n", &ptr2);
	return (0);
}
