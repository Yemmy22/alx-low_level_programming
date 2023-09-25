#include "lists.h"
/**
 * add_nodeint_end - Appends a node to the end of a list
 * @head: Address of the list
 * @n: Integer data in each node
 *
 * Return: The address of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *i;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		i = *head;
		while (i->next != NULL)
		{
			i = i->next;
		}
		i->next = newnode;
	}
	return (*head);
}
