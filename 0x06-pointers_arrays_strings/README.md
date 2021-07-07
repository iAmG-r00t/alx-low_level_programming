# 0x05. C - Pointers, arrays and strings.

## Resources

- Read the resources from the previous project; [0x05. C - Pointers, arrays and strings](../0x05-pointers_arrays_strings#resources).

## Tasks

0. [strcat](./0-strcat.c) : A C function program that concatenates two strings.
	- Prototype: `char *_strcat(char *dest, char *src);`
	- This function appends the src string to the dest string, overwriting the terminating null byte (`\0`) at the end of `dest`, and then adds a terminating null byte.
	- Returns a pointer to the resulting string `dest`.
	- **FYI:** The standard library provides a similar function: `strcat`. Run `man strcat` to learn more.
	- [Read more on strcat here](https://www.holbertonschool.com/coding-resource-strcat-in-c).
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-strcat.c -o 0-strcat`
1. [strncat](./1-strncat.c) : A C function program that concatenates two strings.
	- Prototype: `char *_strncat(char *dest, char *src, int n);`
	- The `_strncat` function is similar to the `_strcat` function, except that
		- it will use at most `n` bytes from `src`; and
		- `src` does not need to be null-terminated if it contains `n` or more bytes
	- Return a pointer to the resulting string `dest`.
	- **FYI:** The standard library provides a similar function: `strncat`. Run `man strncat` to learn more.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strncat.c -o 1-strncat`
2. [strncpy](./2-strncpy.c) : A C function program that copies a string.
	- Prototype: `char *_strncpy(char *dest, char *src, int n);`
	- Your function should work exactly like `strncpy`.
	- **FYI:**  The standard library provides a similar function: `strncpy`. Run `man strncpy` to learn more.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strncpy.c -o 2-strncpy`
3. [strcmp](./3-strcmp.c) : A C function program that compares two strings.
	- Prototype: `int _strcmp(char *s1, char *s2);`
	- Your function should work exactly like `strcmp``.
	- **FYI:** The standard library provides a similar function: `strcmp`. Run `man strcmp` to learn more.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-strcmp.c -o 3-strcmp`
