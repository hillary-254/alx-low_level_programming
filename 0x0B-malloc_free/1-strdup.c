#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 *@str: the string to be copied from
 *Return: char
 */

char *_strdup(char *str)
{
	int size = 0, int y = 0;
	char *st;

	while (*str != '\0')
	{
		size++;
	}

	if (size == NULL)
	{
		return (NULL);
	}

	st = malloc(sizeof(char) * size);

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
