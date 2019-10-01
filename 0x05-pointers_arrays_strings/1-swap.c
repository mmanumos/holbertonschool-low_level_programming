#include "holberton.h"

/**
 * swap_int - reset values
 * @a: value1
 * @b: value2
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
