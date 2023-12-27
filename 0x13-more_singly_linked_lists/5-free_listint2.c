#include "lists.h"
/**
 * free_listint2 - Frees a list address, then sets the address to NULL
 * @head: Address of the list to be freed
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *i;

	if (*head == NULL || head == NULL)
		return;

	while (*head != NULL)
	{
		i = *head;
		*head = (*head)->next;
		free(i);
	}
}
