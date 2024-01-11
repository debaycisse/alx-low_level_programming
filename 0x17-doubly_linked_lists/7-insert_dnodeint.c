#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at given index position
 * @h: pointer to the pointer that points to the first node in a given list
 * @idx: the index position where a new node is to be inserted
 * @n: the data to be stored in the new node
 * Return: address of the new node or null, if error occurs
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *current = *h, *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	if (current != NULL)
	{
		i = 0;
		while (current != NULL)
		{
			if (idx == i)
			{
				new_node->prev = current->prev;
				new_node->next = current;
				if (idx > 0)
					(current->prev)->next = new_node;
				current->prev = new_node;
				if (idx == 0)
					*h = new_node;
				return (new_node);
			}
			i++;
			current = current->next;
		}
	}
	free(new_node);
	return (NULL);
}
