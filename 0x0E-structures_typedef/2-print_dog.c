#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - print arguments from dog
 *
 * @d: address to my structure
 *
 */


void print_dog(struct dog *d)
{
	char nil[] = "(nil)";

	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : (nil));

		if (d->age != 0)
			printf("Age: %f\n", d->age);
		else
			printf("Age: (nil)\n");

		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : (nil));
	}
}
