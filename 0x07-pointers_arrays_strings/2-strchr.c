#include "main.h"

/**
 * *_strchr - seraches for a character in a string
 *@s: the string to be searched
 *@c: the character being searched
 *Return: char type
 */

char *_strchr(char *s, char c)
{
	int x, len = 0;

	while (s[len])
	{
		len++;
	}

	for (x = 0; x <= len; x++)
	{
		if (c == s[x])
		{
			s += x;
			return (s);
		}
	}

	return ('\0');
}
