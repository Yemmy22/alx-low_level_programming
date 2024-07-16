#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Searches an array by index
 * in the array or return -1
 * @array: Array to be searched
 * @size: Numeric size of the array
 * @value: The integer to be searhed in the array
 *
 * Return the first index where value is found in the array
 * or return -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
