#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a
 * doubly linked list.
 * @h: A double pointer to the head of the doubly linked list.
 * @idx: The index at which the new node should be inserted.
 * @n: The value to be stored in the new node.
 * Return: The address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *curr = *h;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (curr != NULL && i < idx - 1)
	{
		curr = curr->next;
		i++;
	}

	if (curr == NULL)
		return (NULL);

	if (curr->next == NULL)
		return (add_dnodeint_end(h, n));

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = curr;
	newNode->next = curr->next;
	curr->next->prev = newNode;
	curr->next = newNode;

	return (newNode);
}
