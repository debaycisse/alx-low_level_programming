#include "lists.h"

/**
 * dlistint_len - returns the length of a list
 * @h: pointer to the first node in a list
 * Return: the total number of nodes in a list or zero, if list is empty
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
