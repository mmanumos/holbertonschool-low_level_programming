#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array -
 *
 *
 *
 *
 *
 */


char *create_array(unsigned int size, char c)
{
	if (size > 0)
	{
		char *str = malloc(sizeof(char)*size);
		unsigned int i = 0;

		while (i < size)
		{
			str[i] = c;
			i++;
		}

		return (str);
	}
	else{
		return (NULL);
	}
}
