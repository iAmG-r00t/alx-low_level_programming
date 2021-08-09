#include "main.h"

/**
 * append_text_to_file - a funcion that appends text at the end
 *                      of a file
 *
 * @filename: file to add data to
 * @text_content: text content to add to file
 *
 * Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, app_status, words = 0;

	if (filename == NULL) /*check if file is present*/
		return (-1);

	/*open file, with append option with write rights*/
	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1) /*check if file is present*/
		return (-1);

	if (text_content) /*append content to file if its not NULL*/
	{
		while (text_content[words] != '\0') /*find number of words*/
			words++;

		/*append to file*/
		app_status = write(file, text_content, words);
		if (app_status == -1) /*check if append was a success*/
			return (-1);
	}

	close(file); /*close file*/
	return (1);
}
