#include"holberton.h"

/**
 * main - Entry point
 *
 * Description:function called print_alphabet
 *            that utilizes on the _putchar
 *            function prototype
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
