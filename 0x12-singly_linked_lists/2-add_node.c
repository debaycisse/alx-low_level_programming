#include <stddef.h>
#include "lists.h"
#include <string.h>

/**
  Write a function that adds a new node at the beginning of a list_t list.

Prototype: list_t *add_node(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated
You are allowed to use strdup
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	else
	{
		new->str = strdup(str);
		new->len = strlen(str);
		new->next = head;
		head = new;
		return(new);
	}

}
