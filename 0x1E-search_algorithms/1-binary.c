#include "search_algos.h"
/**
 * binary_search - Searches for a value in an ordered array
 * of integers
 *
 * @array: Array to be searched
 * @size: Numeric size of the array
 * @value: The integer to be searhed in the array
 *
 * Return: The first index where value is found in the array
 * or return -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t upper = size - 1;
	size_t mid;
	size_t i;

	if (array != NULL)
	{
		for (; low <= upper;)
		{
			printf("Searching in array: ");
			for (i = low; i <= upper; i++)
			{
				printf("%d", array[i]);
				if (i < upper)
					printf(", ");
				if (i == upper)
					printf("\n");
			}

			mid = low + (upper - low) / 2;
			if (array[mid] == value)
				return (mid);

			if (value > array[mid])
				low = mid + 1;
			else
				upper = mid - 1;
		}
	}
	return (-1);
}
