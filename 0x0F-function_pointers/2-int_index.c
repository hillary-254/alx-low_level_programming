#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array to be searched
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0)
		return (-1);

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (x = 0; x < size; x++)
			{
				if (cmp(array[x]) != 0)
					return (x);
			}
		}
	}
	return (-1);
}
