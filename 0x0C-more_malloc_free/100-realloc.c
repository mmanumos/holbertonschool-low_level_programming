#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _realloc - get an array
 * with min and max
 *
 * @ptr: Minimum value
 * @old_size: Maximum value
 * @new_size: Maximum value
 *
 * Return: Faill-Null succes-array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;

	if (new_size > old_size)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
