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
	(s1 == NULL) ? s1 = "" : s1;
	(s2 == NULL) ? s2 = "" : s2;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	size = (len1 + len2);

	if ((size) > 0)
	{
		char *dest = malloc(sizeof(char) * size);

		if (dest != NULL)
		{
			_strncat(dest, s1, size);
			_strncat(dest, s2, size);
			dest += '\0';
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



/**
 * _strncat - appends string to other string
 * @dest: pointed array
 * @src: String to copy
 * @n: chars number
 * Return: Return string to pointer
 */


char *_strncat(char *dest, char *src, int n)
{
	int cont;
	int cont2;
	int cont3;

	for (cont = 0; dest[cont] != '\0'; cont++)
		;

	for (cont2 = 0; src[cont2] != '\0'; cont2++)
		;
	if (n > cont2)
		n = cont2;

	for (cont3 = 0; cont3 < n; cont3++)
	{
		dest[cont] = src[cont3];
		cont++;
	}
	return (dest);
}
