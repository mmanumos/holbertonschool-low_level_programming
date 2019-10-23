#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - find the math value
 * using the pointer functions
 * and return the index
 *
 * @array: Contains the elements
 * @size: size of array
 * @cmp: pointer functions
 *
 * Return: -1-fail -1-no_macth -1-size<0 c1-match_index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int c1, ret;

	if (size > 0)
	{


		for (c1 = 0; c1 < size; c1++)
		{
			if (cmp(array[c1]) == 1)
			{
				return (c1);
			}
		}

		if (c1 == size)
			ret = -1;
	}
	else
	{
		ret = -1;
	}

	return (ret);
}
