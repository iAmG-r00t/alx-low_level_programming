#ifndef LIST_H
#define LIST_H

#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
*/
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;


size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif /* LIST_H */
