#include "main.h"
/**
 * alloc_grid - Allocates memory for a 2 dimensional grid
 * @width: Number or columns
 * @height: Number of rows
 *
 * Return: Returns a pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **mem;
	int i, j, s;

	if (width <= 0 || height <= 0)
		return (NULL);

	mem = (int **)malloc(height * (sizeof(int *)));

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		mem[i] = (int *)malloc(width * (sizeof(int)));

		if (mem[i] == NULL)
		{
			for (s = 0; s < i; s++)
				free(mem[s]);
			free(mem);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			mem[i][j] = 0;
	}
	return (mem);
}
