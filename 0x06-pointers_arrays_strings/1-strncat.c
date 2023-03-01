#include "main.h"

/**
 * *_strncat - concatenates 2 strings up until the maximum n byte
 *@dest: the string where concat will be added
 *@src: the string to be moved to dest
 *@n: the number of characters to be concatenated
 *Return: char type
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, srclen = 0;

	while (dest[dlen] != '\0')
	{
		dlen++;
	}
	while (src[srclen] != '\0' && srclen < n)
	{
		dest[dlen] = src[srclen];
		dlen++;
		srclen++;
	}

	dest[dlen + n + 1] = '\0';

	return (dest);
}
