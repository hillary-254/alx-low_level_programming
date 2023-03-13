#include "main.h"

/**
 * **alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 *@width: width of arr
 *@height: height of arr
 *Return: integer
 */

int **alloc_grid(int width, int height)
{
	int x, y, a, b;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		arr[x] = malloc(sizeof(int) * width);

		if (arr[x] == NULL)
		{
			for (y = x; y >= 0; j--)
			{
				free(arr[y]);
			}

			free(arr);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			arr[a][b] = 0;
		}
	}

	return (arr);
}
