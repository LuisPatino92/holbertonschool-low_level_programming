#include "dog.h"

/**
 * init_dog - Initializes a dog class structure
 *
 * @d: The structure address
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
