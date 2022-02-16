#include"main.h"

/**
 * main - Entry point
 *
 * Description: prints the first 98 Fibonacci numbers
 *	starting with 1 and 2 followed by a new line
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int count;
	unsigned long fib1 = 1, fib2 = 2, sum;
	unsigned long fib1_hlf1, fib1_hlf2, fib2_hlf1, fib2_hlf2;
	unsigned long half1, half2;

	printf("%lu, %lu, ", fib1, fib2);

	for (count = 1; count < 92; ++count)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);

		fib1 = fib2;
		fib2 = sum;
	}

	fib1_hlf1 = fib1 / 10000000000;
	fib2_hlf1 = fib2 / 10000000000;
	fib1_hlf2 = fib1 % 10000000000;
	fib2_hlf2 = fib2 % 10000000000;

	for (count = 93; count < 99; ++count)
	{
		half1 = fib1_hlf1 + fib2_hlf1;
		half2 = fib1_hlf2 + fib2_hlf2;
		
		if (fib1_hlf2 + fib2_hlf2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);

		if (count != 98)
			printf(", ");

		fib1_hlf1 = fib2_hlf1;
		fib1_hlf2 = fib2_hlf2;
		fib2_hlf1 = half1;
		fib2_hlf2 = half2;
	}
	printf("\n");

	return (0);
}
