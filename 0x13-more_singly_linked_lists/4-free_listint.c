#include "lists.h"
/**
 * free_listint - Frees a list
 * @head: Address of the list to be freed
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *i;

	while (head != NULL)
	{
		i = head;
		head = head->next;
		free(i);
	}
}


