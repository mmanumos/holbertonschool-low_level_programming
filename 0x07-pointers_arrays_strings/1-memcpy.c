#include "holberton.h"
#include <stdio.h>
/**
 * _memcpy - replace values into dest
 * @dest: string dest
 * @src: string with values
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
	return (dest);
}
