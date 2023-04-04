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
	if ((*head)->next == NULL || *head == NULL)
		return (*head);

	prev_n = *head;
	curr_n = (*head)->next;
	prev_n->next = NULL;

	/*while node does not point to null, we reverse through while loop*/
	while (curr_n != NULL)
	{
		*head = curr_n;
		curr_n = curr_n->next;
		(*head)->next = prev_n;
		prev_n = *head;
	}

	return (*head);
}
