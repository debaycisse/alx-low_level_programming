#include "lists.h"

/**
 * sum_dlistint - sums up all the data in a given list
 * @head: the pointer to the first node in a given list
 * Return: the total sum of the data of all nodes in a
 * given list, 0 for an empty list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (current == NULL)
		return (0);
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
