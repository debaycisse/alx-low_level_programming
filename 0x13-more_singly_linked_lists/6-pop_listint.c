#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - removes a first node in a singly likend list
 * @head: pointer to the memory address of head pointer
 *
 * Return: 0, if error occurs, otherwise, a value of the removed node
 */
int pop_listint(listint_t **head)
{
	listint_t *first_nd_next;
	int first_nd_data;
	listint_t *head_cpy = *head;

	if (*head == NULL)
		return (0);
	first_nd_next = head_cpy->next;
	first_nd_data = head_cpy->n;
	*head = first_nd_next;
	free(head_cpy);
	return (first_nd_data);
}
