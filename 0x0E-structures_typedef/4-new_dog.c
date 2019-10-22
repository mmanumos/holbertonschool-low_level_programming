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

		newname = _strdup(name);
		newowner = _strdup(owner);

		d->name = newname;
		d->age = age;
		d->owner = newowner;

		return (d);

	}
	else
		return (NULL);

}

/**
 * _strdup - copy a string to
 * other string and after free it
 *
 * @str : string to copy
 *
 * Return: fail-Null succes-str
 */

char *_strdup(char *str)
{

	int len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = _strlen(str) + 1;

	if (len > 0)
	{
		char *dest = malloc(sizeof(char) * len);

		if (dest != NULL)
		{
			int i = 0;

			while (i < len)
			{
				dest[i] = str[i];
				i++;
			}
			return (dest);
		}
		else
		{
			return (NULL);
		}
	}
	else
	{
		return (NULL);
	}
}


/**
 * _strlen - get the length
 * of string
 *
 * @s : string to measure
 *
 * Return: fail-Null succes-str
 */

int _strlen(char *s)
{
	int cont;

	for (cont = 0; s[cont] != '\0'; cont++)
		;

	return (cont);
}
