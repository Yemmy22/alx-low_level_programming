#include "lists.h"
/**
 * add_dnodeint - Adds a new head node
 * @head: The address of the list
 * @n: Node data
 *
 * Return: The updated list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;

	if (*head == NULL)
		new_node->next = *head;
	else
	{
		(*head)->prev = new_node;
		new_node->next = *head;
	}
	*head = new_node;
	return (*head);
}
