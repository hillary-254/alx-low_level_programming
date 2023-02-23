#include "main.h"

/**
 * _isupper - Checks if input is uppercase or lowercase
 * @c: the input checked
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
