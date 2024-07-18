#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array
 * of integers using recursive binary search algorithm
 * @array: Pointer to the first element of the array
 * being searched in
 * @size: Size of the array to be searched
 * @value: Value to be serached for
 *
 * Return: The return value of recursive_binary_search
 * function or -1 array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (recursive_binary_search(array, 0, size - 1, value));
}
/**
 * recursive_binary_search - Searches for a value in a sorted
 * array using recursive binary search algorithm
 * @array: Pointer to the first element of the array
 * being searched in
 * @prev: Starting index of the current array block
 * @current: Starting index of the next array block
 * @value: Value to be serached for
 *
 * Return: Index of value in array,
 * or -1 if not found or array is NULL
 */
int recursive_binary_search(int *array, size_t prev, size_t current, int value)
{
	size_t mid, i;

	if (prev <= current)
	{
		mid = prev + (current - prev) / 2;
		printf("Searching in array: ");
		for (i = prev; i <= current; ++i)
		{
			printf("%d", array[i]);
			if (i < current)
				printf(", ");
			else
				printf("\n");
		}
		if (array[mid] == value)
		{
			if (mid == prev || array[mid - 1] != value)
				return (mid);
			else
				return (recursive_binary_search(array, prev, mid, value));
		}
		else if (array[mid] < value)
		{
			return (recursive_binary_search(array, mid + 1, current, value));
		}
		else
		{
			return (recursive_binary_search(array, prev, mid - 1, value));
		}
	}
	return (-1);
}
