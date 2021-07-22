#include "3-calc.h"
#include <stdio.h>
#include <string.h> /*for atoi*/
#include <stdlib.h> /*for exit*/

/**
 * main - Program Entry
 *
 * Description: Program that takes 4 arguments where 2 are
 *              int variables plus an operator to perform
 *              a function between the two numbers
 *
 *              Usage: ./calc num1 operator num2
 *                         |     |       |     |_ argv[3]
 *                         |     |       |_ argv[2]
 *                         |     |_ argv[1]
 *                         |_ argv[0]
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0-on success
*/
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;

	/* Error if arguments are not 4 with the executable */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]); /*if argument is string convert to number*/
	num2 = atoi(argv[3]); /* as stated above */
	operator = argv[2];

	/* Error if operator is not null or a 2d array '\*' */
	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/* Error if user tries to divide / (47) or % (37) by 0*/
	if ((*operator == 47 || *operator == 37) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operator)(num1, num2));

	return (0);
}
