#include <stdio.h>

/**
 * main - Accessing the different elements of an array
 *
 * Return: Always 0 (success).
*/

int main(void)
{
	int a[5];

	a[0] = 98;
	a[1] = 198;
	a[2] = 298;
	a[3] = 398;
	a[4] = 498;
	printf("Value of a[0]: %d\n", a[0]);
	printf("Value of a[1]: %d\n", a[1]);
	printf("Value of a[2]: %d\n", a[2]);
	printf("Value of a[3]: %d\n", a[3]);
	printf("Value of a[4]: %d\n", a[4]);
	printf("Address of 'a[0]': %p\n", &(a[0]));
	printf("Address of 'a[1]': %p\n", &(a[1]));
	printf("Address of 'a[2]': %p\n", &(a[2]));
	printf("Address of 'a[3]': %p\n", &(a[3]));
	printf("Address of 'a[4]': %p\n", &(a[4]));
	return (0);
}
