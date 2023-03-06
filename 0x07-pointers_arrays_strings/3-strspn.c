#include "main.h"

/**
 * _strspn - compares a string with a set characters and gives length
 *@s: string to be compared
 *@accept: set of chars that are compared to see if it matches then gives len
 *Return: int type
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int slen, alen = 0, len = 0;

	while (accept[alen])
	{
		slen = 0;

		while (s[slen] != 32)
		{
			if (accept[alen] == s[slen])
			{
				len++;
			}
			slen++;
		}

		alen++;
	}

	return (len);
}
