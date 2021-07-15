#include <stdlib.h>

/**
 * free_grid -  free up a 2d array grid
 *
 * @grid: double pointer 2d grid
 * @height: height of grid
 *
 * Return: nothing
*/

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
