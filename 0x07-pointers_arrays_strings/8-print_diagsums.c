#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix of int
 * @a: param 1
 * @size: size
 * Return: void type
 */

void print_diagsums(int *a, int size)
{
	int x, y, sum1 = 0, sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 += a[x * (size + 1)];
		sum2 += a[(size - 1) * (x + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
