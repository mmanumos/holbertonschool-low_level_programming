#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initialize the structure
 *
 * @d: address to my structure
 * @name: given name
 * @age: given age
 * @owner: given owner
 *
 */


void print_dog(struct dog *d)
{
	char nil[] = "nil";

	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : (nil));

		printf("Age: %f\n", (d->age != 0) ? d->age : 0.0);


		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : (nil));
	}
}
