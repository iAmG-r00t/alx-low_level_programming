# 0x0D. C - Preprocessor

## Resource

- [Understanding C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA)
- [Object-like Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Object-like-Macros.html#Object-like-Macros)
- [Macro Arguments](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Macro-Arguments.html#Macro-Arguments)
- [Pre Processor Directives in C](https://www.youtube.com/watch?v=X6HiYbY3Uak)
- [The C Preprocessor](https://www.cprogramming.com/tutorial/cpreprocessor.html)
- [Standard Predefined Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Standard-Predefined-Macros.html#Standard-Predefined-Macros)
- [Include Guard](https://en.wikipedia.org/wiki/Include_guard)
- [Common Predefined Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Common-Predefined-Macros.html#Common-Predefined-Macros)

## Tasks

0. [Object-like Macro](./0-object_like_macro.h) : A header file that defines a macro named `SIZE` as an abbreviation for the token `1024`.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a`
1. [Pi](./1-pi.h) : A header file that defines a macro named `PI` as an abbreviation for the token `3.14159265359`.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c -o b`
2. [File name](./2-main.c) : A program that prints the name of the file it was compiled from, followed by a new line.
	- You are allowed to use the standard library.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c -o cc`
	- Then you can try and create a copy of `2-main` to `02-main.c` then recompile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 02-main.c -o cc`
3. [Function-like macro](./3-function_like_macro.h) : A function-like macro `ABS(x)` that computes the absolute value of a number `x`.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d`
4. [SUM](./4-sum.h) : A function-like macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c -o e`
