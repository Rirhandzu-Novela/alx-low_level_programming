#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: an array
 * @height: height of an array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int a;

	a = 0;

	for (; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
