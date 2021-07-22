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
	unsigned int index;

	/* initialize the argument list from the start */
	va_start(ap, n);

	/* iterate through each argument*/
	for (index = 0; index < n; index++)
	{
		/* print next argument */
		printf("%d", va_arg(ap, int));
		/* print separator only between arguments */
		if (separator && index != n - 1)
			printf("%s", separator);
	}
	/*clean up*/
	va_end(ap);
	printf("\n");
}
