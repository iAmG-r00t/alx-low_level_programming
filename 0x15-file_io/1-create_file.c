#include "main.h"

/**
 * create_file - a function that creates a file
 *
 * @filename: name of file to create
 * @text_content: string to write to file
 *
 * Return: 1 on success OR -1 on faliure
*/
int create_file(const char *filename, char *text_content)
{
	int file, write_status, words = 0;

	if (filename == NULL) /*check if filename is present*/
		return (-1);

	/*open file by creating it and if it exists write but truncate to 0*/
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1) /*check if file creation was a success*/
		return (-1);

	if (text_content) /*write content to file if its not NULL*/
	{
		while (text_content[words] != '\0') /*find number of words*/
			words++;

		/*write to file*/
		write_status = write(file, text_content, words);
		if (write_status == -1) /*check if write was a success*/
			return (-1);
	}

	close(file); /*close file*/
	return (1);
}
