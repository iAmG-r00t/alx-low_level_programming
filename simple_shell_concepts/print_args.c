#include <stdio.h>

/**
 * main - print arguments without using ac
 *
 * @argv: argument counter
 *
 * Return: Always success (0)
*/
int main(int __attribute__((unused)) argc, char *argv[])
{
	int index = 0;

	while (argv[index] != NULL)
	{
		printf("%s\n", argv[index]);
		index++;
	}

	return (0);
}
