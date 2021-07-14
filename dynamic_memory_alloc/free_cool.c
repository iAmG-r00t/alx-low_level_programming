#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	char *ar;

	n = 5;
	/**
	 * sizeof(char) == 1 hence 5 * 1 == 5
	 * malloc will allocate 5 bytes of memory
	 * for array ar.
	 * note it's best practice to use sizeof array type
	 * instead of inputing the raw number
	 */
	ar = malloc(n * sizeof(char));
	ar[0] = 'C';
	ar[1] = 'o';
	ar[2] = 'o';
	ar[3] = 'l';
	ar[4] = '\0';
	printf("%s\n", ar);
	free(ar);
	printf("%s\n", ar);
	return (0);
}
