#include"main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 *                 the alphabet a - z
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
