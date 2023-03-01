#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: copy destination
 * @src: copy source
 * @n: maimum copy length
 * Return: char type
 */

char *_strncpy(char *dest, char *src, int n)
{
	int dlen = 0, slen = 0;

	while (dest[dlen] != '\0')
	{
		dlen++;
	}

	while (slen < n && src[slen] != '\0')
	{
		dest[slen] = src[slen];
		slen++;
	}

	while (slen < n)
	{
		dest[slen] = '\0';
		slen++;
	}

	return (dest);
}
