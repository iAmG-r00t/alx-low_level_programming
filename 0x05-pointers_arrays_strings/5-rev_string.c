/**
 * rev_string - reverse a string
 *
 * @s: string input pointer
 *
 * Return: nothing
*/

void rev_string(char *s)
{
	int c = 0, f, l;
	char temp;

	/*find length of string*/
	while (c >= 0)
	{
		if (s[c] == '\0')
			break;
		c++;
	}

	/*reverse the string by swapping*/
	for (f = 0; f < (c - 1); f++)
	{
		for (l = f + 1; l > 0; l--)
		{
			temp = *(s + l);
			*(s + l) = *(s + (l - 1));
			*(s + (l - 1)) = temp;
		}
	}
}
