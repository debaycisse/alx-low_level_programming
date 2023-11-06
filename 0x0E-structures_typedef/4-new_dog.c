#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog's instance
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner's name
 * Description: creates a new dog instance. Its definition contains
 * the newly created data type for 'struct dog' type name
 * Return: pointer to the newly created instance
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
