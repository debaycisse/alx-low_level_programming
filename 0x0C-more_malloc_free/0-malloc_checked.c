#include <stdlib.h>
/**
 * malloc_checked - creates a dynamic memory space
 * @b: the size of the dynamic storage
 *
 * Return: pointer to the created dynamic memory space
*/

void *malloc_checked(unsigned int b)
{
	void *c = malloc(b);

	if (c == NULL)
		return (NULL);
	return (c);
}
