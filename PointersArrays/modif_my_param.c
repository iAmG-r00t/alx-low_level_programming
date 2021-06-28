#include <stdio.h>


/**
 * modif_my_param - set the integer to 402
 *
 * @m: a pointer to the integer we want to set to 402
 *
 * Return: nothing
*/

int modif_my_param(int *m)
{
	printf("Value of 'm' is %p\n", m);
	printf("Address of 'm' is %p\n", &m);
	*m = 402;
}
