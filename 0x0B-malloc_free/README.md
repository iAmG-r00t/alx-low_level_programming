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
3. [If you even dream of beating me you'd better wake up and apologize](./3-alloc_grid.c) : A function that returns a pointer to a 2 dimensional array of integers.
	- Prototype: `int **alloc_grid(int width, int height);`
	- Each element of the grid should be initialized to `0`.
	- The function should return `NULL` on faliure.
	- If `width` or `height` is `0` or negative, return `NULL`.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-alloc_grid.c -o g`
4. [It's not bragging if you can back it up](./4-free_grid.c) : A function that frees a 2 dimensional grid previously created by the [alloc_grid](./3-alloc_grid.c) function.
	- Prototype: `void free_grid(int **grid, int height);`
	- Note that we will first compile the `alloc_grid` file to make sure it compiles.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-alloc_grid.c 4-free_grid.c -o f`
5. [It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe](./100-argstostr.c) : A function that concatenates all the arguments of your program.
	- Prototype: `char *argstostr(int ac, char **av);`
	- Returns `NULL` if `ac == 0` or `av == NULL`
	- Returns a pointer to a new string, or `NULL` if it fails.
	- Each argument should be followed by a `\n` in the new string.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-argstostr.c -o args`
6. [I will show you how great I am](./101-strtow.c) : A function that splits a string into words.
	- Prototype: `char **strtow(char *str);`
	- The function returns a pointer to an array of strings (words).
	- Each element of this array should contain a single word, null-terminated.
	- The last element of the returned array should be `NULL`.
	- Words are separated by spaces.
	- Returns `NULL` if `str == NULL` or `str == ""`.
	- If your function fails, it should return `NULL`.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-main.c 101-strtow.c -o strtow`
