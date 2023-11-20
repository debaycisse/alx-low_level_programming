#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index - gets the address of the node, located at index
 * @head: pointer to the memory address of the first node
 * @index: matches the index point of a node, whose address is returned
 *
 * Return: Null, if index does not exist in the list, otherwise pointer
 * to the node at nth index is returned.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node_at_index;
	unsigned int i;

	node_at_index = NULL;
	i = 0;
	while (head != NULL)
	{
		if (index == i)
		{
			node_at_index = head;
			break;
		}
		i++;
		head = head->next;
	}
	if (node_at_index == NULL)
		return (NULL);
	return (node_at_index);
}
