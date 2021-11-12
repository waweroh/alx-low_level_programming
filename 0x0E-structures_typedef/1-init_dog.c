#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct dog.
 *
 * @d: dog to be initialized.
 * @name: Dog's name.
 * @age: Age of the dog.
 * @owner: Dog's owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
