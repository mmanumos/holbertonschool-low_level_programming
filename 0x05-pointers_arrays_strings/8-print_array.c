#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print array
 * @a: array with values
 * @n: limit values
 *
 */
void print_array(int *a, int n)
{
	int ts;


	for (ts = 0; ts < n; ts++)
	{
		printf("%d", a[ts]);
		if (ts != (n - 1))
			printf(", ");
	}
	putchar('\n');


}
