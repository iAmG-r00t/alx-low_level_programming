#include <stdio.h>

/**
 * main - derefencing pointers
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;
	int *p;
	char c;
	char *pp;

	c = 'H';
	pp = &c;
	n = 98;
	p = &n;
	printf("Value of 'c' is %d ('%c')\n", c, c);
	printf("Address of 'c' is %p\n", &c);
	printf("Value of 'pp' is %p\n", pp);
	printf("Value of 'n' is %d\n", n);
	printf("Address of 'n' is %p\n", &n);
	printf("Value of 'p' is %p\n", p);
	*p = 402;
	*pp = 'o';
	printf("Value of 'n' is %d\n", n);
	printf("Value of 'p' is %d\n", *p);
	printf("Value of 'c' is %d ('%c')\n", c, c);
	printf("Value of '*pp' is %d ('%c')\n", *pp, *pp);
	return (0);
}
