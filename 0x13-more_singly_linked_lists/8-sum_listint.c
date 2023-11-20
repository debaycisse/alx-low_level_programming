#include <stddef.h>
#include "lists.h"

/**
 * sum_listint - sums up the data of all nodes in a list
 * @head: the head pointer of the singly linked list
 *
 * Return: 0, if there was no single node, otherwise the
 * total value of data of all nodes
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
