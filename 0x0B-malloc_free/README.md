# 0x0B. C - malloc, free 

## Resource

- [Dynamic Memory Allocation in C using malloc(), calloc(), free() and realloc()](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/).
- [Dynamic memory allocation in C - malloc calloc realloc free](https://www.youtube.com/watch?v=xDVC3wKjS64).
- [Dynamic Memory Allocation](./dynamic_memory_alloc).
	- [Quick overview of malloc & free](../references/DynamicMemoryAllocation.pdf)

## Tasks
0. [Float like a butterfly, sting like a bee](./0-create_array.c)
	- Prototype: `char *create_array(unsigned int size, char c);`
	- Returns `NULL` if size = `0`.
	- Returns a pointer to the array, or `NULL` if it fails.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-create_array.c -o a`
