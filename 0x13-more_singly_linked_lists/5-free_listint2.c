#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 -  that frees a listint_t list and sets the head to NULL
 * @head: the pointer to the pointer of the first node
 * Return: none
 */

void free_listint2(listint_t **head)
{
	listint_t *curr_node, *next_node;

	if (head == NULL)
		return;

	curr_node = *head;

	while (curr_node != NULL)
	{
		next_node = curr_node->next;
		free(curr_node);
		curr_node = next_node;
	}

	*head = NULL;
}
