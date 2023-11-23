#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"


size_t get_nodes_count(const listint_t *head)
{
	size_t node_counts;
	const listint_t *slow_node;
	const listint_t *fast_node;

	if (head == NULL || head->next == NULL)
		return (0);
	slow_node = head;
	fast_node = slow_node->next;
	while (fast_node != NULL || fast_node->next != NULL)
	{
		if (fast_node == slow_node)
		{
			slow_node = head;
			node_counts = 0;
			if (slow_node != fast_node)
			{
				if (slow_node == fast_node)
				{
					slow_node = slow_node->next;
					node_counts++;
					while (slow_node != fast_node)
					{
						node_counts++;
						slow_node = slow_node->next;
					}
					return (node_counts);
				}
				while (slow_node != fast_node)
				{
					node_counts++;
					fast_node = fast_node->next;
					slow_node = slow_node->next;
				}
			}
		}
		slow_node = slow_node->next;
		if (fast_node == NULL || fast_node->next == NULL)
			return (0);
		fast_node = fast_node->next->next;
	}
	return (0);
}



/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: head node
 * Return: the number of the nodes' count
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_counts = get_nodes_count(head);
	const listint_t *head_cpy;
	size_t i;

	if (node_counts == 0)
	{
		head_cpy = head;
		while (head_cpy != NULL)
		{
			node_counts++;
			printf("[%p] %d\n", (void *)head_cpy, head_cpy->n);
			head_cpy = head_cpy->next;
		}
		return (node_counts);
	}
	i = 0;
	while (head_cpy)
	{
		if (i == node_counts)
		{
			printf("->[%p] %d\n", (void *)head_cpy->next, (head_cpy->next)->n);
			return (node_counts);
		}
		printf("[%p] %d\n", (void *)head_cpy, head_cpy->n);
		head_cpy = head_cpy->next;
		i++;
	}
	return (node_counts);
}
