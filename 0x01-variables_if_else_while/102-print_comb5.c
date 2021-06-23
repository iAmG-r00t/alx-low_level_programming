#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int fd;
	int sd;

	for (fd = 0; fd <= 98; fd++)
	{
		for (sd = 1; sd <= 99; sd++)
		{
			if (fd < sd)
			{
				putchar(fd / 10 + '0');
				putchar(fd % 10 + '0');
				putchar(' ');
				putchar(sd / 10 + '0');
				putchar(sd % 10 + '0');

				if (fd != 98 || sd != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
