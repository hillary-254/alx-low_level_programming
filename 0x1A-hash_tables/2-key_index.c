#include "hash_tables.h"

/**
 * key_index - Returns the index of a key in the hash table array
 * @key: The key to be hashed
 * @size: The size of the array
 * Return: The index at which the key should be stored in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashValue;
	unsigned long int index;

	hashValue = hash_djb2(key);
	index = hashValue % size;

	return (index);
}
