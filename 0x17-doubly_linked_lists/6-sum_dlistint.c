#include "lists.h"

/**
 * sum_dlistint - Calculates the sum of all values in a doubly linked list.
 * @head: Pointer to the head of the list.
 * Return: The sum of all the data values.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
