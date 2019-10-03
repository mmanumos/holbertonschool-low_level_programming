#include "holberton.h"

/**
 * reverse_array - reverse the array
 * @a: array
 * @n: limit
 *
 * Return: Return string to pointer
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int cont = 0;

	n--;
	while (n > cont)
	{
		tmp = a[cont];
		a[cont] = a[n];
		a[n] = tmp;
		cont++;
		n--;
	}
}
