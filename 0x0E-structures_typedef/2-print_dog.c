#include <stdio.h>
#include "dog.h"

/**
 * print_dog - outputs dog's information
 * @d: pointer to the dog's struct data
 *
 * Description: prints dog's data on the standard output
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	if (d->age <= 0.0)
		printf("Age: (nil)\n");
	if (d->age > 0.0)
		printf("Age: %1.6f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
}
