#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int val = 1;
	/* typecasts the value of val to be a character*/
	char *c = (char *)&val;

	if (*c)
		return (1);
	else
		return (0);
}
