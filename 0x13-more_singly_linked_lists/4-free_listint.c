#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the first node
 * Return: none
 */

void free_listint(listint_t *head)
{
	listint_t *node_n, *curr_node;

	curr_node = head;
	while (curr_node != NULL)
	{
		node_n = curr_node->next;
		free(curr_node);
		curr_node = node_n;
	}
}
