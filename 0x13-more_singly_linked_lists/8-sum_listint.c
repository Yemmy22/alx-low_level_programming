#include "lists.h"
/**
 * sum_listint - Returns the sum of all elements of a list
 * @head: Address of the list
 *
 * Return: Sum of all elements
 */
int sum_listint(listint_t *head)
{
	listint_t *i = head;
	int sum = 0;

	while (i != NULL)
	{
		sum += i->n;
		i = i->next;
	}
	return (sum);
}
