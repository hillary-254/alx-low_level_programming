#include "lists.h"
#include <stddef.h>

/**
 * *reverse_listint -  reverses a listint_t linked list
 * @head: pointer to a pointer to the first node of the list
 * Return: the pointer to the head/first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_n, *curr_n = NULL;

	/*checks if the list is empty or has only one node*/
	if ((*head)->next == NULL || head == NULL)
		return (*head);

	/*while node does not point to null, we reverse through while loop*/
	while (*head != NULL)
	{
		curr_n = (*head)->next;
		(*head)->next = prev_n;
		prev_n = *head;
		*head = curr_n;
	}

	*head = curr_n;

	return (*head);
}
