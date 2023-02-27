#include "main.h"

/**
 * _strlen - it determines the length of a string
 * @s: pointer variable parameter
 * Return: integer
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
