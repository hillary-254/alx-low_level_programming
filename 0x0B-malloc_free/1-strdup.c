#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 *@str: the string to be copied from
 *Return: char
 */

char *_strdup(char *str)
{
	int size = 1, int y = 0;
	char *st;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[size])
	{
		size++;
	}

	st = malloc((sizeof(char) * size) + 1);

	if (st == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < size; y++)
	{
		st[y] = str[y];
	}

	st[y] = '\0';

	return (st);
}
