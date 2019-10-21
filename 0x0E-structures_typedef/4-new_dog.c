#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creat a new dog and
 * save name and age
 *
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: Fail-NULL SUCCESS-d
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *newname, *newowner;
	int c1;

	d = malloc(sizeof(dog_t));

	if (d != NULL)
	{
		newname = malloc(sizeof(name));
		newowner = malloc(sizeof(owner));

		if ((newname != NULL) && (newowner != NULL))
		{
			for (c1 = 0; *name; c1++, ++name)
				newname[c1] = *name;

			for (c1 = 0; *owner; c1++, ++owner)
				newowner[c1] = *owner;

			d->name = newname;
			d->age = age;
			d->owner = newowner;

			return (d);

		}
		else
			return (NULL);
	}
	else
		return (NULL);

}
