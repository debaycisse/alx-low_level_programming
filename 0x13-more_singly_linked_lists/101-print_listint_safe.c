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
	const listint_t *fast_node = NULL;
	const listint_t *slow_node = NULL;
	
	if (head == NULL)
		exit(98);
	slow_node = head;
	fast_node = head->next;
	while (1)
	{
		node_counts++;
		printf("[%p] %d\n", (void *)slow_node, slow_node->n);
		if (fast_node == NULL || fast_node->next == NULL)
		{
			if (slow_node != NULL)
				slow_node = slow_node->next;
		}
		if (fast_node != NULL || fast_node->next != NULL)
		{
			if (fast_node == slow_node)
			{
				slow_node = head;
				node_counts++;
				printf("->[%p] %d\n", (void *)slow_node, slow_node->n);
				return (node_counts);
			}
			if(fast_node->next == slow_node->next)
			{
			}
			if (slow_node == slow_node->next)
				return (node_counts);
			if (fast_node != slow_node)
			{
				slow_node = slow_node->next;
				fast_node = slow_node->next;
			}
		}
	}
	return (node_counts);
}
