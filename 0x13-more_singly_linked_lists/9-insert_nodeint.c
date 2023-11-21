#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at an index position
 * @head: pointer to the address of head node
 * @idx: the index postion's value
 * @n: the new node's data
 * Return: pointer to the new node or NULL, if error occurs
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new;
	listint_t *head_cpy;

	new = NULL;
	if ((idx == 0) && *head == NULL)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	if ((*head == NULL) && (idx != i))
		return (NULL);
	if (*head != NULL)
	{
		head_cpy = *head;
		i = 0;
		while (head_cpy != NULL)
		{
			if (idx == i + 1)
			{
				new = malloc(sizeof(listint_t));
				if (new == NULL)
					return (NULL);
				new->n = n;
				new->next = head_cpy->next;
				head_cpy->next = new;
				return (new);
			}
			i++;
			head_cpy = head_cpy->next;
		}
	}
	if (new == NULL)
		return (NULL);
	return (new);
}
