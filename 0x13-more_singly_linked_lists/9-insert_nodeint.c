#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *head_cpy;

	head_cpy = *head;
	new = NULL;
	i = 0;
	while (head_cpy != NULL)
	{
		if (idx == i)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);
			printf("\n address of new is %p\n", (void *)new);
			new->n = n;
			new->next = head_cpy;
			printf("\nmalloc was created successfully\n");
			printf("\nnew->n = %d | new->next = %p | head_cpy = %p\n", new->n, (void *)new->next, (void *)head_cpy);
			head_cpy = new;
			printf("\n after assigning head_cpy to new->next | head_cpy = %p\n", (void *)new);
			return (new);
		}
		else
		{
			i++;
			printf("\nBefore moving to next node, head_cpy = %p\n", (void *)head_cpy);
			head_cpy = head_cpy->next;
			printf("\nAfter moving to next node, head_cpy = %p\n", (void *)head_cpy);
		}
	}
	if (new == NULL)
		return (NULL);
	return (new);
}
