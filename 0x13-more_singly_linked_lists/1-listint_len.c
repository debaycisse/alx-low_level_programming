#include <stddef.h>
#include "lists.h"

/**
 * listint_len - computes the size or number of nodes in a list
 * @h: pointer to the memory address of the first node in the list
 *
 * Return: the total number of nodes in a given list
 */
size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}
