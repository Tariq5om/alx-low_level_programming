#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free 2 dimensional
 *
 * @grid: Array
 * @height: the height of 2 dimensional array
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)/*First free the rset*/
	{
		free(grid[i]);/*Then the stick*/
	}
		free(grid);
}
