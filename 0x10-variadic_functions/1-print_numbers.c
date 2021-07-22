#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that print numbers, followed by a new line.
 *
 * @separator: pointer to constant separator
 * @n: start of input variables
 *
 * Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int index = 0;

	/* initialize the argument list from the start */
	va_start(ap, n);

	/* if separator is present */
	if (separator)
	{
		/* iterate through each argument*/
		while (index < n)
		{
			/* print next argument */
			printf("%d", va_arg(ap, int));
			/* print separator only between arguments */
			if (index != n - 1)
				printf("%s", separator);
			index++;
		}
		/*clean up*/
		va_end(ap);
		printf("\n");
	}
}
