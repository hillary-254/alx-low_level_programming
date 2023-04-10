#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number to be modified
 * @index: the index of the number being modified
 * Return: 1 if successful or -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/*checks if index is out of range*/
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
/*performs bitwise or and if it fails returns an error(-1) */

	return ((*n |= 1UL << index));
}
