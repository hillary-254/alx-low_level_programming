#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 *@str: the string to be copied from
 *Return: char
 */

char *_strdup(char *str)
{
	int size = 1, y = 0;
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
	while (y < size)
	{
		st[y] = str[y];
		y++;
	}

	st[y] = '\0';

	return (st);
}
