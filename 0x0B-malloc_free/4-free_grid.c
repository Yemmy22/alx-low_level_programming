#include "main.h"
/**
 * free_grid - Frees memory alloacted to a 2d array
 * @grid: Input Pointer to Pointer of integer arrays
 * @height: Input height of the array
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
