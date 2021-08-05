#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at
 *                           a given position
 *
 * @head: pointer to the first node of the list
 * @idx: is the index of the list where the new node should be added
 * @n: element to add to the new node
 *
 * Return: NULL if anything fails or the address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int index;

	current = *head;

	if (idx != 0) /*if index where to add our new node is not 0*/
	{
		/*iterate list to node at position idx - 1*/
		for (index = 1; index < idx && head != NULL; index++)
			current = current->next;
	}

	if (current == NULL && idx != 0) /*if current node is null and idx is not 0*/
		return (NULL);	/*return NULL if current is NULL*/

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /* add our element to the new node*/

	/*if the index for the new node is 0*/
	if (idx == 0)
	{
		/*first node will be moved to second node*/
		new_node->next = *head;
		/*new node will be placed as the first node*/
		*head = new_node;
	}
	/*if index for the new node is not 0*/
	else
	{
		/*link the new node with the current node at position idx - 1 position*/
		new_node->next = current->next;
		/*set the new node at the idx position*/
		current->next = new_node;
	}

	return (new_node);
}
