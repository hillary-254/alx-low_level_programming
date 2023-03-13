#include "main.h"

/**
 * *create_array - creates an array of chars, initializes it with specific char
 *@size: this will indicate the size of the array
 *@c: the characters to be passed to the newly created array
 *Return: char type
 */

char *create_array(unsigned int size, char c)
{
	int x;
	char *arr;

	arr = (char *) malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		arr[x] = c;
	}

	return (arr);
}
