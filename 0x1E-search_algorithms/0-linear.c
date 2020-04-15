#include "search_algos.h"

/**
 * linear_search - Search into the list the given value.
 *
 * @array: list
 * @size: size of array
 * @value: value to match
 *
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}

	}
	return (-1);
}
