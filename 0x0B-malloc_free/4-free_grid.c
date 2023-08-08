#include "main.h"

/**
 * free_grid - free the memory from a grid.
 *
 * @grid: a pointer that point in a pointer that point on integer.
 * @height: the height of the grid.
 * Return: noting just free the memory.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i=0; i<height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
