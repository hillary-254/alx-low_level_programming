#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the number to be modified
 * @index: the index of the number being modified
 * Return: if success, 1 or -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	else
	{
		*n &= (~(1 << index));
		return (1);
	}
}
