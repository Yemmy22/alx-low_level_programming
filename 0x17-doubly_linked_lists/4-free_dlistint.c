#include "lists.h"
/**
 * free_dlistint - Deallocates linked list memory
 * @head: Address of the linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head)
	{
		while (head != NULL)
		{
			temp = head;
			head = head->next;
			free(temp);
		}
	}
}
