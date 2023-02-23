#include "main.h"

/**
 * _isdigit - checks if input is a digit
 * @c: input checked
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
