#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - copy a string to
 * other string and after free it
 *
 * @str : string to copy
 *
 * Return: fail-Null succes-str
 */

char *_strdup(char *str)
{

	int len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = _strlen(str) + 1;

	if (len > 0)
	{
		char *dest = malloc(sizeof(char) * len);

		if (dest != NULL)
		{
			int i = 0;

			while (i < len)
			{
				dest[i] = str[i];
				i++;
			}
			return (dest);
		}
		else
		{
			return (NULL);
		}
	}
	else
	{
		return (NULL);
	}
}


/**
 * _strlen - get the length
 * of string
 *
 * @s : string to measure
 *
 * Return: fail-Null succes-str
 */

int _strlen(char *s)
{
	int cont;

	for (cont = 0; s[cont] != '\0'; cont++)
		;

	return (cont);
}
