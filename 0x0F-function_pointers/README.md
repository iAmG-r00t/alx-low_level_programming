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
