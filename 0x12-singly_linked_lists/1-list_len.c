#include <stddef.h>
#include "lists.h"

/**
 * list_len - lists the total length of the nodes
 * @h: pointer to the memory location of the first node in the list
 * Return: the total number of node(s) in the list
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
