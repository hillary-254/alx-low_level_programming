#include "main.h"

/**
 * *str_concat -  concatenates two strings.
 *@s1: string 1
 *@s2: string 2
 *Return: char type
 */

char *str_concat(char *s1, char *s2)
{
	int x1 = 0, x2 = 0, c1 = 0, c2 = 0, len = 0;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[x1])
	{
		x1++;
	}
	while (s2[x2])
	{
		x2++;
	}
	len = x1 + x2;

	str = malloc((sizeof(char) * len) + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	c2 = 0;
	while (c1 < len)
	{
		if (c1 <= x1)
		{
			str[c1] = s1[c1];
		}
		if (c1 >= x1)
		{
			str[c1] = s2[c2];
			c2++;
		}
		c1++;
	}
	str[c1] = '\0';
	return (str);
}
