#include "lists.h"
#include <stdlib.h>

/**
 * *add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to pointer to the first node
 * @n: the new element to be added to the new node
 * Return: address of the new element or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_n, *node_l;

	node_n = malloc(sizeof(listint_t));

	if (node_n == NULL)
		return (NULL);

	node_n->n = n;
	node_n->next = NULL;

	if (*head == NULL)
	{
		*head = node_n;
	}
	else
	{
		node_l = *head;
		while (node_l->next != NULL)
		{
			node_l = node_l->next;
		}

		node_l->next = node_n;
	}

	return (node_n);
}
