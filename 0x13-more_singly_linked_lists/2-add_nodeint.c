#include "lists.h"
#include <stdlib.h>

/**
 * *add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: a pointer to a pointer to the first node
 * @n: the new integer to be stored on the new node
 *Return: address of the new node and null if empty
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_n;

	if (head == NULL)
		return (NULL);

	node_n = malloc(sizeof(listint_t));

	if (node_n == NULL)
		return (NULL);

	node_n->n = n;
	node_n->next = *head;
	*head = node_n;

	return (node_n);
}
