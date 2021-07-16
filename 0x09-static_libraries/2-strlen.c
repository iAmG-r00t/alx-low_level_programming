/**
 * _strlen - count the length of string
 *
 * @s: pointer to char that takes string input
 *
 * Return: string length
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0';)
		i++;
	return (i);
}
