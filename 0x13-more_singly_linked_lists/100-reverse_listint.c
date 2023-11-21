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
	listint_t *previous_node;

	previous_node = *head;
	next_node = previous_node->next;
	previous_node->next = NULL;
	*head = next_node;
	while (*head != NULL)
	{
		*head = next_node->next;
		if (*head == NULL)
		{
			*head = next;
			next_node->next = previous_node;
			previous_node = next_node;
			next_node = *head;
			break;
		}
		else
		{
			next_node->next = previous_node;
			previous_node = next_node;
			next_node = *head;
		}
	}
	return (*head);
}
