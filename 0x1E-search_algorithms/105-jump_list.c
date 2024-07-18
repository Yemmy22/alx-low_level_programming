#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers
 * using the Jump search algorithm
 *
 * @list: Pointer to the head of the list to be searched
 * @size: Number of nodes in the list
 * @value: Value to be searched
 *
 * Return: Pointer to the first node where value is found, or NULL if not found
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size);
	listint_t *prev = list, *current = list;
	size_t i;

	if (list == NULL)
		return (NULL);
	while (current->next && current->index < size - 1 && current->n < value)
	{
		prev = current;
		for (i = 0; i < step && current->next; i++)
			current = current->next;
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
		       prev->index, current->index);
	while (prev && prev->index <=
			current->index && prev->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
