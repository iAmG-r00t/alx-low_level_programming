/**
 * _strcpy - a function that copies the string
 *        pointed to by `src` including the null byte
 *        to the buffer pointed to by `dest`
 *
 * @dest: pointer to char
 * @src: pointer to char
 *
 * Return: pointer to @dest
*/

char *_strcpy(char *dest, char *src)
{
	int c, i;

	for (c = 0; src[c] >= 0;)
	{
		if (src[c] == '\0')
			break;
		c++;
	}

	for (i = 0; i < c; i++)
		dest[i] = src [i];

	return (dest);
}
