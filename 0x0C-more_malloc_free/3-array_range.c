#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - get an array
 * with min and max
 *
 * @min: Minimum value
 * @max: Maximum value
 *
 * Return: Faill-Null succes-array
 */


int *array_range(int min, int max)
{
	int *array, c1;

	if ((min <= max) && (min >= 0) && (max >= 0))
	{
		array = malloc(((max - min) + 1) * sizeof(int));

		if (array != NULL)
		{
			for (c1 = 0; min <= max; c1++)
			{
				array[c1] = min++;
			}
			return (array);
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
