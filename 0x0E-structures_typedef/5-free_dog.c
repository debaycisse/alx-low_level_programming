#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory used space
 * @d: pointer to the dog data whose used space is to be freed
 *
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
}
