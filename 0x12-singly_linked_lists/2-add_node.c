#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *add_node - adds a new node at the beginning of a list_t list.
 *@head: pointer to a pointer to the first node
 *@str: string to be added
 *Return: the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node_new;

	node_new = malloc(sizeof(list_t));
	if (node_new == NULL)
		return (NULL);

	node_new->str = strdup(str);
	if (node_new->str == NULL)
	{
		free(node_new);
		return (NULL);
	}
	node_new->len = strlen(str);
	node_new->next = *head;
	*head = node_new;

	return (node_new);
}
