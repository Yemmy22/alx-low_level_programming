#include "lists.h"
/**
 * add_nodeint - Prepends a node to a list
 * @head: Address of the list
 * @n: Integer date in each node
 *
 * Return: The address of the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first;

	first = malloc(sizeof(listint_t));
	if (first == NULL)
		return (NULL);
	first->n = n;
	first->next = *head;
	*head = first;

	return (*head);
}
