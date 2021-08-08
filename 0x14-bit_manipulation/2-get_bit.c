#include "main.h"

#define CHAR_BITS 8 /*size of char*/
#define INT_BITS (sizeof(unsigned long int) * CHAR_BITS)

/**
 * print_bin - prints binary rep of @n
 *
 * @number: decimal value
 *
 * Return: nothing
*/
void print_bin(unsigned long int number)
{
	if (number >> 1)
		print_bin(number >> 1);

	putc((number & 1) ? '1' : '0', stdout);
}


/**
 * get_bit - gets a bit at a given index
 *
 * @n: decimal value
 * @index: integer value of bit position
 *        to get from @n
 *
 * Return: the value of the bit or -1 if an
 *          error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	/*if index is greater than size of n in binary coded decimal*/
	if (index > INT_BITS)
		return (-1);

	#ifdef DEBUG
	printf("\n[%ld >> %d] is %ld.\n", n, index, (n >> index));
	printf("%ld in binary: ", n);
	print_bin(n);
	printf("\n[%ld >> %d] in binary: ", n, index);
	print_bin(n >> index);
	printf(" <- last bit is bit at index %d\n\n", index);
	#endif

	bit = ((n >> index) & 1); /*shift n right by index and with 1 to find bit*/

	return (bit);
}
