#include<stdio.h>

/**
 * main - Solve me
 *
 * Return: Always 0 (Success).
*/

int main(void)
{
	int a[5];	/*array*/
	int *p;		/*pointer 1*/
	int *p2;	/*pointer 2*/

	*a = 98;			/* a[0] = 98 */
	printf("a[0] = %d and its in address %p\n", *a, &a[0]);
	*(a + 1) = 198;		/* a[1] = 198 */
	printf("a[1] = %d and its in address %p\n", *(a + 1), &a[1]);
	*(a + 2) = 298;		/* a[2] = 298 */
	printf("a[2] = %d and its in address %p\n", *(a + 2), &a[2]);
	a[3] = 398;			/* *(a + 3) = 398 */
	printf("a[3] = %d and its in address %p\n", *(a + 3), &a[3]);
	*(a + 4) = 498;		/* a[4] = 498 */
	printf("a[4] = %d and its in address %p\n", *(a + 4), &a[4]);
	printf("------------------------------------------------------------------------------\n");
	p = a + 1; /*pointer points to a[1]*/
	printf("p points to a[1] = %d and its in address %p\n", *p, p);
	*p = 98; /*dereferencing using a pointer where we change the value of a[1]*/
	printf("*p dereference a[1] changing the value to %d and its in address %p\n", *p, p);
	p2 = a + 3;
	printf("p2 points to a[3] = %d and its in address %p\n", *p2, p2);
	*p2 = *p + 1337;
	printf("*p2 dereference a[3] changing the value to %d and its in address %p\n", *p2, p2);
	return (0);
}
