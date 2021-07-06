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

	for (c = 0; src[c] >= 0;)
	{
		dest[c] = src[c];
		/**
		 * end for loop once you have
		 * reached at the null byte
		*/
		if (src[c] == '\0')
			break;
		c++;
	}

	return (dest);
}
