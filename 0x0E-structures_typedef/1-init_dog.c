#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize the structure
 *
 * @d: address to my structure
 * @name: given name
 * @age: given age
 * @owner: given owner
 *
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if ( d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
