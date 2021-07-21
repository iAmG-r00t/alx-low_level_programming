# 0x0F. C - Function pointers

## Resource

- [Function Pointer in C](https://www.geeksforgeeks.org/function-pointer-in-c/)
- [Pointers to Functions](https://publications.gbdirect.co.uk//c_book/chapter5/function_pointers.html)
- [Function Pointers in C / C++](https://www.youtube.com/watch?v=ynYtgGUNelE)
- [Why pointers to functions?](https://www.youtube.com/watch?v=sxTFSDAZM8s)
- [Everything you need to know about pointers in C](https://boredzo.org/pointers/)

## Tasks

- All `*-main.c` files will be located in the [main](./main) directory.

0. [What's my name](./0-print_name.c) : A function that prints a name.
	- Prototype: `void print_name(char *name, void (*f)(char *));`
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/0-main.c 0-print_name.c -o a`
