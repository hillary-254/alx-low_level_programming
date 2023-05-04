#include "main.h"

/**
 * flip_bits -return number of bits needed to flip from one number to another
 * @n: integer
 * @m: integer
 * Return: integer
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0, res = n ^ m;

	while (res != 0)
	{
		count = count + (res & 1);
		res >>= 1;
	}
	return (count);
}
