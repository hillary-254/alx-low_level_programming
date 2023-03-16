#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 *@ptr: ...
 *@old_size: ...
 *@new_size: ...
 *Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		newptr = malloc(new_size);

		if (newptr == NULL)
			return (NULL);

		return (newptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	newptr = malloc(new_size);

	if (newptr == NULL)
		return (NULL);

	for (x = 0; x < old_size && x < new_size; x++)
	{
		newptr[x] = ((char *) ptr)[x];
	}

	free(ptr);
	return (newptr);
}
