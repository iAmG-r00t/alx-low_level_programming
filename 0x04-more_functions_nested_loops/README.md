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
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-mul.c -o 2-mul`
3. [The numbers speak for themselves](./3-print_numbers.c) : A C program that prints the numbers, from `0` to `9`, followed by a new line.
	- Prototype: `void print_numbers(void);`
	- You can only use `_putchar` twice in your code.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-print_numbers.c -o 3-print_numbers`
4. [I believe in numbers and signs](./4-print_most_numbers.c) : A C function program that prints the numbers, from `0` to `9`, followed by a new line.
	- Prototype: `void print_most_numbers(void);`
	- Do not print `2` and `4`.
	- You can only use `_putchar` twice in your code.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_most_numbers.c -o 4-print_most_numbers`
5. [Numbers constitute the only universal language](./5-more_numbers.c) : A C function program that prints 10 times the numbers, from `0` to `14`, followed by a new line.
	- Prototype: `void more_numbers(void);`
	- You can only `_putchar` three times in your code.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-more_numbers.c -o 5-more_numbers`
6. [The shortest distance between two points is a straight line](./6-print_line.c) : A C function program that draws a straight line in the terminal.
	- Prototype: `void print_line(int n);`
	- You can only use `_putchar` function to print.
	- Where `n` is the number of times the character `_` should be printed.
	- The line should end with a `\n`.
	- If `n` is `0` or less, the function should only print `\n`.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-print_line.c -o 6-lines`.
7. [I feel like I am diagonally parked in a parallel universe](./7-print_diagonal.c) :  A C function program that draws a diagonal line on the terminal.
	- Prototype: `void print_diagonal(int n);`
	- You can only use `_putchar` function to print.
	- Where `n` is the number of times the character `\` should be printed.
	- The diagonal should end with a `\n`.
	- If `n` is `0` or less, the function should only print a `\n`.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_diagonal.c -o 7-diagonals`
8. [You are so much sunshine in every square inch](./8-print_square.c) : A C function program that prints a square, followed by a new line.
	- Prototype: `void print_square(int size);`
	- You can only use `_putchar` function to print.
	- Where `size` is the size of the square.
	- If `size` is `0` or less, the function should print only a new line.
	- Use the character `#` to print the square.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-print_square.c -o 8-squares`
