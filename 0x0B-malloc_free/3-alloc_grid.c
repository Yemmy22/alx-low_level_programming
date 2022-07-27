#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Creates a 2-d array of integers from 2 integers
 * @width:1st integer
 * @height:2nd integer
 * Return:2-d array
 */
int **alloc_grid(int width, int height)
{
	int i, j, s, t, **m;

	if (width <= 0 || height <= 0)
		return (NULL);
	m  = malloc(height * sizeof(int *));
	if (m == NULL)
	{
		free(m);
		return (NULL);
	}
	i = 0;
	while (i < height)
	{
		m[i] = malloc(width * sizeof(int));
		if (m[i] == NULL)
		{
			j = i;
			while (j >= 0)
			{
				free(m[j]);
				j--;
			}
			free(m);
			return (NULL);
		}
		i++;
	}
	t = 0;
	while (t < height)
	{
		s = 0;
		while (s < width)
		{
			m[t][s] = 0;
			s++;
		}
		t++;
	}
	return (m);
}


