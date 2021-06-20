#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: print 0-9 in hex
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char i = '0';
	char ch = 'a';

	/*while loop that prints 0-9*/
	while (i <= '9')
	{
		putchar(i);
		i++;
	}

	/*while loop that prints a-f*/
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
