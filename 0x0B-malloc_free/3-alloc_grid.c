#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - return an array
 * multidimensional
 *
 * @height : string1 to concatenate
 * @width : string2 to concatenate
 *
 * Return: fail-Null succes-str
 */

int **alloc_grid(int width, int height)
{
	int c1, c2;
	int **array;

	array = malloc((height) * sizeof(int *));

	if ((array == NULL) || (width < 1) || (height < 1))
		return (NULL);

	for (c1 = 0; c1 < height; c1++)
	{
		array[c1] = malloc(width * sizeof(int));
		if (array[c1] == NULL)
		{
			free(array);
			return (NULL);
		}
		for (c2 = 0; c2 < width; c2++)
		{
			array[c1][c2] = 0;
		}
	}
	return (array);
}
