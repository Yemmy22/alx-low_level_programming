#include "lists.h"
/**
 * print_listint - Prints all elements of a linked list
 * @h: Address of the list
 *
 * Return: The number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
