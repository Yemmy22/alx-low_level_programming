#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes node at an index
 * @head: The list to delete from
 * @index: Index of the node to delete
 *
 * Return: -1 on failure or 1 on success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head;
	listint_t *prev_node = NULL;
	listint_t *d;
	unsigned int count = 0;

	if (*head != NULL)
	{
		if (index == 0)
		{
			d = *head;
			*head = (*head)->next;
			free(d);
			return (1);
		}
		else if (index > 0)
		{
			while (node != NULL)
			{
				if (count == index)
				{
					prev_node->next = node->next;
					free(node);
					return (1);
				}
				prev_node = node;
				node = node->next;
				count++;
			}
		}
	}
	return (-1);
}

