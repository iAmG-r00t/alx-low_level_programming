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
2. [Add node](./2-add_nodeint.c) : A function that adds a new node at the beginning of a `listint_t` list.
	- Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`
	- Return: the address of the new element, or `NULL` if it failed.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/2-main.c 2-add_nodeint.c 0-print_listint.c -o c`
3. [Add node at the end](./3-add_nodeint_end.c) : A function that adds a new node at the end of a `listint_t` list.
	- Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`
	- Return: the address of the new element, or `NULL` if it failed.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/3-main.c 3-add_nodeint_end.c 0-print_listint.c -o d`
4. [Free list](./4-free_listint.c) : A function that frees a `listint_t` list.
	- Prototype: `void free_listint(listint_t *head);`
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/4-main.c 3-add_nodeint_end.c 0-print_listint.c 4-free_listint.c -o e`
