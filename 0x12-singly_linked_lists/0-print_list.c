#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the list of nodes
 * @h: the pointer to the memory location of the first node
 * Return: the number nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *h_cpy = h;

	while (h_cpy != NULL)
	{
		count++;
		h_cpy = h_cpy->next;
	}
	h_cpy = h;
	while (h_cpy != NULL)
	{
		if (h_cpy->str == NULL)
			printf("[0] (nil)\n");
		if (h_cpy->str != NULL)
			printf("[%u] %s\n", h_cpy->len, h_cpy->str);
		h_cpy = h_cpy->next;
	}
	return (count);
}
