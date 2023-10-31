#include "main.h"
#include <stdlib.h>

/**
 *free_grid- function that frees a 2 dimensional grid previously
 *	created by your alloc_grid function.
 *@grid: address of the two dimensional grid
 *@height: this is the height of the grid
 *
 *Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
		free(grid[m]);
	free(grid);
}
