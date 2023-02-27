#include "main.h"

/**
 * _strcpy - copies string from one parameter to another using pointers
 * @dest: the destination variable to be copied to
 * @src: the source variable to copy from
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int z;
	int x = strlen(src);

	for (z = 0; z < x; z++)
	{
		*dest = src[z];
	}
	return (dest);
}
