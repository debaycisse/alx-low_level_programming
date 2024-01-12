#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at given position
 * @head: pointer to the pointer that points at the first node in a list
 * @index: the position of the node to be deleted in a list
 * Return: 1 if operation is successful, -1 if error occurs
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = *head;

	if (current == NULL)
		return (-1);
	i = 0;
	while (current != NULL)
	{
		if (index == i)
		{
			if (index == 0)
			{
				*head = current->next;
				if (*head != NULL)
					(current->next)->prev = current->prev;
			}
			else if (index > 0)
			{
				(current->prev)->next = current->next;
				(current->next)->prev = current->prev;
			}
			free(current);
			return (1);
		}
		i++;
		current = current->next;
	}
	return (-1);
}
