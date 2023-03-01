#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: the string to be added to the first string
 * Return: char type
 */

char *_strcat(char *dest, char *src)
{
	int len1 = 0, len2;

	while (dest[len1])
	{
		len1++
	}

	for (len2 = 0; src[len2] != 0; len2++)
	{
		dest[len1] = src[len2];
		len1++
	}
	dest[len1] = '\0';

	return (dest);
}
