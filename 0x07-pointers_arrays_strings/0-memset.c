#include "holberton.h"
#include <stdio.h>
/**
 * _memset - copy values until limit
 * @s: buffer
 * @b: new value
 * @n: limit to replace
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count <= n; count++)
	{
		s[count] = b;
	}
	return (s);
}
