#include "search_algos.h"

/**
 * exponential_search - Searches for a value in an odered array of
 * integers using the Exponential search algorithm
 *
 * @array: Pointer to the first element of the array to be searched
 * @size: Size of the array
 * @value: Value to be searched
 *
 * Return: Index of value in array,
 * or -1 if not found or array is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i, mid, left, right, bound;

	if (array != NULL && size != 0)
	{
		bound = 1;
		while (bound < size && array[bound] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
			bound *= 2;
		}
		left = bound / 2;
		right = (bound < size) ? bound : size - 1;
		printf("Value found between indexes [%lu] and [%lu]\n", left, right);
		while (left <= right)
		{
			mid = left + (right - left) / 2;
			printf("Searching in array: ");
			for (i = left; i <= right; ++i)
			{
				printf("%d", array[i]);
				if (i < right)
					printf(", ");
				else
					printf("\n");
			}
			if (array[mid] == value)
				return (mid);

			if (array[mid] < value)
				left = mid + 1;
			else
				right = mid - 1;
		}
	}
	return (-1);
}
