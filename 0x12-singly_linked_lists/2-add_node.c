#include <stddef.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds new node to the list
 * @head: pointer to the memory location of the pointer that ppoints to head
 * @str: the string or data to be stored
 * Return: the pointer to the memory location of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
