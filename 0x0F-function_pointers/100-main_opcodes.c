#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: A program that prints the opcodes
 *              of its own main function.
 *              Usage: ./main number_of_bytes
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always Successful
*/

int main(int argc, char *argv[])
{
	unsigned int index, num;
	char *ptr = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < num - 1; index++)
		printf("%02hhx ", ptr[index]);
	printf("%02hhx\n", ptr[index]);

	return (0);
}
