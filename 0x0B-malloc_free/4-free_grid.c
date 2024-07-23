#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function name
 * @grid: 2D grid
 *
 * Description: function that frees 2D array
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
