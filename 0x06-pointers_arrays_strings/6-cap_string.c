/**
 * cap_string - a function that capitalizes
 *              all words of a string
 *
 * @s: pointer to char input array
 *
 * Return: @s
*/

char *cap_string(char *s)
{
	int i = 0;

	/*iterate through our array values*/
	while (s[i] != '\0')
	{
		/*check for any lowercase letters*/
		if (s[i] >= 97 && s[i] <= 122)
		{
			/**
			 * if we have a null character
			 * change its value to capital
			*/
			if (i == 0)
			{
				s[i] -= 32;
			}
			/**
			 * if we find any character matching the below before any small
			 * letter we change that value to a capital letter.
			*/
			if (s[i - 1] == 32 || s[i - 1] == 9 || s[i - 1] == 10 ||
				s[i - 1] == 44 || s[i - 1] == 59 || s[i - 1] == 46 ||
				s[i - 1] == 33 || s[i - 1] == 63 || s[i - 1] == 34 ||
				s[i - 1] == 40 || s[i - 1] == 41 || s[i - 1] == 123 ||
				s[i - 1] == 124)
			{
				s[i] -= 32;
			}
		}
		i++;
	}
	return (s);
}
