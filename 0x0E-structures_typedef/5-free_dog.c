#include "dog.h"
#include <stdlib.h>
/**
  void free_dog(dog_t *d);
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
}
