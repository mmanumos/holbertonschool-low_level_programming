#include "holberton.h"

/**
 * _abs - absolute value
 *@n: variable
 *
 * Return: Always 0
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n * -1);
	}
}
