#include <stdlib.h>

/**
 * wordcount - get word count from string
 *             without spaces
 *
 * @str: string to count words present
 *
 * Return: The number of words
*/

int wordcount(char *str)
{
	int words = 0;

	while (*str != '\0')
	{
		/*skip spaces*/
		if (*str == ' ')
			str++;
		else
		{
			/*count words*/
			while (*str != ' ' && *str != '\0')
				str++;
			words++;
		}
	}
	return (words);
}

/**
 * strtow - split a string to words
 *
 * @str: string to split.
 *
 * Return: NULL if it fails
*/

char **strtow(char *str)
{
	int i, j, str_l, words;
	char **string, *temp;

	i = j = str_l = words = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	str_l = wordcount(str);
	/*return null if str is a space*/
	if (str_l == 0)
		return (NULL);

	string = malloc((str_l + 1) * sizeof(char *));
	if (string == NULL)
		return (NULL);


	/*iterate through the string*/
	while (*str != '\0' && i < str_l)
	{
		/*skip empty spaces*/
		if (*str == ' ')
			str++;
		else
		{
			temp = str;
			/*count word_s*/
			while (*str != ' ' && *str != '\0')
				str++;
			words++;

			string[i] = malloc((words + 1) * sizeof(char));
			if (string[i] == NULL)
			{
				while (i >= 0)
				{
					free(string[i]);
					i--;
				}
				free(string);
				return (NULL);
			}

			while (*temp != ' ' && *temp != '\0')
			{
				string[i][j] = *temp;
				temp++; j++;
			}
			string[i][j] = '\0';
			i++; j = 0; str++;
		}
	}
	string[str_l] = NULL;
	return (string);
}
