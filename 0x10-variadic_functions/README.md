# 0x10. C - Variadic functions 

## Resource

- [stdarg.h](https://en.wikipedia.org/wiki/Stdarg.h)
- [Variadic Functions](https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html)
- [Const Keyword](https://www.youtube.com/watch?v=1W4oyuOdXv8)

## Tasks

- All `*-main.c` files will be located in the [main](./main) directory.

0. [Beauty is variable, ugliness is constant](./0-sum_them_all.c) : A function that returns the sum of all its parameters.
	- Prototype: `int sum_them_all(const unsigned int n, ...);`
	- If `n == 0`, return `0`.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/0-main.c 0-sum_them_all.c -o a`
1. [To be is to be the value of a variable](./1-print_numbers.c) : A function that prints numbers, followed by a new line.
	- Prototype: `void print_numbers(const char *separator, const unsigned int n, ...);`
	- Where `separator` is the string to be printed between numbers.
	- and `n` is the number of integers passed to the function.
	- You are allowed to use `printf`
	- If `separator` is `NULL`, don't print it.
	- Print a new line at the end of your function.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/1-main.c 1-print_numbers.c -o b`
2. [One woman's constant is another woman's variable](./2-print_strings.c) : A function that prints strings, followed by a new line.
	- Prototype: `void print_strings(const char *separator, const unsigned int n, ...);`
	- Where `separator` is the string to be printed between the strings.
	- and `n` is the number of strings passed to the function.
	- You are allowed to use `printf`
	- If `separator` is `NULL`, don't print it.
	- If one of the string is `NULL`, print `(nil)` instead.
	- Print a new line at the end of your function.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/2-main.c 2-print_strings.c -o c`
3. [To be is a to be the value of a variable](./3-print_all.c) : A function that prints anything.
	- Prototype: `void print_all(const char * const format, ...);`
	- Where `format` is a list of types of arguments passed to the function.
		- `c` : `char`
		- `i` : `integer`
		- `f` : `float`
		- `s` : `char *` (if the string is NULL, print `(nil)` instead
		- Any other command should be ignored.
	- You are not allowed to use `for`, `goto`, ternary operator, `else`, `do .. while`
	- You can use a maximum of
		- 2 `while` loops
		- 2 `if`
	- You can declare a maximum of `9` variables.
	- You are allowed to use `printf`
	- Print a new line at the end of your function.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/3-main.c 3-print_all.c -o d`
4. [Real programmers can write assembly code in any language](./100-hello_holberton.asm) : Write a 64-bit program in asembly that prints `Hello, Holberton`, followed by a new line.
	- You are only allowed to use the system call `write` (use `int` or `syscall`, not a call)
	- Your program will be compiled using `nasm` and `gcc` (as follows) : `nasm -f elf64 100-hello_holberton.asm && gcc -no-pie -std=gnu89 100-hello_holberton.o -o hello`
