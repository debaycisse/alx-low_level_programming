#include <stddef.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a node to the end of the list
 * @head: pointer to the pointer that points to first node
 * @str: data(in form of string in this instance) that's stored in the new node
 * Return: pointer to the memory location of thee new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *head_cpy = NULL;

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else if (*head != NULL)
	{
		head_cpy = *head;
		while (head_cpy->next != NULL)
		{
			head_cpy = head_cpy->next;
		}
		head_cpy->next = new;
	}
	return (new);
}
