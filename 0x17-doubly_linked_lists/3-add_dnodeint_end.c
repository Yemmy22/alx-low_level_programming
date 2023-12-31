#include "lists.h"
/**
 * add_dnodeint_end - Adds a node to the end of a list
 * @head: Address of the list
 * @n: Node data
 *
 * Return: The updated list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		new_node->next = temp->next;
		new_node->prev = temp;
		temp->next  =  new_node;
	}
	return (*head);
}
