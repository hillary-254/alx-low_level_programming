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

	for (z = 0; src[z] != '\0'; z++)
	{
		dest[z] = src[z];
	}
	dest[z++] = '\0';
	return (dest);
}
