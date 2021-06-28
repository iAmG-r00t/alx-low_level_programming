# 0x05. C - Pointers, arrays and strings.

## Resources

- [Pointers, arrays and Data Structures](https://www.notion.so/C-Programming-f13cdb9661db464f8ea326c5a2654e8e)
- [C - Arrays](https://www.tutorialspoint.com/cprogramming/c_arrays.htm)
- [C - Pointers](https://www.tutorialspoint.com/cprogramming/c_pointers.htm)
- [C - Strings](https://www.tutorialspoint.com/cprogramming/c_strings.htm)
- C [Books and PDF's](../references) to check out and use as reference.

## Tasks

0. [98 Battery st.](./0-reset_to_98.c) : A C function program that takes a pointer to an `int` as parameter and updates the value it points to to `98`.
	- Prototype: `void reset_to_98(int *n);`
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98`
1. [Don't swap horses in crossing a stream](./1-swap.c) : A C function program that swaps the values of two integers.
	- Prototype: `void swap_int(int *a, int *b);`
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-swap.c -o 1-swap`
2. [This report, by its very length, defends itself against the risk of being read](./2-strlen.c) : A C function program that returns the length of a string.
	- Prototype: `int _strlen(char *s);`
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strlen.c -o 2-strlen`
