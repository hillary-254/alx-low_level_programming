#include "main.h"

/**
 * _strlen_recursion -  returns the length of a string.
 *@s: input string to be calculated
 *Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
