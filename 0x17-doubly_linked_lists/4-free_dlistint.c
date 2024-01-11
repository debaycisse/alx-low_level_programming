#include "lists.h"

/**
 * free_dlistint - removes each node from the list and system memory
 * @head: pointer to the first node in the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *next_to_del = NULL;

	if (current)
	{
		while (current != NULL)
		{
			next_to_del = current->next;
			free(current);
			current = next_to_del;
		}
	}
}
