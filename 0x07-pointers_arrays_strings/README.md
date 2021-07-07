# 0x05. C - Pointers, arrays and strings.

## Resources

- [Pointers, arrays and Data Structures](https://www.notion.so/C-Programming-f13cdb9661db464f8ea326c5a2654e8e)
- [C - Pointer to Pointer](https://www.tutorialspoint.com/cprogramming/c_pointer_to_pointer.htm)
- [C - Pointer to Pointer with Example](https://beginnersbook.com/2014/01/c-pointer-to-pointer/)
- [C - Multidimensional Arrays in C](https://www.tutorialspoint.com/cprogramming/c_multi_dimensional_arrays.htm)
- [Two dimensional (2D) arrays in C programming with example](https://beginnersbook.com/2014/01/2d-arrays-in-c-example/)
- C [Books and PDF's](../references) to check out and use as reference.

## Tasks

0. [memset](./0-memset.c) : A function that fills memory with a constant byte.
	- Prototype: `char *_memset(char *s, char b, unsigned int n);`
	- The `_memset()` function fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`.
	- Returns a pointer to the memory area `s`.
	- [Read more on memset here](https://www.holbertonschool.com/coding-resource-memset-in-c)
	- **FYI:** The standard library provides a similar function: `memset`. Run `man memset` to learn more.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-memset.c -o 0-memset`
1. [memcpy](./1-memcpy.c) : A function that copies the memory area.
	- Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`
	- The `_memcpy()` function copies `n` bytes from the memory area `src` to the memory area `dest`.
	- Returns a pointer to `dest`
	- **FYI:** The standard library provides a similar function: `memcpy`. Run `man memcpy` to learn more.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-memcpy.c -o 1-memcpy`
