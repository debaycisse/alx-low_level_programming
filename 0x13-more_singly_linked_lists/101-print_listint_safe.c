#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: head node
 * Return: the number of the nodes' count
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_counts = 0;
	const listint_t *each_node;
	const listint_t *a_node = head->next;

	if (head == NULL)
		exit(98);
	each_node = head;
	while (each_node->next != NULL)
	{
		if ((node_counts > 0) && (each_node == a_node))
			exit(98);
		node_counts++;
		printf("[%p] %d\n", (void *)each_node, each_node->n);
		each_node = each_node->next;
	}
	return (node_counts);
}
