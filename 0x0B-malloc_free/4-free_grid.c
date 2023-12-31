#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: input 1
 * @height: input 2
 * Return: void
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
