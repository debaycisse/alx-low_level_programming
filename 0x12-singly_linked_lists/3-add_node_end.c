#include <stddef.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a node to the end of the list
 * @head: pointer to the pointer that points to first node
 * @str: data(string) that is stored in the new node
 * Return: pointer to the memory location of thee new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	while (*head != NULL)
	{
		*head = *head->next;
		if (*head == NULL)
		{
			new->next = *head;
			*head = new;
		}
	}
	return (new);
}
