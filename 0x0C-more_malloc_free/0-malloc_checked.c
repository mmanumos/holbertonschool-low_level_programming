#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - create a space with
 * malloc for pointers
 *
 * @b: size of pointer
 *
 * Return: 98-Null succes-p
 */


void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	else
		return (p);

}
