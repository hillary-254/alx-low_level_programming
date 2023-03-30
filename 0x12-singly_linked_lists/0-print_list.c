#include <stdio.h>
#include "list.h"

/**
 * print_list - prints all the elements of a list_t list
 *@h: points to the head of the linked list
 * Return: sizeof the node
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		counter++;
	}

	return (counter);
}
