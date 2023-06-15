#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a double linked list
 * @h: The double linked list to print
 * Return: The number of nodes in the double linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	int counter = 0;

	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		++counter;
		curr = curr->next;
	}
	return (counter);
}
