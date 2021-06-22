#include"holberton.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *
 * Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	char ch;
	int i = 1;

	/*print alphabet a - z ten time*/
	do {
		/*print alphabet a - z*/
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}

		_putchar('\n');

		i++;

	} while (i <= 10);

}

