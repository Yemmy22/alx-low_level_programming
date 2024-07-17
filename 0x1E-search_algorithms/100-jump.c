#include "search_algos.h"

/**
 * min - Determine the minimum of two input integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The minimum.
 */

size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * jump_search - Searches for a value in an ordered array with
 * jump search algorithm
 *
 * @array: Pointer to the first element of the array to be searched
 * @size: Size of the array
 * @value: Value to be searched
 *
 * Return: The first index where the value is located
 * or -1 if not found or if array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t current = 0;

	if (array != NULL && size != 0)
	{
		while  (current < size && array[current] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", current, array[current]);
			prev = current;
			current += step;
		}
		printf("Value found between indexes [%lu] and [%lu]\n", prev, current);
		for (; prev <= size - 1 && prev <= current; prev++)
		{
			printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
			if (array[prev] == value)
				return (prev);
		}
	}
	return (-1);
}
