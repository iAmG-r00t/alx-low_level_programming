#include"holberton.h"

/**
 * _abs - function that computes the absolute
 *       value of an integer
 *
 * @i: take input valaues for the function
 *
 * Return: Always 0 (Success)
*/

int _abs(int i)
{
	/**
	 * if int value is a negative
	 * multiply by -1 to get a positive value
	*/
	if (i < 0)
		i = (-1) * i;

	return (i);

}
