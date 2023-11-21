#include "lists.h"

/**
 * reverse_listint - reverses the nodes in listint_t
 * @head: pointer to the address of the head node
 *
 * Return: the head node for the reversed nodes
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
			*head = next_node;
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
