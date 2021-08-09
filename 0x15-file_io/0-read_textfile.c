#include "holberton.h"

/**
 * read_textfile - a function that reads a text file and prints it
 *                to POSIX standard output.
 *
 * @filename: is the file to read
 * @letters: number of letters to read and print from file
 *
 * Return: 0 if it fails or actual number of letters it could
 *         read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t read_check, wcount;
	char *buffer;

	if (filename == NULL) /*check if file is present*/
		return (0);

	file = open(filename, O_RDONLY); /*open file*/

	if (file == -1)
		return (0);

	/*get the size of buffer from number of letters*/
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	read_check = read(file, buffer, letters); /*read file*/
	if (read_check == -1) /*check if read failed*/
		return (0);

	wcount = write(STDOUT_FILENO, buffer, read_check); /*write to POSIX*/
	if (wcount == -1 || read_check != wcount) /*check if write failed*/
		return (0);

	free(buffer);

	close(file); /*close file*/

	return (wcount);
}
