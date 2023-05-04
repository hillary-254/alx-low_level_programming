#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index
 * @n: the value to be compared
 * @index: the index position starting from 0
 * Return: integer
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int z = 0;

	while (n)
	{
		if (z != index)
		{
			n = n / 2;
			z++;
		}
		else
		{
			if (n % 2)
				return (1);
			else
				return (0);
		}
	}

	if (index > z && index < 63)
		return (0);

	return (-1);
}
