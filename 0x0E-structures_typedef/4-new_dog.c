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

	d = malloc(sizeof(dog_t));

	if (d != NULL)
	{
		newname = malloc(sizeof(name));

		if (newname == NULL)
		{
			free(d);
			return (NULL);
		}
		else
		{
			newowner = malloc(sizeof(owner));
		}

		if (newowner == NULL)
		{
			free(d);
			free(newname);
			return (NULL);
		}

		newname = _strcpy(newname, name);
		newowner = _strcpy(newowner, owner);

		d->name = newname;
		d->age = age;
		d->owner = newowner;

		return (d);

	}
	else
		return (NULL);

}


/**
 * _strcpy - reset values from from pointer
 * @dest: pointed array
 * @src: String to copy
 *
 * Return: Return string to pointer
 */
char *_strcpy(char *dest, char *src)
{
	int cont = 0;

	while (src[cont] != '\0')
	{
		dest[cont] = src[cont];
		cont++;
	}
	dest[cont] = '\0';
	return (dest);
}
