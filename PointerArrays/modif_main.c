#include <stdio.h>
#include "pointers.h"



/**
 * main - how to change the value of a variable from
 *       outside the function it is declared in, using a
 *       pointer.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;
	int *p;

	p = &n;
	n = 98;
	printf("Value of 'n' before the call is %d\n", n);
	printf("Address of 'n' is %p\n", &n);
	printf("Value of 'p' is %p\n", p);
	printf("Address of 'p' is %p\n", &p);
	modif_my_param(p);
	printf("Value of n after the call is %d\n", n);
	return (0);
}
