# 0x13. C - More singly linked lists

## Resource

- Read about [data structures](https://www.notion.so/C-Programming-f13cdb9661db464f8ea326c5a2654e8e) first.
- [Linked Lists](https://www.youtube.com/watch?v=udapt4FGY20&t=130s) 2008 UNSW Lecture.
- [Linked Lists](https://www.youtube.com/playlist?list=PLIsXzR_wZY-xQSwyG_PAQHJtyo4o9WWXd) Youtube Playlist I created.

---

- All the `*-main.c` files will be stored in the [main](./main) directory.

- Use this data structure.
	```c
	/**
	 * struct listint_s - singly linked list
	 * @n: integer
	 * @next: points to the next node
	 *
	 * Description: singly linked list node structure
	 * 
	 */
	typedef struct listint_s
	{
		int n;
		struct listint_s *next;
	} listint_t;
	```

## Tasks

0. [Print list](./0-print_listint.c) : A function that prints all the elements of a `listint_t` list.
	- Prototype: `size_t print_listint(const listint_t *h);`
	- Return: the number of nodes.
	- Format: see example.
	- You are allowed to use `printf`
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/0-main.c 0-print_listint.c -o a`
1. [List length](./1-listint_len.c) : A function that returns the number of elements in a linked `listint_t` list.
	- Prototype: `size_t listint_len(const listint_t *h);`
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/1-main.c 1-listint_len.c -o b`
