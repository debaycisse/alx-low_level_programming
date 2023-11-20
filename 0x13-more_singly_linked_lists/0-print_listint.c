#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_listint - prints out the nodes and their total number
 * @h: pointer to the first node's address
 *
 * Return: the total number of nodes in the list
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t num_of_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num_of_nodes += 1;
		h = h->next;
	}
	return (num_of_nodes);
}

