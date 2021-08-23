#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Commandline to AV
 *
 * argc: argument counter
 * argv: argument vector
 *
 * Return: Always Success (0) or 1 if anything fails.
*/
int main(int argc, char *argv[])
{
	char *token;

	if (argc != 2)
	{
		printf("\nUsage: %s \"a string of any kind\"\n", argv[0]);
		exit(1);
	}

	token = strtok(argv[1], " ");

	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}

	return (0);
}
