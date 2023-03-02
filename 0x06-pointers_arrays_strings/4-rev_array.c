#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 *@a: the array to be reversed
 *@n: the number of elements in the array
 *Return: void type
 */

void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < n / 2; x++)
	{
		y = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = y;
	}
}
