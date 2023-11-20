#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds or inserts a new node at the beginning of the list
 * @head: pointer to the pointer that points to the first node
 * @n: the value that should be stored in the new node
 *
 * Return: the pointer to the newly created node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
	free(new_node);
}
