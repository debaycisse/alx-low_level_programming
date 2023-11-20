#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct listint_s - singly linked list
 * @n: integer or type of data to be stored
 * @next: pointer, it points to the memory address of the next node structure
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
int _putchar(char ch);
size_t print_listint(const listint_t *h);

#endif
