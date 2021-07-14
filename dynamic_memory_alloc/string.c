#include <stdio.h>
#include <stdlib.h>

/**
 * create_string - a function that creates a string
 *                 from a given character @c of length @len
 *
 * @len: length of string to create
 * @c: character string to create
 *
 * Return: array of character @c string
 *         of length @len + 1
*/

char *create_string(int len, char c)
{
	char *s;
	int i;

	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}

/**
 * main - print created string
 * Return: Always 0 (success)
*/

int main(void)
{
	char *s;

	s = create_string(5, 'H');
	printf("%s\n", s);
	return (0);
}
