#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at given index location
 * @head: pointer to the first node in the list
 * @index: the index position of intended node to be fetched
 * Return: the address of the node whose index matches the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	if (current == NULL)
		return (NULL);
	i = 0;
	while (current != NULL)
	{
		if (index == i)
			return (current);
		i++;
		current = current->next;

	}
	return (NULL);
}
