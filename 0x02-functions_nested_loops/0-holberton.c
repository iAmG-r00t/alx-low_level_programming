#include"holberton.h"

/**
 * main - Entry point
 *
 * Description: prints Holberton, will be using putchar
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	/**
	 * we declare our str char array of size 10
	 * and an int ch which is 0
	*/
	char str[8] = "Holberton";
	int ch = 0;

	/**
	 * print each character from our str array
	 * which is contains 8 characters
	*/
	while (ch < 9)
	{
		_putchar(str[ch]);
		ch++;
	}

	/*place a new line after looping through our charcters*/
	_putchar('\n');
	return (0);
}
