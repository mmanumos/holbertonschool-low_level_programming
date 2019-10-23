#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - print string
 * using the given pointer to function
 *
 * @array: Contains the elements
 * @size: size of array
 * @action: function to pointer
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int c1;

	for (c1 = 0; c1 < size; c1++)
		action(array[c1]);
}
