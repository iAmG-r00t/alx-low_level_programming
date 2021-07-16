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
	int c;

	for (c = 0; src[c];)
	{
		dest[c] = src[c];
		c++;
	}

	return (dest);
}
