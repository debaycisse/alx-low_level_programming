#include "lists.h"

/**
 * Write a function that reverses a listint_t linked list.

Prototype: listint_t *reverse_listint(listint_t **head);
Returns: a pointer to the first node of the reversed list
You are not allowed to use more than 1 loop.
You are not allowed to use malloc, free or arrays
You can only declare a maximum of two variables in your function
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node;
	listint_t *current_node;

	current_node = *head;
	next_node = current_node->next;
	current_node->next = NULL;
	*head = next_node;
	while (next_node != NULL)
	{
		current_node = *head;
		next_node = current_node->next;
		current_node->next = *head;
		*head = next_node;
	}
	return (*head);
}
