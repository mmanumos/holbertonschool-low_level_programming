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

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count <  n)
	{
		dest[count] = src[count];
		count++;
	}
	return (src);
}
