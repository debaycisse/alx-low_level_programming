#include "lists.h"

/**
  * add_dnodeint - adds a node to the beginning of a list
  * @head: pointer that points at the node that points at the first node
  * @n: the value to be stored by the new node
  * Return: the address of the new node
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current = *head, *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	if (*head != NULL)
	{
		new_node->next = *head;
		current->prev = new_node;
	}
	else
		new_node->next = NULL;
	*head = new_node;
	return (new_node);
}
