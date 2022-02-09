#include<stdio.h>

/**
 * main - main block
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Return: 0
 */

int main(void)
{
	int firstDigit = 0, seconDigit;

	while (firstDigit <= 98)
	{
		seconDigit = 1;
		while (seconDigit <= 99)
		{
			if (firstDigit < seconDigit)
			{
				putchar(firstDigit / 10 + 48);
				putchar(seconDigit % 10 + 48);
				putchar(' ');
				putchar(seconDigit / 10 + 48);
				putchar(seconDigit % 10 + 48);

				if (firstDigit != 98 || seconDigit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++seconDigit;
		}
		++firstDigit;
	}
	putchar('\n');

	return (0);
}
