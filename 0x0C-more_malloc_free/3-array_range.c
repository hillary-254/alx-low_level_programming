#include "main.h"

/**
 * *array_range - creates an array of integers
 *@min: ..
 *@max: ..
 *Return: integer
 */

int *array_range(int min, int max)
{
	int *arr, x = 0;

	if (min > max)
		return (NULL);

	arr = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (arr == NULL)
		return (NULL);

	while (min <= max)
	{
		arr[x] = min;
		x++;
		min++;
	}

	return (arr);
}
