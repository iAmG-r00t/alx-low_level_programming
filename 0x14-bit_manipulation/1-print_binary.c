#include "main.h"

/**
 * _length - find the length of @n
 *
 * @n: value to find its length
 *
 * Return: length
*/
int _length(unsigned long int n)
{
	int length = 0;

	while (n > 0)
	{
		length++;
		n >>= 1; /*shift n to the right by 1*/
	}

	length--;

	return (length);
}

/**
 * print_binary - a function that converts a decimal to binary
 *
 * @n: decimal number to convert
 *
 * Return: nothing
*/
void print_binary(unsigned long int n)
{
	int length;
	unsigned long int mask = 1;

	length = _length(n);

	if (length > 0) /*create mask based on length of number*/
		mask <<= length; /*shift mask to the left by length*/

	while (mask > 0)
	{
		if (n & mask) /*if n & mask == 1 print 1*/
			_putchar('1');
		else /*else if n & mask == 0 print 0*/
			_putchar('0');

		mask >>= 1; /*shift mask to the right by 1*/
	}
}
