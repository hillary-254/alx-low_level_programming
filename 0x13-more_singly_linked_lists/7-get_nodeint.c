#include "lists.h"
#include <stddef.h>

/**
 * *get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the first node
 * @index: The index we want it's value returned
 * Return: pointer to the nth node of the linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;
	listint_t *myNode = head;

	for (x = 0; x < index && myNode != NULL; x++)
	{
		myNode = myNode->next;
	}

	return (myNode);
}
