#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory grid allocated to 2-d array
 * @grid: address of 2-d array
 * @height: height of 2-d array
 * Return: None
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
	}
	free(grid);
}
