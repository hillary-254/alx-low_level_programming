#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates an element in the hash table
 * @ht: The hash table
 * @key: The key to be added or updated
 * @value: The value associated with the key
 * Return: 1 if success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newNode, *tempNode;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	tempNode = ht->array[index];
	while (tempNode != NULL)
	{
		if (strcmp(tempNode->key, key) == 0)
		{
			free(tempNode->value);
			tempNode->value = strdup(value);
			if (tempNode->value == NULL)
				return (0);
			return (1);
		}
		tempNode = tempNode->next;
	}

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);

	newNode->key = strdup(key);
	newNode->value = strdup(value);
	if (newNode->key == NULL || newNode->value == NULL)
	{
		free(newNode->key);
		free(newNode->value);
		free(newNode);
		return (0);
	}

	newNode->next = ht->array[index];
	ht->array[index] = newNode;

	return (1);
}
