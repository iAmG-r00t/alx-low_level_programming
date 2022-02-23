/**
 * _isdigit - checks if input is digit between 0 - 9
 *
 * @c: input
 *
 * Return: 1 if is digit, 0 if not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
