#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - appends string to other string
 * @dest: pointed array
 * @src: String to copy
 *
 * Return: Return string to pointer
 */

char *_strcat(char *dest, char *src)
{
	int cont;
	int cont2;

	for (cont = 0; dest[cont] != '\0'; cont++)
		;

	for (cont2 = 0; src[cont2] != '\0'; cont2++)
	{
		dest[cont] = src[cont2];
		cont++;
	}
	dest[cont] = '\0';
	return (dest);
}
