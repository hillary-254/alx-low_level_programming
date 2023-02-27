#include "main.h"

/**
 * print_array - prints an array of integers
 * @a: the pointer where the array will be stored
 * @n: the number of array elements o be stored
 * Return: void
 */

void print_array(int *a, int n)
{
	int len;

	for (len = 0; len < n; len++)
	{
		printf("%d", a[len]);

		if (len != (n - 1))
		{
			printf(", ");
		}

	}
	printf("\n");
}
