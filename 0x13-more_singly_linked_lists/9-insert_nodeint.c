#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a given index
 * @head: Address of the list
 * @idx: The index at which to be inserted
 * @n: The data to be inserted
 *
 * Return: The address of the inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = NULL;
	listint_t *i = *head;
	listint_t *previous_node = NULL;
	unsigned int count = 0;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	else
	{
		while (i != NULL)
		{
			if (count == idx)
			{
				previous_node->next = temp;
				temp->next = i;
				return (temp);
			}
			previous_node = i;
			i = i->next;
			count++;
		}
	}
	free(temp);
	return (NULL);
}

