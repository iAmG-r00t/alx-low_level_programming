#include <stdio.h>
#include "pointers.h"

/**
 * main - Solve me
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';
	printf("Value of 'p' before the call is %p\n", p);
	printf("Value of 'c' is %d ('%c')\n", c, c);
	printf("Address of 'c' is %p\n", &c);
	modif_my_char_var(p, c);
	printf("Value of 'p' after the call is %p\n", p);
	printf("Value of 'c' is %d ('%c')\n", c, c);
	printf("Address of 'c' is %p\n", &c);

	return (0);
}
