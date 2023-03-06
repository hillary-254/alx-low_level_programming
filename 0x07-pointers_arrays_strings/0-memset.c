#include "main.h"

/**
 * *_memset - Fills a memory with a constant byte
 *@s: pointer to the memory area to be filled
 *@b: the constant byte to fill the memory
 *@n: number of bytes
 *Return: char type
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}
