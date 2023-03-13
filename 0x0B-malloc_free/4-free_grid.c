#include "main.h"

/**
 * free_grid -  frees 2 dimensional grid previously created by your alloc_grid
 *@grid: ....
 *@height: ...
 *Return: void
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}

	free(grid);
}
