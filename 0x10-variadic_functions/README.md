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
