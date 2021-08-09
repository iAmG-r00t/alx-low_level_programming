#include "holberton.h"

#define MAXSIZE 1024

/**
 * main - create a copy of file
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 for success.
*/

int main(int argc, char *argv[])
{
	int file_in, file_out, read_stat;
	int close_in, close_out;
	char buffer[MAXSIZE];

	/*if arguments are not 3*/
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	file_in = open(argv[1], O_RDONLY); /*read input file*/
	if (file_in == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_out = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((read_stat = read(file_in, buffer, MAXSIZE)) > 0)
	{
		if (file_out == -1 || (write(file_out, buffer, read_stat) != read_stat))
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (read_stat < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	close_in = close(file_in);
	if (close_in == -1)
		dprintf(STDERR_FILENO, "Error: Can't close file %i\n", file_in), exit(100);

	close_out = close(file_out);
	if (close_out == -1)
		dprintf(STDERR_FILENO, "Error: Can't close file %i\n", file_out), exit(100);

	return (0);
}
