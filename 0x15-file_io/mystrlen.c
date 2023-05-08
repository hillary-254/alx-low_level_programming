#include "main.h"

/**
 * _strlen -an alternative of inbulit strlen, counts length of a string
 * @str: the string to be counted
 * Return: the length of the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}
