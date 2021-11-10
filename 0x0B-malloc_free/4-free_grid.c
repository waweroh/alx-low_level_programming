#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2D arrays of integers.
 * @grid: 2D array of integers to be freed.
 * @height: the height of the grid.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	
}
