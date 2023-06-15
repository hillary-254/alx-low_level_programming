#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the desired node, starting from 0.
 * Return: Pointer to the nth node, or NULL if it doesn't exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *curr = head;

	while (curr != NULL && counter < index)
	{
		curr = curr->next;
		counter++;
	}

	return (curr);
}
