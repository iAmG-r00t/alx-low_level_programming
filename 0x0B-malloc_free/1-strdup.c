#include <stdlib.h>

/**
 * *_strdup - a function that duplicates a string
 *
 * @str: input string to duplicate
 *
 * Return: NULL if str == NULL
 *         @str
*/

char *_strdup(char *str)
{
	int i = 0, length = sizeof(str);
	char *s;

	s = malloc(length * sizeof(char));
	if (str == NULL || s == NULL)
		return (NULL);

	while (i <= length)
	{
		s[i] = str[i];
		i++;
	}

	return (s);
}
