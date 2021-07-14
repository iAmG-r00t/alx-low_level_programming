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
	int i = 0, length;
	char *s;

	if (str == NULL)
		return (NULL);

	/*calculate size of str*/
	while (str[i] != '\0')
		i++;

	length = i;

	s = malloc(length * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}

	return (s);
}
