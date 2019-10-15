#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - concat two strings
 * using malloc to get the size with both string lengths
 *
 * @s1 : string1 to concatenate
 * @s2 : string2 to concatenate
 *
 * Return: fail-Null succes-str
 */

char *str_concat(char *s1, char *s2)
{

	int len1, len2, size;
	(s1 == NULL)? s1 = "" : s1;
	(s2 == NULL)? s2 = "" : s2;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	size = (len1 + len2);

	if ((size) > 0)
	{
		char *dest = malloc(sizeof(char) * size);

		if (dest != NULL)
		{
			int i = 0;
			int k = 0;

			while (i < len1)
			{
				dest[i] = s1[i];
				i++;
			}

			while (i < size)
			{
				dest[i] = s2[k];
				i++;
				k++;
			}
			dest[i] = '\0';
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

