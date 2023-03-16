#include "main.h"

/**
 * *_calloc - allocates memory for an array, using malloc
 *@nmemb: number of members
 *@size: the size
 *Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int x = 0, len = 0;
	char *str;

	if (nmemb == 0 || size == 0)
		return (NULL);

	len = nmemb * size;
	str = malloc(len);

	if (str == NULL)
		return (NULL);

	while (x < len)
	{
		str[x] = 0;
		x++;
	}

	return (str);
}
