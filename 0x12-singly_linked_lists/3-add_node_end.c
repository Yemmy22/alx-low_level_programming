#include "lists.h"
/**
 * add_node_end - Appends a new node to the end of the list
 * @head: Address of the new node
 * @str: String input of the new node
 *
 * Return: Address of the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int count = 0;
	list_t *temp;
	list_t *itr;

	while (str[count] != '\0')
	{
		count++;
	}

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	temp->len = count;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		itr = *head;
		while (itr->next != NULL)
		{
			itr = itr->next;
		}
		itr->next = temp;
	}
	return (*head);
}
