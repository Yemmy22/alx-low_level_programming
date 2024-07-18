#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in an ordered array
 * with interpolation search algorithm
 *
 * @array: Pointer to the first element of the array to be searched
 * @size: Size of the array
 * @value: Value to be searched
 *
 * Return: The first index where the value is found
 * or -1 if not found or if array is NULL
 */


int interpolation_search(int *array, size_t size, int value)
{
	size_t prev = 0;
	size_t current = size - 1;
	size_t index;

	if (array != NULL)
	{
		while (prev <= current && value >= array[prev] && value <= array[current])
		{
			if (prev == current)
			{
				if (array[prev] == value)
					return (prev);
				return (-1);
			}
			index = prev + (((double)(current - prev
							) / (array[current] - array[prev])) * (value - array[prev]));

			if (index >= size)
			{
				printf("Value checked array[%lu] is out of range\n", index);
				return (-1);
			}
			printf("Value checked array[%lu] = [%d]\n", index, array[index]);

			if (array[index] == value)
				return (index);

			if (array[index] < value)
				prev = index + 1;
			else
			       current	= index - 1;
		}
		index = prev + (((double)(current - prev) / (
						array[current] - array[prev])) * (value - array[prev]));
		{
			if (index >= size)
				printf("Value checked array[%lu] is out of range\n", index);
		}
	}
	return (-1);
}
