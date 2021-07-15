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
1. [string_nconcat](./1-string_nconcat.c) : A function that concatenates two strings.
	- Prototype: `char *string_nconcat(char *s1, char *s2, unsigned int n);`
	- The returned pointer shall point to a newly allocated space in memory, which contains `s1`, followed by the first `n` bytes of `s2`, and null terminated.
	- If the function fails, it should return `NULL`.
	- If `n` is greater or equal to the length of `s2` then use the entire string `s2`.
	- If `NULL` is passed, treat it as an empty string.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-string_nconcat.c -o b`
