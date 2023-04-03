#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes head node of listint_t and returns head node’s data
 * @head: pointer to a pointer to the first node
 * Return:  head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	int val;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	val = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (val);
}
