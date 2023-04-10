#include "main.h"

/**
 * flip_bits -return number of bits needed to flip from one number to another
 * @n: integer
 * @m: integer
 * Return: integer
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0, val = n ^ m;

	while (val)
	{
		if (val & 1)
			counter++;

		val >>= 1;
	}

	return (counter);
}
