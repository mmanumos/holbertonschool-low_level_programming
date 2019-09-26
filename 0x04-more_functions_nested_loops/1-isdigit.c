#include "holberton.h"

/**
 * _isdigit - is digit or no
 * @c: variable
 * Return: Always 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);

}
