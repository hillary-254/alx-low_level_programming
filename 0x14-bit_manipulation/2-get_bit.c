#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index
 * @n: the value to be compared
 * @index: the index position starting from 0
 * Return: integer
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x = 0;

	while (n)
	{
		if (x != index)
		{
			n = n / 2;
			x++;
		}
/*if match, we check if is 0 or 1 using modulo if a number is odd or even*/
		else
		{
			if (n % 2)
				return (1);
			else
				return (0);
		}
	}
/*we check if index is within the valid range of unsigned int bits(64)*/

	if (index > x && index < 63)
		return (0);

	return (-1);
}
