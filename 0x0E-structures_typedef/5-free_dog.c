#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - free strcuture
 *
 * @d: pointer to structure
 *
 * Return: Fail-NULL SUCCESS-d
 */


void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
