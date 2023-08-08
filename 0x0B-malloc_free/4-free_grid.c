#include "main.h"

/**
 * free_grid - frees 2d grid
 * @grid: 2d grid
 * @height: grid height
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
