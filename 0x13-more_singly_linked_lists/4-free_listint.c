#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees up used memory space of singly linked list
 * @head: pointer to the first node of the list
 *
 * Description: frees used memory space
 */
void free_listint(listint_t *head)
{
	listint_t *head_cpy;

	while (head != NULL)
	{
		head_cpy = head->next;
		free(head);
		head = head_cpy;
	}
}
