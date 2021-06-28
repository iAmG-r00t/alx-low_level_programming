#include <stdio.h>

/**
 * main - storing the address of variable into a pointer
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;
	printf("Address of 'n' is %p\n", &n);
	printf("Value of 'n' is %d\n", n);
	printf("Address of 'p' is %p\n", &p);
	printf("Variable 'p' pointing to which address %p\n", p);
	printf("Value of 'p' is %d\n", *p);
}
