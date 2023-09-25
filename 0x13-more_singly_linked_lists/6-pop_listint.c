#include "lists.h"
/**
 * pop_listint - Deletes the head node of a list
 * @head: Address of the list
 *
 * Return: The head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int ret;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	ret = temp->n;
	free(temp);

	return (ret);
}
