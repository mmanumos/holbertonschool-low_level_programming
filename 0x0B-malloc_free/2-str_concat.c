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

	char *dest = malloc(sizeof(char) * (size + 1));

	if (dest == NULL)
		return (NULL);

	_strncat(dest, s1, len1);
	_strncat(dest, s2, len2);
	dest += '\0';
	return (dest);

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
	int st, count;

	st = _strlen(dest);

	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		dest[st + count] = src[count];
	}

	return (dest);
}
