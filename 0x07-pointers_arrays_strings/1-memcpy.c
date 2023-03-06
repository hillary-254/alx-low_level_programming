#include "main.h"

/**
 * *_memcpy - copies bytes from one memory area to another
 *@dest: destination memory area to be copied to
 *@src: source memory area to be copied from
 *@n: number of bytes to copy
 *Return: char type
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
