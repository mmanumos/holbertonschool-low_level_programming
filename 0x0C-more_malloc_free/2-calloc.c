#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - allocate memory
 * for array with number elements and size
 *
 * @nmemb: String 1
 * @size: String 2
 *
 * Return: Faill-Null succes-array
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int c1;

	array = malloc(nmemb * size);

	if ((array != NULL) && (nmemb > 0) && (size > 0))
	{
		for (c1 = 0; c1 < (size * nmemb); c1++)
		{
			array[c1] = 0;
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}
