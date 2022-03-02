#include <stdio.h>

/**
 * main - derefencing pointers
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;
	printf("Value of 'n' is %d\n", n);
	printf("Address of 'n' is %p\n", &n);
	printf("Value of 'p' is %p\n", p);
	*p = 402;
	printf("Value of 'n is %d\n", n);
	return (0);
}
