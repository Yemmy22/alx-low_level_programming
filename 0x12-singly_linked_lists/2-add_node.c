#include "lists.h"
/**
 * add_node - Prepends node
 * @head: Double pointer to head
 * @str: Pointer to String element
 *
 * Return: Address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int count = 0;
	list_t *temp;

	while (str[count] != '\0')
	{
		count++;
	}

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = count;
	temp->next = *head;
	*head = temp;

	return (*head);
}
