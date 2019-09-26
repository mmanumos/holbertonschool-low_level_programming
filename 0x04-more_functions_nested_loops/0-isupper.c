#include "holberton.h"

/**
 * _isupper - is upper or no
 * @c: variable
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);

}
