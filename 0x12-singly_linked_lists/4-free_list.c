#include "lists.h"
#include <stdlib.h>
#include <stddef.h>


/**
 * free_list - frees memory space, used by the node(s)
 * @head: the first header that points to the memory address of the first node
*/
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
