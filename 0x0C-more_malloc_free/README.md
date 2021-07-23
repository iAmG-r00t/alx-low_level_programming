# 0x0C. C - More malloc, free 

## Resource

- [Do I cast the result of malloc](https://stackoverflow.com/questions/605845/do-i-cast-the-result-of-malloc)
- Read this [post](https://www.notion.so/C-Programming-f13cdb9661db464f8ea326c5a2654e8e) `malloc and free` it's from the concept page.

## Tasks

0. [Trust no one](./0-malloc_checked.c) : A function that allocates memory using `malloc`.
	- Prototype: `void *malloc_checked(unsigned int b);`
	- Returns a pointer to the allocated memory.
	- If `malloc` fails, the `malloc_checked` function should  cause normal process termination with a status value of `98`.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-malloc_checked.c -o a`
1. [string\_nconcat](./1-string_nconcat.c) : A function that concatenates two strings.
	- Prototype: `char *string_nconcat(char *s1, char *s2, unsigned int n);`
	- The returned pointer shall point to a newly allocated space in memory, which contains `s1`, followed by the first `n` bytes of `s2`, and null terminated.
	- If the function fails, it should return `NULL`.
	- If `n` is greater or equal to the length of `s2` then use the entire string `s2`.
	- If `NULL` is passed, treat it as an empty string.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-string_nconcat.c -o b`
2. [\_calloc](./2-calloc.c) : A function that allocates memory for an array, using `malloc`.
	- Prototype: `void *_calloc(unsigned int nmemb, unsigned int size);`
	- The `_calloc` function allocates memory for an array of `nmemb` elements of `size` bytes each and returns a pointer to the allocated memory.
	- The memory is set to zero.
	- If `nmemb` or `size` is `0`, then `_calloc` returns `NULL`.
	- If `malloc` fails, then `_calloc` returns `NULL`.
	- **FYI:** The standard library provides a different function: `calloc`. Run `man calloc` to learn more.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-calloc.c -o c`
3. [array\_range](./3-array_range.c) : A function that creates an array of integers.
	- Prototype: `int *array_range(int min, int max);`
	- The array created should contain all the values from `min` (included) to `max` (included), ordered from `min` to `max`.
	- Return: the pointer to the newly created array.
	- If `min` > `max`, return `NULL`
	- If `malloc` fails, return `NULL`
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-array_range.c -o d`
4. [\_realloc](./100-realloc.c) : A function that reallocates a memory block using `malloc` and `free`.
	- Prototype: `void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);`
	- Where `ptr` is a pointer to the memory previously allocated with a call to `malloc`: `malloc(old_size)`.
	- `old_size` is the size, in bytes, of the allocated space for `ptr`.
	- and `new_size` is the new size, in bytes of the new memory block.
	- The contents will be copied to the newly allocated space, in the range from the start of `ptr` up to the minimum of the old and new sizes.
	- If `new_size` > `old_size`, the "added" memory should not be initialized.
	- If `new_size` == `old_size` do not do anything and return `ptr`.
	- If `ptr` is `NULL`, then call is equivalent to `malloc(new_size)`, for all values of `old_size` and `new_size`.
	- If `new_size` is equal to zero, and `ptr` is not `NULL`, then the call is equivalent to `free(ptr)`. Return `NULL`.
	- Don't forget to free `ptr` when it makes sense.
	- **FYI:** The standard library provides a different function: `realloc`. Run `man realloc` to learn more.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-realloc.c -o e`
5. [We must accept finite disappointment, but never lose infinite hope](./101-mul.c) : A program that multiplies two positive numbers.
	- Usage: `mul num1 num2`
	- `num1` and `num2` will be passed in base 10.
	- Print the result, followed by a new line.
	- If the number of arguments is incorrect, print `Error`, followed by a new line, and exit with a status of `98`.
	- `num1` and `num2` should only be composed of digits. If not, print `Error`, followed by a new line, and exit with a status of `98`.
	- You are allowed to use more that 5 functions in your file.
	- You can use `bc` (`man bc`) to check your results.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-mul.c _putchar.c -o mul`
