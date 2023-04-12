#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * this is a comment
 * 
 * 
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
