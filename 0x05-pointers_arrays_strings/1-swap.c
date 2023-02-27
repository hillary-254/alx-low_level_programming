#include "main.h"

/**
 * swap_int - swaps the values of two variable using their respective pointers
 * @a: pointer variable a
 * @b: pointer variable, b
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int y, z;

	y = *a;
	z = *b;
	*a = z;
	*b = y;
}
