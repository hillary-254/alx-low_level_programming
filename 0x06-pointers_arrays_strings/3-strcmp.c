#include "main.h"

/**
 * _strcmp - compares two strings if they match
 * @s1: string 1
 * @s2: string 2
 * Return: int type
 */

int _strcmp(char *s1, char *s2)
{
	int l1 = 0, l2 = 0, count = 0, res = 0, limit;

	while (s1[l1] != '\0')
	{
		l1++;
	}

	while (s2[l2] != '\0')
	{
		l2++;
	}

	if (l1 <= l2)
	{
		limit = l1;
	}
	else
	{
		limit = l2;
	}

	while (count <= limit)
	{
		if (s1[count] == s2[count])
		{
			count++;
			continue;
		}
		else
		{
			res = s1[count] - s2[count];
			break;
		}

		count++;
	}

	return (res);
}
