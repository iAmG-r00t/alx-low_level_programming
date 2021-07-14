#include <stdio.h>
#include <stdlib.h>

/**
 * print_int_array - prints array of integer type
 *
 * @a: array pointer to input array
 * @size: size of input array
 *
 * Return: nothing
*/

void print_int_array(int *a, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("%d\n", a[i]);
		i++;
	}
}

/**
 * main - take one number as argument
 *
 * @ac: holds number of arguments passed (argc)
 * @av: holds the arguments passed (argv[])
 *
 * Return: Always 0 (Success)
*/

int main(int ac, char **av)
{
	int *a, asize, i;

	if (ac < 2)
	{
		printf("Please give me at least one number\n");
		printf("Usage: %s number [NUMBER]\n", av[0]);
		return (1);
	}
	asize = ac - 1;
	a = malloc(asize * sizeof(int));
	i = 0;
	while (i < asize)
	{
		a[i] = atoi(av[i + 1]);
		i++;
	}
	print_int_array(a, asize);
	free(a);
	print_int_array(a, asize);
	return (0);
}
