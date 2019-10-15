#include <stdlib.h>

/**
 * free_grid - prints a grid of integers
 * @grid: int variable
 * @height: height of the grid
 *
 * Return: ar or NULL
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
