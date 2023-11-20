#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds or inserts a node at the end of the list
 * @head: pointer to the address of the pointer that points at the first node
 * @n: the data to be stored in the new node
 *
 * Return: pointer to the last node (i.e the just created node) in the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *head_cpy;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else if (*head != NULL)
	{
		head_cpy = *head;
		while (head_cpy->next != NULL)
		{
			head_cpy = head_cpy->next;
		}
		head_cpy->next = new_node;
	}
	return (new_node);
	free(new_node);
}
