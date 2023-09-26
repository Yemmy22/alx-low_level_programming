#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a list
 * @head: Address of the list
 * @index: nth number starting at 0
 *
 * Return: The nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		if (count == index)
			return (temp);
		temp = temp->next;
		count++;
	}
	return (NULL);
}
