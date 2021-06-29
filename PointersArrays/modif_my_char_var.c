#include <stdio.h>

/**
 * modif_my_char_var - Solve me
 *
 * @cc: pointer to char
 * @ccc: char input
 *
 * Return: nothing.
*/

void modif_my_char_var(char *cc, char ccc)
{
	*cc = 'o';
	ccc = 'l';
	printf("The value of 'cc' is %d ('%c')\n", *cc, *cc);
	printf("The address/value of 'cc' is %p\n", cc);
	printf("The value of 'ccc' is %d ('%c')\n", ccc, ccc);
	printf("The address of 'ccc' is %p\n", &ccc);
}
