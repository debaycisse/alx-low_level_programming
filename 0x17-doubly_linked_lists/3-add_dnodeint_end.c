#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of a list
 * @head: the pointer to the pointer that points to the first node
 * @n: the value or data for the new node to be created
 * Return: address of the new node or null, if error occurs
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head, *temp = NULL, *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (current == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (current != NULL)
		{
			temp = current;
			current = current->next;
		}
		temp->next = new_node;
		new_node->prev = temp;
	}
	return (new_node);
}
