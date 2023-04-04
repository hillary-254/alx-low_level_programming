#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *insert_nodeint_at_index -  inserts a new node at a given position
 * @head: a pointer to a pointer to the first node of the list
 * @idx: this is the specific index the new node is to be added
 * @n: the data value to be added to the new node
 * Return: pointer to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *new_n, *prev_n, *curr_n;

	/*checks if the list is empty*/
	if (head == NULL)
		return (NULL);
	/*assigns a memory space to the new node*/
	new_n = malloc(sizeof(listint_t));
	/*checks if memory has been allocated to new node otherwise, NULL*/
	if (new_n == NULL)
		return (NULL);
	/*assigns the value of n to the new node variable n*/
	new_n->n = n;
	/*inserts node at the beginning if idx = 0*/
	if (idx == 0)
	{
		new_n->next = *head;
		*head = new_n;
		return (new_n);
	}
	/*initializes the two pointers pointing to head and next respectively*/
	prev_n = *head;
	curr_n = (*head)->next;
	/*for loop to traverse through the loop*/
	for (count = 1; count < idx && curr_n != NULL; count++)
	{
		prev_n = curr_n;
		curr_n = curr_n->next;
	}
	/*if index is out of range/loop reaches end without desired position*/
	if (count < idx || curr_n == NULL)
		return (NULL);
	/*assigns the new node to the desired position*/
	prev_n->next = new_n;
	new_n->next = curr_n;
	return (new_n);
}
