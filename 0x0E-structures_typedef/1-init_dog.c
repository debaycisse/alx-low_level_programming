#include "dog.h"

/**
 * init_dog - initializes the dog struct
 * @d: pointer to an instance of dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 * Description: initializes the dog struct user-defined data type
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
