#include "main.h"
#include <stdlib.h>

/**
 * free_grid - the fuction free the array of 2-dimensional.
 *
 * @giid: the 2-dimensional array.
 * @height: the height of grid.
 */

void free_grid(int **grid, int height)
{
	int s1;

	for (s1 = 0; s1 < height; s1++)
	{
		free(grid[s1]);
	}

	free(grid);
}
