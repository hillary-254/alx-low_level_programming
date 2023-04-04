#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * delete_nodeint_at_index - deletes node at index of a listint_t linked list
 * @head: pointer to a pointer of the first node of the list
 * @index: the location of the node to be deleted
 * Return: 1 if successful -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_n, *curr_n;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	curr_n = *head;
	prev_n = NULL;

	for (count = 0; count < index && curr_n != NULL; count++)
	{
		prev_n = curr_n;
		curr_n = curr_n->next;
	}
	if (curr_n == NULL)
		return (-1);

	if (prev_n == NULL)
		*head = curr_n->next;
	else
		prev_n->next = curr_n->next;

	free(curr_n);

	return (1);
}
