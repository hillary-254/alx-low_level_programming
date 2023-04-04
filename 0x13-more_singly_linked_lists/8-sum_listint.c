#include "lists.h"
#include <stddef.h>

/**
 * sum_listint -  sum of all the data (n) of a listint_t linked list
 * @head: pointer to the first node
 * Return: the sum of elements in the linked list
 */

int sum_listint(listint_t *head)
{
	unsigned int sum = 0;
	listint_t *node = head;

	if (node == NULL)
		return (0);

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
