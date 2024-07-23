#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function name
 * @width: array width
 * @height: array height
 *
 * Description:  a function that returns a pointer to a 2D array
 * Return: pointer to new arr
 * If width <= 0, return 0
 * On failure, return 0
 * return pointer to 2D arr
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
	return (0);

	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == 0)
	{
		return (0);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == 0)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (0);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
