#include "function_pointers.h"

/**
 * array_iterator - executes function given as parameter on each elmnt of array
 * @array: the array to be iterated over
 * @size: the size of the array
 * @action: pointer to the function
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (x = 0; x < size; x++)
		{
			action(array[x]);
		}
	}
}
