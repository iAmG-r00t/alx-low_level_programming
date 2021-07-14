# 0x0B. C - malloc, free 

## Resource

- [Dynamic Memory Allocation in C using malloc(), calloc(), free() and realloc()](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/).
- [Dynamic memory allocation in C - malloc calloc realloc free](https://www.youtube.com/watch?v=xDVC3wKjS64).
- [Dynamic Memory Allocation](../dynamic_memory_alloc).
	- [Quick overview of malloc & free](../references/DynamicMemoryAllocation.pdf)

## Tasks
0. [Float like a butterfly, sting like a bee](./0-create_array.c)
	- Prototype: `char *create_array(unsigned int size, char c);`
	- Returns `NULL` if size = `0`.
	- Returns a pointer to the array, or `NULL` if it fails.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-create_array.c -o a`
1. [The woman who has no imagination has no wings](./1-strdup.c)
	- Prototype: `char *_strdup(char *str);`
	- The `_strdup()`  function returns a pointer to a new string which is a duplicate of the string `str`.
		- Memory for the new string is obtained with `malloc`, and can be freed with `free`.
	- Returns `NULL` if str = NULL.
	- On success, the `_strdup`  function returns a pointer to the duplicated string. It returns `NULL` if insufficient memory was available.
	- **FYI:** The standard library provides a similar function: `strdup`. Run `man strdup` to learn more.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strdup.c -o s`
2. [He who is not courageous enough to take risks will accomplish nothing in life](./2-str_concat.c) : A function that concatenates two strings.
	- Prototype: `char *str_concat(char *s1, char *s2);`
	- The returned pointer should point to a newly allocated space in memory which contains the contents of `s1`, followed by the contents of `s2`, and null terminated.
	- If `NULL` is passed, treat it as an empty string.
	- The function should return `NULL` on faliure.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-str_concat.c -o c`
