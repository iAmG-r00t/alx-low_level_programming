/**
 * _strcat - function that concatenates
 *          two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	/*find the size of dest array*/
	while (c >= 0)
	{
		if (dest[c] == '\0')
			break;
		c++;
	}

	/* iterate through each src array value without the null byte*/
	for (c2 = 0; c2 >= 0 && src[c2] != '\0'; )
	{
		/*append src[c2] to dest[c + c2]*/
		dest[c + c2] = src[c2];
		c2++;
	}
	return (dest);
}
