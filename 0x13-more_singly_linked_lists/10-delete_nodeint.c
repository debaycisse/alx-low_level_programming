#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at the given index
 * @head: pointer to the address of the head node
 * @index: the index number to lookup
 *
 * Return: 1 if no error, otherwise, -1 is returned
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *head_cpy = *head;
	listint_t *temp;
	unsigned int i;
	int outcome = 0;

	if ((index == 0) && (*head != NULL))
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		outcome = 1;
	}
	if ((index != 0) && (*head != NULL))
	{
		head_cpy = *head;
		i = 0;
		while (index != i + 1)
		{
			i++;
			head_cpy = head_cpy->next;
		}
		if (head_cpy == NULL)
			outcome = -1;
		else
		{
			temp = head_cpy->next;
			head_cpy->next = temp->next;
			free(temp);
			outcome = 1;
		}
	}
	if (outcome == 1)
		return (1);
	return (-1);
}
