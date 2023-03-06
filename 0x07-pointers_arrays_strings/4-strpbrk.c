#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 *@s: string to be searched
 *@accept: character to be compared
 *Return: char type
 */

char *_strpbrk(char *s, char *accept)
{
	int slen = 0, alen;

	while (s[slen])
	{
		alen = 0;

		while (accept[alen])
		{
			if (accept[alen] == s[slen])
			{
				s += alen;
				return (s);
			}
			alen++;
		}
		slen++;
	}

	return ('\0');
}
