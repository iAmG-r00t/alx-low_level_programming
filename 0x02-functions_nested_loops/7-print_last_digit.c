#include"holberton.h"

/**
 * print_last_digit - print last digit of a number.
 *
 * @i: takes number input
 *
 * Return: Always 0 (Success)
*/

int print_last_digit(int i)
{
	int ld;

	/**
	 * first we check if the number is
	 * a negative value and if it is
	 * we will multiply the remainder
	 * with -1 to change it to a + value
	 * else if its not a negative value
	 * we just get the reminder
	*/
	if (i < 0)
		ld = -1 * (i % 10);
	else
		ld = i % 10;

	/**
	 * we have to output each character because
	 * if we don't it will only return the last digit
	 * of the number that was checked but not all the numbers
	*/
	_putchar(ld + '0');
	return (ld);
}
