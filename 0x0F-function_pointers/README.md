# 0x0F. C - Function pointers

## Resource

- [Function Pointer in C](https://www.geeksforgeeks.org/function-pointer-in-c/)
- [Pointers to Functions](https://publications.gbdirect.co.uk//c_book/chapter5/function_pointers.html)
- [Function Pointers in C / C++](https://www.youtube.com/watch?v=ynYtgGUNelE)
- [Why pointers to functions?](https://www.youtube.com/watch?v=sxTFSDAZM8s)
- [Everything you need to know about pointers in C](https://boredzo.org/pointers/)

## Tasks

- All `*-main.c` files will be located in the [main](./main) directory, apart from `challenge 3` which is required in this directory for the checker to check for it.

0. [What's my name](./0-print_name.c) : A function that prints a name.
	- Prototype: `void print_name(char *name, void (*f)(char *));`
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/0-main.c 0-print_name.c -o a`
1. [If you spend too much time thinking about a thing, you'll never get it done](1-array_iterator.c) : A function that executes a function given as a parameter on each element of an array.
	- Prototype: `void array_iterator(int *array, size_t size, void (*action)(int));`
	- Where `size` is the size of the array and `action` is a pointer to the function you need to use.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/1-main.c 1-array_iterator.c -o b`
2. [To hell with circumstances; I create opportunities](./2-int_index.c) : A function that searches for an integer.
	- Prototype: `int int_index(int *array, int size, int (*cmp)(int));`
	- Where `size` is the number of elements in the array `array`
	- `cmp` is a pointer to the function to be used to compare values
	- `int_index` returns the index of the first element for which the `cmp` function does not return `0`.
	- If no element matches, return `-1`
	- If size <= `0`, return `-1`
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/2-main.c 2-int_index.c -o c`
3. [A goal is not always meant to be reached, it often serves simply as something to aim at](./3-calc.h) : A function that performs simple operations.
	- You are allowed to use the standard library.
	- Usage: `calc num1 operator num2`
	- You can assume `num1` and `num2` are integers, so use the `atoi` function to convert them from the string input to `int`
	- `operator` is one of the following:
		- `+` : addition
		- `-` : subtraction
		- `*` : multiplication
		- `/` : division
		- `%` : modulo
	- The program prints the results of the operation, followed by a new line
	- You can assume that the result of all operations can be stored in an `int`
	- If the number of arguments is wrong, print `Error`, followed by a new line, and exit with the status `98`
	- If the `operator` is none of the above, print `Error`, followed by a new line, and exit with the status `99`
	- If the  user tries to divide (`/` or `%`) by `0`, print `Error`, followed by a new line, and exit with the status `100`.
	
	&nbsp;
	- This task requires that you create four different files.
	
		- [3-calc.h](./3-calc.h) : This file should contain all the function prototypes and data structures used by the program.
		- You can use this structure:
			```c
			/**
			 * struct op - Struct op
			 *
			 * @op: The operator
			 * @f: The function associated
			*/
			typedef struct op
			{
				char *op;
				int (*f)(int a, int b);
			} op_t;
			```

		&nbsp;
		- [3-op\_functions.c](./3-op_functions.c) : This file should contain the 5 following functions (not more):
			- `op_add` : returns the sum of `a` and `b`. Prototype: `int op_add(int a, int b);`
			- `op_sub` : returns the difference of `a` and `b`. Prototype: `int op_sub(int a, int b);`
			- `op_mul` : returns the product of `a` and `b`. Prototype: `int op_mul(int a, int b);`
			- `op_div` : returns the result of the division of `a` by `b`. Prototype: `int op_div(int a, int b);`
			- `op_mod` : returns the remainder of the division of `a` by `b`. Prototype: `int op_mod(int a, int b);`

		&nbsp;
		- [3-get\_op\_functions.c](./3-get_op_func.c) : This file should contain the function that selects the correct function to perform the operation asked by the user. You’re not allowed to declare any other function.
			- Prototype: `int (*get_op_func(char *s))(int, int);`
			- Where `s` is the operator passed as argument to the program.
			- This function returns a pointer to the function that corresponds to the operator given as a parameter. Example: `get_op_func("+")` should return a pointer to the function `op_add`.
			- You are not allowed to use `switch` statements.
			- You are not allowed to use `for` or `do ... while` loops.
			- You are not allowed to use `goto`
			- You are not allowed to use `else`
			- You are not allowed to use more than one `if` statement in your code.
			- You are not allowed to use more than one `while` loop in your code.
			- if `s` does not match any of the 5 expected operators (`+`, `-`, `*`, `/`, `%`), return `NULL`
			- You are only allowed to use declare these two variables in this function:
				```c
				op_t ops[] = {
					{"+", op_add},
					{"-", op_sub},
					{"*", op_mul},
					{"/", op_div},
					{"%", op_mod},
					{NULL, NULL}
				};
				int i;
				```

		&nbsp;
		- [3-main.c](./3-main.c) : This file should contain your main function only.
			- You are not allowed to code any other function than `main` in this file.
			- You are not allowed to directly call `op_add`, `op_sub`, `op_mul`, `op_div` or `op_mod` from the `main` function.
			- You have to use `atoi` to convert arguments to `int`,
			- You are allowed to use a maximum of 3 `if` statements.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc`
4. [Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker](./100-main_opcodes.c) : A program that prints [opcodes](https://en.wikipedia.org/wiki/Opcode) of its own main function.
	- Usage: `./main number_of_bytes`
	- Output format:
		- The opcodes should be printed in hexadecimal, lowercase.
		- Each opcode is two char long
		- Listing ends with a new line
		- See example:
			```sh
			[...]
			00000000004005f6 <main>:
			4005f6:   55                      push   rbp
			4005f7:   48 89 e5                mov    rbp,rsp
			4005fa:   48 83 ec 30             sub    rsp,0x30
			4005fe:   89 7d dc                mov    DWORD PTR [rbp-0x24],edi
			400601:   48 89 75 d0             mov    QWORD PTR [rbp-0x30],rsi
			400605:   83 7d dc 02             cmp    DWORD PTR [rbp-0x24],0x2
			400609:   74 14                   je     40061f <main+0x29>
			[...]

			# --------------------------------------------------------------- #

			00000000004005f6 55               push rbp                
			00000000004005f7 4889e5           mov rbp, rsp            
			00000000004005fa 4883ec30         sub rsp, 0x30           
			00000000004005fe 897ddc           mov [rbp-0x24], edi     
			0000000000400601 488975d0         mov [rbp-0x30], rsi     
			0000000000400605 837ddc02         cmp dword [rbp-0x24], 0x2
			0000000000400609 7414             jz 0x40061f
			```
	- You are allowed to use `printf` and `atoi`
	- You have to use `atoi` to convert the argument to an `int`
	- If the number of argument is not the correct one, print `Error`, followed by a new line, and exit with the status of `1`
	- If the number of bytes is negative, print `Error`, followed by a new line, and exit with the status of 2.
	- You do not have to compile with any flags.
	- **NOTE:** if you want to translate your opcodes to assembly instructions, you can use, for instance `udcli`.
	- Compile the code this way: `gcc -std=gnu89 100-main_opcodes.c -o main1`
	- Run code this way: `./main1 21`
	- Test case 1: `objdump -d -j.text -M intel main1`
		- Then note the starting address of `<main>`
	- Test case 2: `./main1 21 | udcli -64 -x -o 4005f6`
		- `4005f6` is the starting address of `<main>`
	- **Note 0:** `je` is equivalent to `jz`
	- **Note 1:** Depending on how you write your `main` function, and on which machine you compile your program, the opcodes (and by extension the assembly code) might be different than the above example.
