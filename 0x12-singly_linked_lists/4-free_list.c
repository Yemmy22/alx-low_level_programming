#include "lists.h"
/**
 * free_list - Frees memory allocated by malloc to list
 * @head: The list's memory address to be freed
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *itr;

	if (head != NULL)
	{
		while (head != NULL)
		{
			itr = head;
			head = head->next;
			free(itr->str);
			free(itr);
		}
	}

}
