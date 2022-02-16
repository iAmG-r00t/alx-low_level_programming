#include"main.h"

/**
 * main - Entry point
 *
 * Description: Prints the sum of even-valued
 *		Fibonacci sequence starting
 *		with 1 and 2 whose values do
 *		not exceed 4million
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, sum;
	float total_sum;

	while (1)
	{
		sum = fib1 + fib2;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total_sum += sum;

		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", total_sum);

	return (0);
}
