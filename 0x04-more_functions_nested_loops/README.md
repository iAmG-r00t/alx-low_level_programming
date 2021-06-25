# 0x04. C - More functions, more nested loops

## Resources

- [Nested while loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss)                            
- [C - Functions](https://www.tutorialspoint.com/cprogramming/c_functions.htm)                 
- [What is the purpose of a function prototype?](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/)
- [C - Header Files](https://www.tutorialspoint.com/cprogramming/c_header_files.htm)           
- C [Books and PDF's](../references) to check out and use as reference.

## Tasks

- Continuation of project [0x03](../0x02-functions_nested_loops).

0. [isupper](./0-isupper.c) : A C program function that checks for uppercase character.
	- Prototype: `int _isupper(int c);`
	- Returns `1` if `c` is uppercase.
	- Returns `0` otherwise.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-isupper.c -o 0-isuper`
1. [isdigit](./1-isdigit.c) : A C program function that checks for a digit(`0` through `9`).
	- Prototype: `int _isdigit(int c);`
	- Returns `1` if `c` is a digit.
	- Returns `0` otherwise.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-isdigit.c -o 1-isdigit`
2. [Collaboration is multiplication](./2-mul.c) : A C program that multiplies two integers.
	- Prototype: `int mul(int a, int b);`
	- Compule the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-mul.c -o 2-mul`
