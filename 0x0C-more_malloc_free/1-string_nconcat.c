#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - concatenate 2
 * strings with limit for second string
 *
 * @s1: String 1
 * @s2: String 2
 * @n: limit to string 2
 *
 * Return: 98-Null succes-p
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int c1, c2, len1, len2;

	(s1 == NULL) ? s1 = "" : s1;
	(s2 == NULL) ? s2 = "" : s2;

	len1 = _strlen(s1) + 1;
	len2 = _strlen(s2) + 1;

	str =  malloc(sizeof(char) * (len1 + len2));
	if (str != NULL)
	{
		for (c1 = 0; s1[c1] != '\0'; c1++)
		{
			str[c1] = s1[c1];
		}

		for (c2 = 0; c2 < n && s2[c2] != '\0'; c2++, c1++)
		{
			str[c1] = s2[c2];
		}

		str += '\0';

		return (str);
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
