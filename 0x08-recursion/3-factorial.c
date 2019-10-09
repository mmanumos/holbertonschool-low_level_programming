#include "holberton.h"

/**
 * factorial - get the factorial of a given number
 *
 * @n : given number
 *
 * Return: length
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else
		return ((n <= 1) ? 1 : (n * factorial(n - 1)));
}
