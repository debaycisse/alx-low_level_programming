#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees used memory space by a linked list's nodes
 * @head: pointer to the address of the head node
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *head_cpy;
	listint_t *head_cpy2;

	head_cpy = *head;
	while (head_cpy != NULL)
	{
		head_cpy2 = head_cpy->next;
		free(head_cpy);
		head_cpy = head_cpy2;
	}
	*head = NULL;
}
