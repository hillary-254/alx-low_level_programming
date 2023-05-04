#include "main.h"
#include <stdio.h>

/**
   * get_endianness - checks the endianness
    * Return: 0 if big endian, 1 if little endian
     */

int get_endianness(void)
{
	unsigned int v = 1;
	char *ch = (char *)&v;

	if (*ch)
		return (1);
	else
		return (0);
}
