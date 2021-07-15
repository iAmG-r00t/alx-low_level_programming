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
 * free_array - free arr[i]
 *
 * @ar: array to free
 * @i: array[i]
 *
 * Return: nothing
*/

void free_array(char **ar, int i)
{
	if (ar != NULL && i != 0)
	{
		while (i >= 0)
		{
			free(ar[i]);
			i--;
		}
		free(ar);
	}
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
	int i, s, j, str_l, word;
	char **string;

	if (str == NULL || *str == '\0')
		return (NULL);

	str_l = wordcount(str);
	/*return null if str_l == 0 || new == NULL*/
	string = malloc((str_l + 1) * sizeof(char *));
	if (str_l == 0 || string == NULL)
		return (NULL);

	for (i = s = 0; i < str_l; i++)
	{
		for (word = s; str[word] != '\0'; word++)
		{
			if (str[word] == ' ')
				s++;

			if (str[word] != ' ' && (str[word + 1] == ' ' || str[word + 1] == '\0'))
			{
				string[i] = malloc((word - s + 2) * sizeof(char));
				if (string[i] == NULL)
				{
					free_array(string, i);
					return (NULL);
				}
				break;
			}
		}

		for (j = 0; s <= word; s++, j++)
			string[i][j] = str[s];
		string[i][j] = '\0';
	}
	string[i] = NULL;
	return (string);
}
