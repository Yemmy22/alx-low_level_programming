#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of integers
 * @min: lower bound of array
 * @max: upper bound of array
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *m;
	int i = 0;
	int l;

	if (min > max)
		return (NULL);
	l = ((max - min) + 1);

	m = malloc(sizeof(int) * l);
	if (m == NULL)
		return (NULL);

	while (i < l)
	{
		m[i] = min;
		i++;
		min++;
	}
	return (m);
}

