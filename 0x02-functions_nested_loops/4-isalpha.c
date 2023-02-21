#include "main.h"

/**
 * _isalpha - checks if input is a letter, either lowercase or uppercase
 * @c: input to be checked
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
