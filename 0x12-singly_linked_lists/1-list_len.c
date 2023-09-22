#include "lists.h"
/**
 * list_len - Returns number of elements in a linked list
 * @h: Pointer to the first element
 *
 * Return: The number of elements
 */
size_t list_len(const list_t *h)
{
	size_t lenght = 0;

	while (h != NULL)
	{
		h = h->next;
		lenght++;
	}
	return (lenght);
}


