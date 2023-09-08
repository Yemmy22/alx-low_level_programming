#include "main.h"
/**
 * array_range - Creates an array of integers from input range
 * @min: lower bound integer
 * @max: upper bouund integer
 *
 * Return: Address of the array
 */

int *array_range(int min, int max)
{
	int *mem;
	int range;
	int i = 0;

	if (min > max)
		return (NULL);

	range = max - min + 1;

	mem = malloc(sizeof(int) * range);
	if (mem == NULL)
	{
		return (NULL);
	}

	while (i < range)
	{
		mem[i] = min;
		min++;
		i++;
	}
	return (mem);
}

