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

	/*calculate size of str*/
	while (str[i] != '\0')
		i++;
	length = i;

	s = malloc(length * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	else if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (i < length)
		{
			s[i] = str[i];
			i++;
		}
	}
	return (s);
}
