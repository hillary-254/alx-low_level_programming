#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to the string to be converted
 * Return: integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int y;

	if (b == NULL)
		return (0);

	for (y = 0; b[y] != '\0'; y++)
	{
		if (b[y] == '1')
			value = (value << 1) | 1;
		else if (b[y] == '0')
			value = value << 1;
		else
			return (0);
	}
	return (value);
}
