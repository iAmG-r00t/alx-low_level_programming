#include"holberton.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 *                 the alphabet a - z
 *
 * Description: prototype function called print_alphabet
 *
 *
 * Return: return 1 on success
*/

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
