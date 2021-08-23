#include <stdio.h>

/**
 * func - a function that takes an address of a local
 *        variable from the main program and checks
 *        if it's below or after the address of a local
 *        variable in this function.
 *
 * @func_var;
 *
 * Return: nothing
*/
void func(int *main_var_addr)
{
	int func_var;

	if (main_var_addr < &func_var)
	{
		printf("The stack grows upward.\n");
		printf("	main_var addr is below func_var\n");
	}
	else
	{
		printf("The stack grows downward.\n");
		printf("	func_var is below main_var\n");
	}
}

/**
 * main - entry point
 *
 * Description: A program that checks if the stack grows downward or upward
 *             it checks if the main function is called first or if the code
 *             is executed as written whereby if it starts with the functions
 *
 * Return: 0 (success)
*/
int main(void)
{
	int main_var;

	func(&main_var);
	return (0);
}
