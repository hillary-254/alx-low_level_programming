#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to the string to be converted
 * Return: integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int x;

	if (b == NULL)
		return (0);

	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] == '1')
			val = (val << 1) | 1;
		else if (b[x] == '0')
			val = val << 1;
		else
			return (0);
	}

	return (val);
}
