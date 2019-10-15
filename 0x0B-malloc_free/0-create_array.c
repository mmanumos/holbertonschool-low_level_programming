#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - create and inicialized an
 * array with malloc
 *
 * @size: size of array
 * @c: initial char
 *
 * Return: fail-Null succes-str
 */


char *create_array(unsigned int size, char c)
{
	if (size > 0)
	{
		char *str = malloc(sizeof(char) * size);
		unsigned int i = 0;

		while (i < size)
		{
			str[i] = c;
			i++;
		}

		return (str);
	}
	else
	{
		return (NULL);
	}
}
